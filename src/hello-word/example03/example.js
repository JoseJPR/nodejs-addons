// Import Addon dependencies.
const addon = require('./addon/build/Release/addon');

// Instance method.
const runAddon = () => addon.helloWorld('Jose');

// Run function.
runAddon();