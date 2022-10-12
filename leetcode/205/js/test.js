var main = () => {

  var arr = []
  arr['c'] = 'd'
  arr['d'] = 'w'
  arr['g'] = 'g'
  for(let c in arr) {
    console.log(c)
  }

  var str = 'abcde'
  console.log(str[0] == 97)
}

main()