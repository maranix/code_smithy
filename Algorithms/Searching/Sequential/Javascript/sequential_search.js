function main() {
    let list = [];
    let found = false;

    console.log("Enter integer elements in list: ");
    while (1) {
        let elements = prompt();
        if (elements === "q") {
            break;
        } else {
            list.push(elements);
        }
    }

    let search = prompt("Enter the number to search: ");

    list.forEach((l) => {
        if (l === search) {
            found = true;
        }
    });

    if (found === false) {
        return "Not found";
    } else {
        return "Found";
    }
}

main();
