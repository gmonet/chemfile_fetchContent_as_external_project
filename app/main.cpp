#include <iostream>
#include <chemfiles.hpp>

int main(int, char**) {
    std::cout << "Hello, world!\n";
    auto frame = chemfiles::Frame(chemfiles::UnitCell({10, 10, 10}));

    frame.add_atom(chemfiles::Atom("H"), {1, 0, 0});
    frame.add_atom(chemfiles::Atom("O"), {0, 0, 0});
    frame.add_atom(chemfiles::Atom("H"), {0, 1, 0});

    frame.add_bond(0, 1);
    frame.add_bond(2, 1);

    auto trajectory = chemfiles::Trajectory("water.pdb", 'w');
    trajectory.write(frame);


    return 0;
}
