// Import Addon dependencies.
const addon = require('./addon/build/Release/addon');

// Instance method.
const runAddon = () => addon.helloWorld();

// Run function.
runAddon();