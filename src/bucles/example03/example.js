// Import Addon dependencies.
const addon = require('./addon/build/Release/addon');

// Instance method.
const runAddon = () => addon.handler();

// Run function.
runAddon();