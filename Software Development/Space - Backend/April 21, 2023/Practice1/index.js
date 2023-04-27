/*
    @resource:  https://youtu.be/t9GVn5j1Hsw
 */

/// receiving multiple exports from 'app.js' file
const { app, PORT } = require('./app');

app.listen(PORT, () => {
    console.log(`Server is running on http://localhost:${PORT}`);
});