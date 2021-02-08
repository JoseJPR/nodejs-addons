// Import Addon dependencies.
const addon = require('./addon/build/Release/addon');

// Instance method.
const runAddon = () => addon.handler('Jose');

// Run function.
runAddon();