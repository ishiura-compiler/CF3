#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MIN;
uint32_t x8 = 1913469356U;
int64_t x12 = -1LL;
int64_t t2 = 216705357LL;
uint64_t x14 = 2LLU;
static volatile uint64_t t3 = 58669553120LLU;
uint64_t x26 = UINT64_MAX;
volatile uint64_t t5 = 7428711151629LLU;
int8_t x35 = INT8_MAX;
static int8_t x36 = -56;
uint32_t t8 = 208U;
volatile int16_t x42 = -1;
int8_t x44 = 1;
volatile int64_t t9 = -166328564LL;
int64_t x56 = -1592554LL;
int64_t t11 = 85459LL;
volatile int16_t x64 = INT16_MIN;
int8_t x66 = INT8_MIN;
int8_t x70 = INT8_MAX;
uint8_t x79 = 5U;
int32_t x108 = -28406;
uint64_t x114 = 335751645175LLU;
uint8_t x118 = 1U;
static uint16_t x123 = 177U;
uint16_t x124 = UINT16_MAX;
int32_t x127 = 62078503;
int64_t x133 = -12204LL;
static volatile int16_t x135 = INT16_MAX;
volatile uint16_t x136 = 27U;
volatile int64_t t24 = 1LL;
static volatile int8_t x144 = -1;
static uint64_t x151 = 3807937LLU;
volatile int16_t x169 = INT16_MIN;
uint16_t x171 = 508U;
int8_t x173 = 3;
volatile int8_t x175 = INT8_MAX;
volatile int16_t x177 = INT16_MIN;
int64_t x179 = -1LL;
volatile int64_t x180 = -1LL;
uint64_t t33 = 2013862173050642LLU;
uint64_t x185 = UINT64_MAX;
static volatile int64_t x188 = -955829831201LL;
uint64_t t34 = 1753752546724LLU;
uint64_t t35 = 10460318957782079LLU;
static volatile int32_t x207 = 3;
int64_t x212 = -1LL;
static int16_t x221 = INT16_MIN;
volatile int32_t t38 = 29916;
uint32_t x228 = 507521831U;
uint32_t x229 = 0U;
int16_t x232 = -1;
static uint64_t x238 = UINT64_MAX;
static uint8_t x239 = UINT8_MAX;
uint16_t x251 = 2U;
int64_t x260 = -1LL;
uint32_t x262 = 235028U;
uint8_t x265 = 2U;
uint32_t x266 = UINT32_MAX;
uint16_t x269 = 25893U;
int64_t x270 = -8205086LL;
int8_t x274 = 7;
int8_t x284 = 29;
int8_t x286 = -1;
uint64_t t50 = 935127035272LLU;
uint64_t x289 = 249331053140210628LLU;
int32_t x290 = 15;
uint64_t x298 = 932232496505055LLU;
int8_t x312 = -1;
volatile int64_t t55 = 252381152946LL;
static int32_t x335 = -1;
int16_t x340 = -1;
volatile uint64_t t58 = 264110099467LLU;
volatile int8_t x341 = INT8_MAX;
uint32_t x367 = 69U;
int16_t x369 = INT16_MIN;
int16_t x376 = INT16_MAX;
uint32_t t65 = 529913766U;
static int32_t x388 = -102780083;
uint32_t x390 = 1U;
uint32_t t67 = 18027U;
uint64_t x410 = 547455156868158LLU;
static int8_t x415 = 1;
static int32_t t70 = 1;
int16_t x417 = -1;
volatile int8_t x423 = INT8_MIN;
volatile uint32_t x435 = UINT32_MAX;
static int64_t t75 = -2591429146914618LL;
volatile int16_t x445 = INT16_MIN;
uint8_t x448 = 15U;
int16_t x458 = INT16_MIN;
int8_t x462 = INT8_MAX;
int32_t x463 = -1;
uint32_t t78 = 2659518U;
int8_t x485 = -1;
uint64_t t81 = 0LLU;
int64_t t83 = -906761444497579644LL;
uint64_t x526 = UINT64_MAX;
volatile uint64_t t85 = 44508829430LLU;
uint64_t t87 = 12162028546493654LLU;
volatile uint8_t x542 = UINT8_MAX;
volatile int32_t t89 = 545;
volatile int32_t t90 = 2;
uint8_t x564 = UINT8_MAX;
volatile int32_t t91 = 797;
int32_t x567 = INT32_MIN;
int8_t x581 = -42;
int16_t x584 = INT16_MAX;
volatile int64_t x585 = 759627590531648LL;
int32_t x586 = -1;
uint8_t x588 = 1U;
int64_t t96 = 5852990208LL;
uint32_t x591 = 6232859U;
uint16_t x592 = 19U;
volatile uint64_t t97 = 1996129298003LLU;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile int32_t x2 = 3220075;
	uint32_t x3 = UINT32_MAX;
	uint8_t x4 = 0U;
	int64_t t0 = 12LL;

	t0 = ((x1+(x2*x3))*x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 10;
	int8_t x7 = INT8_MIN;
	uint32_t t1 = 23598675U;

	t1 = ((x5+(x6*x7))*x8);

	if (t1 != 3749986488U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	volatile int64_t x10 = -1LL;
	int8_t x11 = 20;

	t2 = ((x9+(x10*x11))*x12);

	if (t2 != 21LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int32_t x15 = -1;
	uint16_t x16 = 6215U;

	t3 = ((x13+(x14*x15))*x16);

	if (t3 != 18446744073505886066LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	int32_t x22 = INT32_MAX;
	uint64_t x23 = 11916893LLU;
	int32_t x24 = -1;
	static volatile uint64_t t4 = 109748825867656868LLU;

	t4 = ((x21+(x22*x23))*x24);

	if (t4 != 18421152743016486493LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1LL;
	uint8_t x27 = UINT8_MAX;
	uint64_t x28 = 437243995LLU;

	t5 = ((x25+(x26*x27))*x28);

	if (t5 != 18446743961775088896LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 68U;
	uint64_t x30 = 748665342LLU;
	uint16_t x31 = 182U;
	int64_t x32 = INT64_MIN;
	volatile uint64_t t6 = 484124LLU;

	t6 = ((x29+(x30*x31))*x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x33 = UINT8_MAX;
	int64_t x34 = 166862LL;
	static volatile int64_t t7 = -2848015561103061929LL;

	t7 = ((x33+(x34*x35))*x36);

	if (t7 != -1186736824LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	int8_t x38 = INT8_MIN;
	static int8_t x39 = 0;
	uint32_t x40 = 185U;

	t8 = ((x37+(x38*x39))*x40);

	if (t8 != 23495U) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = 109LL;
	uint8_t x43 = UINT8_MAX;

	t9 = ((x41+(x42*x43))*x44);

	if (t9 != -146LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x49 = UINT16_MAX;
	static int16_t x50 = -1;
	static int8_t x51 = INT8_MIN;
	int8_t x52 = INT8_MAX;
	volatile int32_t t10 = -491877940;

	t10 = ((x49+(x50*x51))*x52);

	if (t10 != 8339201) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	volatile uint16_t x54 = 1U;
	int32_t x55 = -1;

	t11 = ((x53+(x54*x55))*x56);

	if (t11 != 52186402026LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = 391;
	static int16_t x58 = INT16_MAX;
	static uint8_t x59 = 99U;
	static volatile uint64_t x60 = 98LLU;
	uint64_t t12 = 51LLU;

	t12 = ((x57+(x58*x59))*x60);

	if (t12 != 317943752LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = -114;
	uint32_t x62 = 2372030U;
	uint16_t x63 = 16605U;
	static uint32_t t13 = 423U;

	t13 = ((x61+(x62*x63))*x64);

	if (t13 != 3350593536U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 0U;
	static uint64_t x67 = 103712LLU;
	static uint8_t x68 = 5U;
	uint64_t t14 = 49614226LLU;

	t14 = ((x65+(x66*x67))*x68);

	if (t14 != 18446744073643175936LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = UINT32_MAX;
	int8_t x71 = 1;
	int32_t x72 = -1;
	volatile uint32_t t15 = 879546U;

	t15 = ((x69+(x70*x71))*x72);

	if (t15 != 4294967170U) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x73 = -1LL;
	int32_t x74 = -414;
	volatile int8_t x75 = -3;
	uint16_t x76 = 1U;
	int64_t t16 = -80597LL;

	t16 = ((x73+(x74*x75))*x76);

	if (t16 != 1241LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x77 = 58U;
	uint64_t x78 = 66473023LLU;
	int16_t x80 = -1;
	uint64_t t17 = 2109116551727100241LLU;

	t17 = ((x77+(x78*x79))*x80);

	if (t17 != 18446744073377186443LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x101 = 19;
	int32_t x102 = 2;
	uint8_t x103 = 104U;
	uint64_t x104 = 1826624LLU;
	static uint64_t t18 = 12780304029LLU;

	t18 = ((x101+(x102*x103))*x104);

	if (t18 != 414643648LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x105 = 2U;
	uint16_t x106 = 161U;
	int64_t x107 = 1347805924458LL;
	static volatile int64_t t19 = 2LL;

	t19 = ((x105+(x106*x107))*x108);

	if (t19 != -6164009789514842440LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x113 = INT64_MIN;
	uint8_t x115 = UINT8_MAX;
	volatile uint64_t x116 = 1100261670803LLU;
	uint64_t t20 = 752582120103667919LLU;

	t20 = ((x113+(x114*x115))*x116);

	if (t20 != 15495007367764867371LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x117 = -9721651;
	int64_t x119 = -1LL;
	uint32_t x120 = 1637552U;
	volatile int64_t t21 = -2145068645975LL;

	t21 = ((x117+(x118*x119))*x120);

	if (t21 != -15919710675904LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x121 = 1;
	uint8_t x122 = 71U;
	int32_t t22 = 1;

	t22 = ((x121+(x122*x123))*x124);

	if (t22 != 823643880) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x125 = -1;
	static volatile int16_t x126 = 10;
	static uint64_t x128 = 43217975077725904LLU;
	uint64_t t23 = 382109062883LLU;

	t23 = ((x125+(x126*x127))*x128);

	if (t23 != 16650679738441071120LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x134 = INT8_MIN;

	t24 = ((x133+(x134*x135))*x136);

	if (t24 != -113572260LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x137 = 300518527LL;
	static int16_t x138 = INT16_MIN;
	volatile int16_t x139 = -173;
	uint32_t x140 = UINT32_MAX;
	volatile int64_t t25 = -216282706LL;

	t25 = ((x137+(x138*x139))*x140);

	if (t25 != 1315064830486377345LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x141 = 3135U;
	static int32_t x142 = INT32_MIN;
	int64_t x143 = -1LL;
	static volatile int64_t t26 = -67388593021664770LL;

	t26 = ((x141+(x142*x143))*x144);

	if (t26 != -2147486783LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x149 = 2636127U;
	int32_t x150 = -135;
	int64_t x152 = 1150090LL;
	volatile uint64_t t27 = 1234921186LLU;

	t27 = ((x149+(x150*x151))*x152);

	if (t27 != 18446155877007168496LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x153 = INT16_MIN;
	volatile int16_t x154 = INT16_MAX;
	static volatile uint64_t x155 = 29263833LLU;
	int32_t x156 = 35001458;
	volatile uint64_t t28 = 13243668436088LLU;

	t28 = ((x153+(x154*x155))*x156);

	if (t28 != 15115733394974870878LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x157 = -10199714204LL;
	int16_t x158 = -12850;
	int8_t x159 = INT8_MIN;
	uint8_t x160 = UINT8_MAX;
	int64_t t29 = -3061049510483899449LL;

	t29 = ((x157+(x158*x159))*x160);

	if (t29 != -2600507698020LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x170 = 99;
	uint32_t x172 = 30U;
	uint32_t t30 = 1318135U;

	t30 = ((x169+(x170*x171))*x172);

	if (t30 != 525720U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x174 = -1;
	static int16_t x176 = INT16_MIN;
	int32_t t31 = 510;

	t31 = ((x173+(x174*x175))*x176);

	if (t31 != 4063232) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x178 = -127LL;
	int64_t t32 = 20LL;

	t32 = ((x177+(x178*x179))*x180);

	if (t32 != 32641LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x181 = -1;
	uint64_t x182 = 3LLU;
	int8_t x183 = 4;
	int32_t x184 = -1;

	t33 = ((x181+(x182*x183))*x184);

	if (t33 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x186 = -1;
	uint16_t x187 = 0U;

	t34 = ((x185+(x186*x187))*x188);

	if (t34 != 955829831201LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x193 = 0U;
	int16_t x194 = -70;
	int8_t x195 = -4;
	static uint64_t x196 = UINT64_MAX;

	t35 = ((x193+(x194*x195))*x196);

	if (t35 != 18446744073709551336LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x205 = -1;
	uint64_t x206 = UINT64_MAX;
	uint16_t x208 = 4U;
	volatile uint64_t t36 = 1004280996054542LLU;

	t36 = ((x205+(x206*x207))*x208);

	if (t36 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x209 = 19;
	static int8_t x210 = 1;
	int8_t x211 = INT8_MIN;
	volatile int64_t t37 = -2597143624926LL;

	t37 = ((x209+(x210*x211))*x212);

	if (t37 != 109LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x222 = 0;
	int32_t x223 = INT32_MIN;
	int16_t x224 = INT16_MAX;

	t38 = ((x221+(x222*x223))*x224);

	if (t38 != -1073709056) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x225 = -1;
	int32_t x226 = -28540;
	static volatile uint64_t x227 = UINT64_MAX;
	volatile uint64_t t39 = 433751026155206LLU;

	t39 = ((x225+(x226*x227))*x228);

	if (t39 != 14484165534909LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x230 = 74U;
	int32_t x231 = -7051;
	uint32_t t40 = 416579U;

	t40 = ((x229+(x230*x231))*x232);

	if (t40 != 521774U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x237 = 87;
	static int16_t x240 = -1093;
	uint64_t t41 = 3431550765LLU;

	t41 = ((x237+(x238*x239))*x240);

	if (t41 != 183624LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x241 = INT64_MIN;
	uint64_t x242 = 1203930LLU;
	uint64_t x243 = 15LLU;
	volatile int64_t x244 = INT64_MAX;
	uint64_t t42 = 69512522626171LLU;

	t42 = ((x241+(x242*x243))*x244);

	if (t42 != 9223372036836716858LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x249 = -1;
	uint32_t x250 = UINT32_MAX;
	int8_t x252 = 2;
	uint32_t t43 = 1035U;

	t43 = ((x249+(x250*x251))*x252);

	if (t43 != 4294967290U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x257 = INT16_MIN;
	int16_t x258 = 65;
	int16_t x259 = INT16_MAX;
	volatile int64_t t44 = -67041332LL;

	t44 = ((x257+(x258*x259))*x260);

	if (t44 != -2097087LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x261 = UINT64_MAX;
	int16_t x263 = INT16_MAX;
	static int16_t x264 = 0;
	static uint64_t t45 = 113343030727413LLU;

	t45 = ((x261+(x262*x263))*x264);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x267 = INT8_MAX;
	int16_t x268 = -1757;
	uint32_t t46 = 37966U;

	t46 = ((x265+(x266*x267))*x268);

	if (t46 != 219625U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x271 = INT32_MIN;
	int16_t x272 = -1;
	volatile int64_t t47 = -17834249LL;

	t47 = ((x269+(x270*x271))*x272);

	if (t47 != -17620288015459621LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x273 = 101614LLU;
	uint64_t x275 = 989851384438529436LLU;
	int64_t x276 = -1LL;
	uint64_t t48 = 100778712652940437LLU;

	t48 = ((x273+(x274*x275))*x276);

	if (t48 != 11517784382639743950LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x281 = -1;
	int64_t x282 = -221918LL;
	static int8_t x283 = -11;
	int64_t t49 = 34LL;

	t49 = ((x281+(x282*x283))*x284);

	if (t49 != 70791813LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x285 = -1;
	int8_t x287 = 0;
	uint64_t x288 = 25070126240LLU;

	t50 = ((x285+(x286*x287))*x288);

	if (t50 != 18446744048639425376LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x291 = INT8_MIN;
	int16_t x292 = -1;
	volatile uint64_t t51 = 1325LLU;

	t51 = ((x289+(x290*x291))*x292);

	if (t51 != 18197413020569342908LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x293 = 246;
	int8_t x294 = 4;
	uint32_t x295 = 781498U;
	uint16_t x296 = 14198U;
	static volatile uint32_t t52 = 80845770U;

	t52 = ((x293+(x294*x295))*x296);

	if (t52 != 1436654164U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x297 = 0U;
	int16_t x299 = -1;
	static uint64_t x300 = UINT64_MAX;
	static uint64_t t53 = 763857200LLU;

	t53 = ((x297+(x298*x299))*x300);

	if (t53 != 932232496505055LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x305 = INT16_MIN;
	volatile uint16_t x306 = UINT16_MAX;
	uint64_t x307 = 681LLU;
	volatile int64_t x308 = 52260277197070LL;
	volatile uint64_t t54 = 9663LLU;

	t54 = ((x305+(x306*x307))*x308);

	if (t54 != 6339200170300955074LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x309 = INT32_MAX;
	int64_t x310 = 110215LL;
	int64_t x311 = -1LL;

	t55 = ((x309+(x310*x311))*x312);

	if (t55 != -2147373432LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x313 = 7328LLU;
	int64_t x314 = -1LL;
	uint64_t x315 = 419619LLU;
	int32_t x316 = 126780;
	volatile uint64_t t56 = 1LLU;

	t56 = ((x313+(x314*x315))*x316);

	if (t56 != 18446744021439298636LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x333 = -184LL;
	static uint16_t x334 = 27877U;
	static int8_t x336 = INT8_MIN;
	int64_t t57 = -339LL;

	t57 = ((x333+(x334*x335))*x336);

	if (t57 != 3591808LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x337 = INT32_MIN;
	uint32_t x338 = UINT32_MAX;
	uint64_t x339 = 14682907042238130LLU;

	t58 = ((x337+(x338*x339))*x340);

	if (t58 != 5597511808346082994LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x342 = 28U;
	static int8_t x343 = INT8_MAX;
	int16_t x344 = INT16_MIN;
	int32_t t59 = 31143;

	t59 = ((x341+(x342*x343))*x344);

	if (t59 != -120684544) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x349 = -1;
	volatile int8_t x350 = 0;
	volatile int8_t x351 = -1;
	int8_t x352 = INT8_MIN;
	static volatile int32_t t60 = 17;

	t60 = ((x349+(x350*x351))*x352);

	if (t60 != 128) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x365 = INT64_MAX;
	static uint64_t x366 = UINT64_MAX;
	volatile int16_t x368 = 1;
	uint64_t t61 = 136783469LLU;

	t61 = ((x365+(x366*x367))*x368);

	if (t61 != 9223372036854775738LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x370 = 1LLU;
	volatile int32_t x371 = INT32_MAX;
	static volatile uint16_t x372 = 282U;
	volatile uint64_t t62 = 2941726068LLU;

	t62 = ((x369+(x370*x371))*x372);

	if (t62 != 605581147878LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x373 = 4107U;
	static volatile int8_t x374 = INT8_MIN;
	int64_t x375 = -1LL;
	int64_t t63 = -126601327LL;

	t63 = ((x373+(x374*x375))*x376);

	if (t63 != 138768245LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x377 = INT8_MAX;
	volatile uint8_t x378 = UINT8_MAX;
	static uint16_t x379 = 7U;
	volatile int64_t x380 = -1LL;
	static int64_t t64 = 147LL;

	t64 = ((x377+(x378*x379))*x380);

	if (t64 != -1912LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x381 = 105450U;
	static int8_t x382 = INT8_MIN;
	int8_t x383 = -1;
	uint32_t x384 = 18985975U;

	t65 = ((x381+(x382*x383))*x384);

	if (t65 != 3046508614U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x385 = INT32_MIN;
	int8_t x386 = 0;
	int64_t x387 = INT64_MAX;
	int64_t t66 = 120145480LL;

	t66 = ((x385+(x386*x387))*x388);

	if (t66 != 220718547582582784LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x389 = INT16_MIN;
	volatile int32_t x391 = 107;
	int32_t x392 = INT32_MIN;

	t67 = ((x389+(x390*x391))*x392);

	if (t67 != 2147483648U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x397 = INT16_MAX;
	static volatile int8_t x398 = -1;
	static int8_t x399 = -1;
	static volatile int8_t x400 = INT8_MAX;
	volatile int32_t t68 = 37;

	t68 = ((x397+(x398*x399))*x400);

	if (t68 != 4161536) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x409 = UINT8_MAX;
	volatile uint8_t x411 = UINT8_MAX;
	static int32_t x412 = 5052;
	uint64_t t69 = 231957078566LLU;

	t69 = ((x409+(x410*x411))*x412);

	if (t69 != 4288305586011551932LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x413 = 25U;
	int16_t x414 = INT16_MAX;
	static int16_t x416 = -1;

	t70 = ((x413+(x414*x415))*x416);

	if (t70 != -32792) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x418 = -1;
	static int64_t x419 = -1LL;
	int8_t x420 = INT8_MAX;
	int64_t t71 = 0LL;

	t71 = ((x417+(x418*x419))*x420);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x421 = UINT64_MAX;
	int8_t x422 = INT8_MAX;
	volatile int16_t x424 = INT16_MIN;
	volatile uint64_t t72 = 512842LLU;

	t72 = ((x421+(x422*x423))*x424);

	if (t72 != 532709376LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x425 = 0;
	volatile uint64_t x426 = 5191209258929LLU;
	volatile int16_t x427 = INT16_MAX;
	uint32_t x428 = UINT32_MAX;
	volatile uint64_t t73 = 408LLU;

	t73 = ((x425+(x426*x427))*x428);

	if (t73 != 15658205496187719601LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x433 = -1313;
	static int8_t x434 = 0;
	static int8_t x436 = INT8_MIN;
	uint32_t t74 = 939U;

	t74 = ((x433+(x434*x435))*x436);

	if (t74 != 168064U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x437 = INT32_MIN;
	volatile int64_t x438 = 1628672574086LL;
	int8_t x439 = INT8_MIN;
	int32_t x440 = -1;

	t75 = ((x437+(x438*x439))*x440);

	if (t75 != 208472236966656LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x446 = 28908773657637LLU;
	int8_t x447 = 25;
	static uint64_t t76 = 0LLU;

	t76 = ((x445+(x446*x447))*x448);

	if (t76 != 10840790121122355LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x457 = UINT64_MAX;
	static volatile int64_t x459 = -1LL;
	static int16_t x460 = 0;
	uint64_t t77 = 7209472962LLU;

	t77 = ((x457+(x458*x459))*x460);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x461 = 102450U;
	int8_t x464 = INT8_MAX;

	t78 = ((x461+(x462*x463))*x464);

	if (t78 != 12995021U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x465 = -1LL;
	int8_t x466 = -1;
	volatile int8_t x467 = INT8_MIN;
	uint8_t x468 = 24U;
	int64_t t79 = 17150492998308LL;

	t79 = ((x465+(x466*x467))*x468);

	if (t79 != 3048LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x481 = -83270;
	volatile int32_t x482 = -1;
	volatile int16_t x483 = INT16_MIN;
	static int8_t x484 = INT8_MAX;
	int32_t t80 = 4734201;

	t80 = ((x481+(x482*x483))*x484);

	if (t80 != -6413754) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x486 = 1;
	static volatile uint8_t x487 = 1U;
	uint64_t x488 = UINT64_MAX;

	t81 = ((x485+(x486*x487))*x488);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x505 = 1U;
	uint8_t x506 = UINT8_MAX;
	volatile int64_t x507 = -1LL;
	uint8_t x508 = 0U;
	static volatile int64_t t82 = -2LL;

	t82 = ((x505+(x506*x507))*x508);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x517 = UINT16_MAX;
	volatile int64_t x518 = -3027575949775LL;
	uint16_t x519 = 4027U;
	uint16_t x520 = 45U;

	t83 = ((x517+(x518*x519))*x520);

	if (t83 != -548642175735527550LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x521 = INT8_MIN;
	int64_t x522 = 1436904946750LL;
	int64_t x523 = -4LL;
	static int16_t x524 = -1;
	int64_t t84 = -373991248LL;

	t84 = ((x521+(x522*x523))*x524);

	if (t84 != 5747619787128LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x525 = 35U;
	volatile uint64_t x527 = UINT64_MAX;
	static volatile int8_t x528 = -1;

	t85 = ((x525+(x526*x527))*x528);

	if (t85 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x529 = 89LLU;
	static volatile int16_t x530 = INT16_MIN;
	volatile int64_t x531 = 111076165125491LL;
	static uint8_t x532 = 17U;
	uint64_t t86 = 84189803352299LLU;

	t86 = ((x529+(x530*x531))*x532);

	if (t86 != 11911332054692693481LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x537 = 969U;
	uint64_t x538 = UINT64_MAX;
	volatile int8_t x539 = INT8_MIN;
	volatile int8_t x540 = -1;

	t87 = ((x537+(x538*x539))*x540);

	if (t87 != 18446744073709550519LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x541 = 699U;
	uint32_t x543 = UINT32_MAX;
	int32_t x544 = -183488376;
	uint32_t t88 = 10479U;

	t88 = ((x541+(x542*x543))*x544);

	if (t88 != 135539680U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x553 = -1;
	int8_t x554 = INT8_MIN;
	int16_t x555 = 57;
	int32_t x556 = -1647;

	t89 = ((x553+(x554*x555))*x556);

	if (t89 != 12018159) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x557 = 1;
	int16_t x558 = 245;
	int16_t x559 = 3590;
	uint8_t x560 = 0U;

	t90 = ((x557+(x558*x559))*x560);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x561 = 6U;
	int8_t x562 = 1;
	volatile uint16_t x563 = 370U;

	t91 = ((x561+(x562*x563))*x564);

	if (t91 != 95880) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x565 = -1LL;
	uint32_t x566 = 109537U;
	int16_t x568 = -3558;
	static int64_t t92 = -9508LL;

	t92 = ((x565+(x566*x567))*x568);

	if (t92 != -7640746816026LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x573 = -3;
	int8_t x574 = INT8_MIN;
	uint16_t x575 = 8623U;
	uint16_t x576 = 3U;
	volatile int32_t t93 = 5362013;

	t93 = ((x573+(x574*x575))*x576);

	if (t93 != -3311241) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x577 = INT8_MIN;
	int32_t x578 = -1;
	static volatile int64_t x579 = -1LL;
	uint8_t x580 = 2U;
	volatile int64_t t94 = -212129859LL;

	t94 = ((x577+(x578*x579))*x580);

	if (t94 != -254LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x582 = 1060125U;
	uint32_t x583 = UINT32_MAX;
	volatile uint32_t t95 = 2159U;

	t95 = ((x581+(x582*x583))*x584);

	if (t95 != 3916213575U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x587 = INT16_MAX;

	t96 = ((x585+(x586*x587))*x588);

	if (t96 != 759627590498881LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x589 = 109511948408LLU;
	int16_t x590 = -1;

	t97 = ((x589+(x590*x591))*x592);

	if (t97 != 2162212974055LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x593 = -1LL;
	int32_t x594 = -1;
	static int64_t x595 = -2LL;
	int64_t x596 = 21LL;
	int64_t t98 = -15LL;

	t98 = ((x593+(x594*x595))*x596);

	if (t98 != 21LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x597 = 1U;
	int8_t x598 = -1;
	uint8_t x599 = 8U;
	static int32_t x600 = 0;
	static volatile int32_t t99 = -23440501;

	t99 = ((x597+(x598*x599))*x600);

	if (t99 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

