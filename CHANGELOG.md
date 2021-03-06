# Change Log
All notable changes to this project will be documented in this file.
This project adheres to [Semantic Versioning](http://semver.org/).

## [ 0.3.0 ] - [ 2019-05-01 ]
### Added
- qxelerator to support cqasm v1.0
- setup instructions in README.md


### Changed
-

### Removed
-

### Fixed
-

## [ 0.2.5 ] - [ 2018-12-21 ]
### Added
- 

### Changed
-

### Removed
-

### Fixed
- Fixed issue with libqasm submodule, this release is now with the correct version


## [ 0.2.4 ] - [ 2018-12-14 ]
### Added
- 

### Changed
-

### Removed
- Removed -u 0 in Jenkinsfile again


### Fixed
- Single qubit operations now accept integers as arguments, previously it required floats


## [ 0.2.3 ] - [ 2018-11-05 ]
### Added
- 

### Changed
- Updated the libqasm to get the hotfix

### Removed
- 

### Fixed
- Fixed pthread mutex locking bug in XPU worker.


## [ 0.2.2 ] - [ 2018-09-25 ]
### Added
- 

### Changed
-

### Removed
- 

### Fixed
- Fixed bug in measurement and preparation implementation for large number of qubits.
- Fixed verbose GNU Compiler warnings under Linux.


## [ 0.2.1 ] - [ 2018-09-04 ]
### Added
- Enabled quantum noise simulation using the Depolarizing Error Model
- Added multishot simulation mode to save simulation time on the Quantum Inspire web platform.
- Enabled Identity gate support

### Changed
-

### Removed
- 

### Fixed
- 


## [ 0.2.0 ] - [ 2018-08-23 ]
### Added
- Initial cQASM 1.0 support.
- Integrated with libqasm 0.1.1 release.
- Added support for new quantum gates:
   - Flexible controlled phase shift (CR and CRK)
   - Measurement and Preparation in X/Y/Z basis: added measure_x, measure_y, prep_x and prep_y.
- Added support for Single Gate Multiple Qubits (SGMQ).
- Added a new set of unit tests.


### Changed
- Re-implemented classical NOT gate for full binary-controlled gate support.

### Removed
-

### Fixed
- Fixed overflow bug when simulating more than 31 qubits.
- Fixed bug in qubit register measurement ("measure_all" instruction).

