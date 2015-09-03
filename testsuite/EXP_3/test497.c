#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x2 = INT32_MIN;
int16_t x9 = -2123;
static uint64_t x15 = 15030LLU;
static uint64_t x24 = 979LLU;
uint8_t x30 = 86U;
uint16_t x34 = 111U;
uint8_t x37 = 28U;
int16_t x40 = -1;
uint8_t x42 = 28U;
int32_t t9 = -989;
int8_t x68 = INT8_MIN;
int8_t x77 = -1;
static volatile int16_t x83 = -116;
int64_t t17 = 348319432520039LL;
int8_t x127 = -14;
static int32_t t19 = -45582740;
volatile int64_t t20 = 1228153791879LL;
int64_t x141 = -2442356685668230LL;
uint32_t x144 = UINT32_MAX;
volatile int32_t x157 = INT32_MAX;
static int32_t x159 = 235939391;
uint64_t x160 = UINT64_MAX;
static uint64_t x167 = UINT64_MAX;
static volatile int32_t x194 = -1;
uint64_t t28 = 15620818LLU;
int32_t x201 = -357016112;
volatile int32_t x214 = INT32_MAX;
uint64_t x237 = 268740987130237460LLU;
uint32_t x241 = 1332U;
uint8_t x244 = 122U;
volatile int64_t t35 = 3922226LL;
uint32_t x251 = UINT32_MAX;
volatile int16_t x258 = -1;
int8_t x265 = INT8_MIN;
volatile int16_t x289 = INT16_MIN;
int16_t x321 = INT16_MAX;
int32_t x329 = INT32_MIN;
static volatile int8_t x330 = INT8_MAX;
volatile uint16_t x336 = 1913U;
volatile uint64_t t48 = 22779749121979LLU;
int64_t x351 = 1768LL;
int16_t x352 = -6;
static volatile uint64_t t54 = 10178LLU;
uint8_t x375 = 94U;
int16_t x376 = -1;
uint16_t x377 = UINT16_MAX;
volatile uint64_t x379 = UINT64_MAX;
static volatile uint32_t x391 = 27309U;
int8_t x393 = INT8_MIN;
uint32_t t58 = 150173U;
static int32_t x403 = INT32_MIN;
volatile int64_t t60 = -99424138LL;
int8_t x415 = INT8_MAX;
static int64_t x426 = -179434LL;
volatile int16_t x428 = INT16_MIN;
volatile int64_t t63 = 677045849391LL;
int64_t x439 = 1010272674898LL;
static int32_t x447 = INT32_MAX;
uint64_t x448 = 409839076LLU;
static int32_t x453 = INT32_MIN;
volatile uint32_t x459 = 18321791U;
int64_t x463 = INT64_MIN;
static int8_t x466 = INT8_MAX;
uint64_t x467 = 15956902697209085LLU;
uint32_t x473 = UINT32_MAX;
uint8_t x485 = 1U;
int32_t x521 = INT32_MIN;
static uint16_t x526 = UINT16_MAX;
volatile int64_t x527 = -1LL;
int8_t x528 = INT8_MIN;
static volatile uint16_t x559 = UINT16_MAX;
volatile uint32_t x563 = UINT32_MAX;
uint32_t x573 = 42703630U;
int16_t x577 = -1;
static int32_t x579 = -1;
int64_t x596 = INT64_MIN;
uint8_t x601 = UINT8_MAX;
static uint8_t x602 = 24U;
uint16_t x604 = 4U;
volatile uint32_t t89 = 137U;
static int32_t x618 = -58797127;
int32_t x622 = INT32_MIN;
int8_t x628 = INT8_MIN;
static volatile int16_t x629 = -130;
int32_t x633 = -82961193;
volatile int64_t x635 = -1LL;
volatile int32_t x636 = 2;
int8_t x639 = -8;
volatile uint32_t t96 = 13548966U;
static int8_t x643 = INT8_MIN;
uint64_t t98 = 6360731LLU;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	int32_t x3 = INT32_MIN;
	uint64_t x4 = 58470024993813LLU;
	static volatile uint64_t t0 = 842LLU;

	t0 = ((x1^x2)*(x3*x4));

	if (t0 != 321731670816325632LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x10 = INT32_MAX;
	uint32_t x11 = 1U;
	int32_t x12 = INT32_MIN;
	volatile uint32_t t1 = 25U;

	t1 = ((x9^x10)*(x11*x12));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = 50;
	uint16_t x14 = 1U;
	static uint8_t x16 = 17U;
	volatile uint64_t t2 = 346624976019783LLU;

	t2 = ((x13^x14)*(x15*x16));

	if (t2 != 13031010LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = 6695U;
	uint64_t x22 = 5168662430975LLU;
	volatile uint16_t x23 = UINT16_MAX;
	uint64_t t3 = 7964245318971602659LLU;

	t3 = ((x21^x22)*(x23*x24));

	if (t3 != 18020349444729916408LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x29 = 31U;
	static uint32_t x31 = 1800U;
	int16_t x32 = INT16_MIN;
	volatile uint32_t t4 = 1883U;

	t4 = ((x29^x30)*(x31*x32));

	if (t4 != 4284219392U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = INT16_MIN;
	int16_t x35 = -22;
	int16_t x36 = -1;
	static int32_t t5 = 51868865;

	t5 = ((x33^x34)*(x35*x36));

	if (t5 != -718454) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x38 = 1LLU;
	int64_t x39 = -3LL;
	uint64_t t6 = 18LLU;

	t6 = ((x37^x38)*(x39*x40));

	if (t6 != 87LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x41 = 1139;
	static int64_t x43 = -418975799LL;
	uint64_t x44 = 6555374957938766LLU;
	uint64_t t7 = 4074211456917310LLU;

	t7 = ((x41^x42)*(x43*x44));

	if (t7 != 730138298323373026LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x45 = INT64_MIN;
	int8_t x46 = 1;
	uint16_t x47 = 2U;
	static volatile int16_t x48 = 0;
	int64_t t8 = -415735545824206LL;

	t8 = ((x45^x46)*(x47*x48));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = -1;
	int16_t x58 = INT16_MIN;
	int32_t x59 = INT32_MIN;
	uint16_t x60 = 0U;

	t9 = ((x57^x58)*(x59*x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x65 = INT64_MAX;
	uint32_t x66 = 17946283U;
	int16_t x67 = 0;
	int64_t t10 = -3112976007037736146LL;

	t10 = ((x65^x66)*(x67*x68));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x73 = INT32_MIN;
	int32_t x74 = INT32_MAX;
	volatile uint8_t x75 = 49U;
	volatile int32_t x76 = 7745022;
	static int32_t t11 = 21165;

	t11 = ((x73^x74)*(x75*x76));

	if (t11 != -379506078) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x78 = 91960492338520LLU;
	int16_t x79 = -30;
	int16_t x80 = INT16_MIN;
	volatile uint64_t t12 = 2257998297769438485LLU;

	t12 = ((x77^x78)*(x79*x80));

	if (t12 != 1832877980088074240LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x81 = INT64_MIN;
	volatile int32_t x82 = INT32_MIN;
	uint64_t x84 = 0LLU;
	uint64_t t13 = 2555571550LLU;

	t13 = ((x81^x82)*(x83*x84));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x93 = -816;
	volatile uint32_t x94 = UINT32_MAX;
	int16_t x95 = INT16_MIN;
	uint64_t x96 = UINT64_MAX;
	volatile uint64_t t14 = 592496849025LLU;

	t14 = ((x93^x94)*(x95*x96));

	if (t14 != 26705920LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x97 = -1;
	volatile int8_t x98 = INT8_MIN;
	int8_t x99 = INT8_MIN;
	int16_t x100 = 32;
	static int32_t t15 = -1198;

	t15 = ((x97^x98)*(x99*x100));

	if (t15 != -520192) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x109 = 6776391187LLU;
	uint32_t x110 = 134721289U;
	uint32_t x111 = UINT32_MAX;
	int16_t x112 = -1;
	uint64_t t16 = 7791784000120554673LLU;

	t16 = ((x109^x110)*(x111*x112));

	if (t16 != 6910126362LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x113 = 2U;
	volatile uint16_t x114 = 21U;
	static int64_t x115 = -1LL;
	static int32_t x116 = INT32_MAX;

	t17 = ((x113^x114)*(x115*x116));

	if (t17 != -49392123881LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x121 = INT64_MIN;
	int32_t x122 = 16612610;
	uint64_t x123 = 22095140545820LLU;
	int32_t x124 = -1;
	volatile uint64_t t18 = 1891831584735715LLU;

	t18 = ((x121^x122)*(x123*x124));

	if (t18 != 1876928691296242120LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x125 = UINT16_MAX;
	uint16_t x126 = 52U;
	int32_t x128 = -1;

	t19 = ((x125^x126)*(x127*x128));

	if (t19 != 916762) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x129 = -25032870LL;
	static int8_t x130 = INT8_MAX;
	uint32_t x131 = UINT32_MAX;
	int16_t x132 = INT16_MIN;

	t20 = ((x129^x130)*(x131*x132));

	if (t20 != -820278820864LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x142 = 2246LLU;
	volatile int32_t x143 = INT32_MIN;
	volatile uint64_t t21 = 597308LLU;

	t21 = ((x141^x142)*(x143*x144));

	if (t21 != 4803938229294202880LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x145 = -1;
	int16_t x146 = -1;
	uint32_t x147 = 14U;
	static uint64_t x148 = 47LLU;
	volatile uint64_t t22 = 35856995889LLU;

	t22 = ((x145^x146)*(x147*x148));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x153 = -6320140582299028LL;
	uint16_t x154 = 887U;
	static uint64_t x155 = UINT64_MAX;
	static uint32_t x156 = UINT32_MAX;
	uint64_t t23 = 14310574099LLU;

	t23 = ((x153^x154)*(x155*x156));

	if (t23 != 7367944801761188123LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x158 = 79U;
	volatile uint64_t t24 = 123310296095294015LLU;

	t24 = ((x157^x158)*(x159*x160));

	if (t24 != 17940068108493124528LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x165 = 8U;
	uint16_t x166 = 80U;
	static int64_t x168 = INT64_MIN;
	volatile uint64_t t25 = 3560723749LLU;

	t25 = ((x165^x166)*(x167*x168));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x173 = -687;
	volatile int8_t x174 = 12;
	static int64_t x175 = -674LL;
	int8_t x176 = 1;
	volatile int64_t t26 = 60245029462389LL;

	t26 = ((x173^x174)*(x175*x176));

	if (t26 != 454950LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x177 = UINT16_MAX;
	int32_t x178 = -11214;
	volatile uint64_t x179 = 2023277LLU;
	static int64_t x180 = -1LL;
	static volatile uint64_t t27 = 380451167271LLU;

	t27 = ((x177^x178)*(x179*x180));

	if (t27 != 109910476471LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x193 = -1LL;
	static uint8_t x195 = 2U;
	uint64_t x196 = 1749223330LLU;

	t28 = ((x193^x194)*(x195*x196));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x202 = -1LL;
	uint16_t x203 = UINT16_MAX;
	uint64_t x204 = 4416938724033LLU;
	static volatile uint64_t t29 = 61156670LLU;

	t29 = ((x201^x202)*(x203*x204));

	if (t29 != 12531392163232883857LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x213 = 98743069790012LLU;
	uint8_t x215 = UINT8_MAX;
	volatile uint64_t x216 = UINT64_MAX;
	volatile uint64_t t30 = 4LLU;

	t30 = ((x213^x214)*(x215*x216));

	if (t30 != 18421564946848804291LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x221 = -1;
	volatile uint64_t x222 = UINT64_MAX;
	int8_t x223 = INT8_MIN;
	static int8_t x224 = INT8_MIN;
	static volatile uint64_t t31 = 3LLU;

	t31 = ((x221^x222)*(x223*x224));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x229 = 25146643LLU;
	volatile uint16_t x230 = 5U;
	int64_t x231 = -1LL;
	uint64_t x232 = 25LLU;
	volatile uint64_t t32 = 169455729101LLU;

	t32 = ((x229^x230)*(x231*x232));

	if (t32 != 18446744073080885466LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x238 = INT16_MAX;
	uint8_t x239 = 3U;
	int64_t x240 = 127194045506612821LL;
	uint64_t t33 = 69706174216163LLU;

	t33 = ((x237^x238)*(x239*x240));

	if (t33 != 5141175518851869461LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x242 = INT32_MIN;
	uint16_t x243 = 42U;
	volatile uint32_t t34 = 29U;

	t34 = ((x241^x242)*(x243*x244));

	if (t34 != 6825168U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x245 = -1;
	volatile int64_t x246 = -102284665568142166LL;
	uint32_t x247 = 0U;
	uint16_t x248 = UINT16_MAX;

	t35 = ((x245^x246)*(x247*x248));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x249 = -1;
	volatile uint16_t x250 = 31590U;
	volatile uint16_t x252 = UINT16_MAX;
	uint32_t t36 = 605139263U;

	t36 = ((x249^x250)*(x251*x252));

	if (t36 != 2070316185U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x253 = INT8_MIN;
	volatile int16_t x254 = -1;
	static volatile int16_t x255 = -1;
	int8_t x256 = -11;
	int32_t t37 = 1;

	t37 = ((x253^x254)*(x255*x256));

	if (t37 != 1397) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x257 = -15;
	static int8_t x259 = INT8_MAX;
	uint16_t x260 = 23U;
	static volatile int32_t t38 = -1106;

	t38 = ((x257^x258)*(x259*x260));

	if (t38 != 40894) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x266 = UINT64_MAX;
	int32_t x267 = -1;
	int8_t x268 = INT8_MAX;
	volatile uint64_t t39 = 66LLU;

	t39 = ((x265^x266)*(x267*x268));

	if (t39 != 18446744073709535487LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x273 = INT8_MIN;
	int64_t x274 = -1LL;
	uint64_t x275 = 836649676662LLU;
	volatile int64_t x276 = INT64_MAX;
	uint64_t t40 = 117492981LLU;

	t40 = ((x273^x274)*(x275*x276));

	if (t40 != 18446637819200615542LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x277 = 23LLU;
	int32_t x278 = INT32_MIN;
	uint64_t x279 = 167LLU;
	int64_t x280 = 1766LL;
	uint64_t t41 = 20LLU;

	t41 = ((x277^x278)*(x279*x280));

	if (t41 != 18446110733543899366LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x281 = 427;
	int16_t x282 = INT16_MIN;
	int8_t x283 = INT8_MIN;
	static int16_t x284 = 0;
	static int32_t t42 = 4050202;

	t42 = ((x281^x282)*(x283*x284));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x290 = INT16_MIN;
	uint8_t x291 = 1U;
	int8_t x292 = INT8_MIN;
	int32_t t43 = -1;

	t43 = ((x289^x290)*(x291*x292));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x305 = INT8_MAX;
	volatile int16_t x306 = 191;
	uint16_t x307 = UINT16_MAX;
	int8_t x308 = -1;
	volatile int32_t t44 = -197;

	t44 = ((x305^x306)*(x307*x308));

	if (t44 != -12582720) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x322 = INT16_MIN;
	int8_t x323 = INT8_MIN;
	uint8_t x324 = 1U;
	volatile int32_t t45 = -818132453;

	t45 = ((x321^x322)*(x323*x324));

	if (t45 != 128) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x325 = INT16_MIN;
	static uint8_t x326 = 6U;
	int8_t x327 = 0;
	int64_t x328 = INT64_MIN;
	int64_t t46 = -4LL;

	t46 = ((x325^x326)*(x327*x328));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x331 = 0;
	volatile int8_t x332 = -1;
	int32_t t47 = 1307423;

	t47 = ((x329^x330)*(x331*x332));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x333 = INT8_MIN;
	static uint16_t x334 = 129U;
	static uint64_t x335 = 17119667626LLU;

	t48 = ((x333^x334)*(x335*x336));

	if (t48 != 18438392843046574426LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x341 = -83;
	uint32_t x342 = UINT32_MAX;
	volatile uint64_t x343 = 4536LLU;
	static uint32_t x344 = 4169U;
	uint64_t t49 = 523571807983LLU;

	t49 = ((x341^x342)*(x343*x344));

	if (t49 != 1550667888LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x349 = UINT8_MAX;
	volatile uint64_t x350 = UINT64_MAX;
	volatile uint64_t t50 = 1741604LLU;

	t50 = ((x349^x350)*(x351*x352));

	if (t50 != 2715648LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x353 = -1;
	uint8_t x354 = 10U;
	int8_t x355 = -1;
	uint8_t x356 = 56U;
	static int32_t t51 = -21309;

	t51 = ((x353^x354)*(x355*x356));

	if (t51 != 616) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x357 = 9;
	uint16_t x358 = 327U;
	volatile uint32_t x359 = 1U;
	uint32_t x360 = UINT32_MAX;
	volatile uint32_t t52 = 108401U;

	t52 = ((x357^x358)*(x359*x360));

	if (t52 != 4294966962U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x365 = -528;
	uint16_t x366 = UINT16_MAX;
	int8_t x367 = 0;
	volatile uint64_t x368 = 218LLU;
	uint64_t t53 = 33010660LLU;

	t53 = ((x365^x366)*(x367*x368));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x369 = INT16_MIN;
	static uint64_t x370 = 11977754812991LLU;
	uint32_t x371 = UINT32_MAX;
	static uint8_t x372 = UINT8_MAX;

	t54 = ((x369^x370)*(x371*x372));

	if (t54 != 3907009170947924799LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x373 = 0U;
	int8_t x374 = -1;
	int32_t t55 = 338;

	t55 = ((x373^x374)*(x375*x376));

	if (t55 != 94) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x378 = 0U;
	volatile int32_t x380 = -42;
	static volatile uint64_t t56 = 52635850LLU;

	t56 = ((x377^x378)*(x379*x380));

	if (t56 != 2752470LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x389 = 49;
	int16_t x390 = 0;
	int8_t x392 = 10;
	uint32_t t57 = 51U;

	t57 = ((x389^x390)*(x391*x392));

	if (t57 != 13381410U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x394 = 2582747U;
	uint8_t x395 = 4U;
	static uint8_t x396 = 23U;

	t58 = ((x393^x394)*(x395*x396));

	if (t58 != 4057359540U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x397 = 114U;
	int8_t x398 = INT8_MIN;
	int16_t x399 = INT16_MIN;
	int32_t x400 = -1;
	volatile int32_t t59 = 64305223;

	t59 = ((x397^x398)*(x399*x400));

	if (t59 != -458752) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x401 = 6232U;
	int8_t x402 = INT8_MIN;
	volatile int64_t x404 = -1LL;

	t60 = ((x401^x402)*(x403*x404));

	if (t60 != 9223358756815896576LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x413 = UINT64_MAX;
	uint8_t x414 = 2U;
	int16_t x416 = -13;
	volatile uint64_t t61 = 9421059359218LLU;

	t61 = ((x413^x414)*(x415*x416));

	if (t61 != 4953LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x421 = 1032414670U;
	int8_t x422 = INT8_MAX;
	uint64_t x423 = UINT64_MAX;
	uint32_t x424 = UINT32_MAX;
	uint64_t t62 = 4004943231690061LLU;

	t62 = ((x421^x422)*(x423*x424));

	if (t62 != 14012556955735385521LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x425 = -1LL;
	uint8_t x427 = UINT8_MAX;

	t63 = ((x425^x426)*(x427*x428));

	if (t63 != -1499313438720LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x437 = INT8_MIN;
	int32_t x438 = -1;
	uint64_t x440 = 47988904681257LLU;
	volatile uint64_t t64 = 59889915280045LLU;

	t64 = ((x437^x438)*(x439*x440));

	if (t64 != 7179590704044102110LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x445 = UINT64_MAX;
	int8_t x446 = INT8_MIN;
	uint64_t t65 = 14344574266096578LLU;

	t65 = ((x445^x446)*(x447*x448));

	if (t65 != 1095120186414642148LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x454 = -60;
	int64_t x455 = INT64_MIN;
	uint64_t x456 = UINT64_MAX;
	uint64_t t66 = 7422LLU;

	t66 = ((x453^x454)*(x455*x456));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x457 = -1;
	uint8_t x458 = 1U;
	uint8_t x460 = 88U;
	static volatile uint32_t t67 = 41472628U;

	t67 = ((x457^x458)*(x459*x460));

	if (t67 != 1070332080U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x461 = 1U;
	volatile uint32_t x462 = UINT32_MAX;
	static uint64_t x464 = 1082074926633265502LLU;
	volatile uint64_t t68 = 53861746516618LLU;

	t68 = ((x461^x462)*(x463*x464));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x465 = 4U;
	int32_t x468 = -357;
	volatile uint64_t t69 = 5025131973258468LLU;

	t69 = ((x465^x466)*(x467*x468));

	if (t69 != 292720463814829973LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x474 = 0U;
	uint8_t x475 = 1U;
	int8_t x476 = -1;
	static uint32_t t70 = 138271275U;

	t70 = ((x473^x474)*(x475*x476));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x477 = UINT8_MAX;
	int8_t x478 = INT8_MIN;
	volatile uint64_t x479 = 49722840LLU;
	int32_t x480 = -5742;
	volatile uint64_t t71 = 2LLU;

	t71 = ((x477^x478)*(x479*x480));

	if (t71 != 36830602599120LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x486 = -41;
	static volatile int64_t x487 = -28819429147LL;
	uint8_t x488 = UINT8_MAX;
	int64_t t72 = -16811321375682LL;

	t72 = ((x485^x486)*(x487*x488));

	if (t72 != 308656086164370LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x497 = 0;
	static uint32_t x498 = 4009U;
	int64_t x499 = -240987534LL;
	int16_t x500 = -1;
	volatile int64_t t73 = -3174542897LL;

	t73 = ((x497^x498)*(x499*x500));

	if (t73 != 966119023806LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x501 = 217LLU;
	int64_t x502 = -24386795LL;
	int16_t x503 = 3536;
	int64_t x504 = -244911824735LL;
	volatile uint64_t t74 = 195708610651149LLU;

	t74 = ((x501^x502)*(x503*x504));

	if (t74 != 15931040946720442816LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x513 = 667U;
	int8_t x514 = 0;
	static int64_t x515 = -769LL;
	int64_t x516 = 916495561LL;
	int64_t t75 = -3995839LL;

	t75 = ((x513^x514)*(x515*x516));

	if (t75 != -470091652634803LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x522 = 1U;
	static int64_t x523 = -28LL;
	volatile int16_t x524 = INT16_MIN;
	volatile int64_t t76 = -1LL;

	t76 = ((x521^x522)*(x523*x524));

	if (t76 != -1970324836057088LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x525 = -615388715;
	volatile int64_t t77 = -8388284LL;

	t77 = ((x525^x526)*(x527*x528));

	if (t77 != -78776691456LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x529 = 511239609519LLU;
	int32_t x530 = -1;
	uint64_t x531 = 1921LLU;
	int16_t x532 = INT16_MIN;
	volatile uint64_t t78 = 14LLU;

	t78 = ((x529^x530)*(x531*x532));

	if (t78 != 13734423313337810944LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x545 = 179775506LLU;
	volatile uint64_t x546 = 492LLU;
	int16_t x547 = INT16_MIN;
	static int64_t x548 = -1LL;
	static volatile uint64_t t79 = 60709916557771609LLU;

	t79 = ((x545^x546)*(x547*x548));

	if (t79 != 5890899902464LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x549 = UINT32_MAX;
	volatile int8_t x550 = INT8_MIN;
	uint32_t x551 = 1367837546U;
	volatile uint16_t x552 = UINT16_MAX;
	uint32_t t80 = 252825775U;

	t80 = ((x549^x550)*(x551*x552));

	if (t80 != 3075987050U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x553 = 1;
	static int64_t x554 = -1LL;
	static volatile uint16_t x555 = UINT16_MAX;
	uint16_t x556 = 35U;
	volatile int64_t t81 = -1166193792629208203LL;

	t81 = ((x553^x554)*(x555*x556));

	if (t81 != -4587450LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x557 = -1;
	int32_t x558 = INT32_MIN;
	uint64_t x560 = 4107LLU;
	volatile uint64_t t82 = 2LLU;

	t82 = ((x557^x558)*(x559*x560));

	if (t82 != 578000044690837515LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x561 = -1;
	static volatile uint8_t x562 = 2U;
	int8_t x564 = -9;
	volatile uint32_t t83 = 4771U;

	t83 = ((x561^x562)*(x563*x564));

	if (t83 != 4294967269U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x565 = UINT32_MAX;
	volatile uint64_t x566 = UINT64_MAX;
	static uint32_t x567 = 629808U;
	uint32_t x568 = 13429U;
	volatile uint64_t t84 = 4LLU;

	t84 = ((x565^x566)*(x567*x568));

	if (t84 != 567979188326236160LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x574 = INT32_MAX;
	volatile int16_t x575 = INT16_MAX;
	int16_t x576 = -1;
	volatile uint32_t t85 = 19U;

	t85 = ((x573^x574)*(x575*x576));

	if (t85 != 1258022129U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x578 = -1;
	int8_t x580 = INT8_MIN;
	int32_t t86 = -12;

	t86 = ((x577^x578)*(x579*x580));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x585 = 2U;
	static volatile int32_t x586 = 67;
	uint8_t x587 = 0U;
	uint32_t x588 = 2296816U;
	volatile uint32_t t87 = 191U;

	t87 = ((x585^x586)*(x587*x588));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x593 = UINT64_MAX;
	int8_t x594 = INT8_MIN;
	volatile int8_t x595 = 0;
	volatile uint64_t t88 = 5823037626LLU;

	t88 = ((x593^x594)*(x595*x596));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x603 = UINT32_MAX;

	t89 = ((x601^x602)*(x603*x604));

	if (t89 != 4294966372U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x605 = UINT8_MAX;
	static uint32_t x606 = 1850611U;
	static volatile int16_t x607 = -1;
	static int16_t x608 = INT16_MIN;
	uint32_t t90 = 876U;

	t90 = ((x605^x606)*(x607*x608));

	if (t90 != 503709696U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x617 = 7117U;
	volatile uint64_t x619 = UINT64_MAX;
	uint8_t x620 = 3U;
	volatile uint64_t t91 = 546179109272681LLU;

	t91 = ((x617^x618)*(x619*x620));

	if (t91 != 176400036LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x621 = 15U;
	int32_t x623 = -1;
	uint32_t x624 = UINT32_MAX;
	static volatile uint32_t t92 = 234782673U;

	t92 = ((x621^x622)*(x623*x624));

	if (t92 != 2147483663U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x625 = INT8_MAX;
	uint64_t x626 = 39748LLU;
	int64_t x627 = 166687170894LL;
	volatile uint64_t t93 = 84820041410LLU;

	t93 = ((x625^x626)*(x627*x628));

	if (t93 != 17598874443737498368LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x630 = -1;
	int16_t x631 = 0;
	volatile int64_t x632 = INT64_MIN;
	int64_t t94 = -564151409510626485LL;

	t94 = ((x629^x630)*(x631*x632));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x634 = 45;
	int64_t t95 = -142608937781251LL;

	t95 = ((x633^x634)*(x635*x636));

	if (t95 != 165922316LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x637 = UINT8_MAX;
	uint32_t x638 = 357558U;
	uint8_t x640 = UINT8_MAX;

	t96 = ((x637^x638)*(x639*x640));

	if (t96 != 3565771336U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x641 = -452;
	volatile uint8_t x642 = 4U;
	volatile uint16_t x644 = 277U;
	static int32_t t97 = 62171670;

	t97 = ((x641^x642)*(x643*x644));

	if (t97 != 16167936) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x649 = UINT64_MAX;
	int16_t x650 = 0;
	int16_t x651 = 376;
	uint32_t x652 = 947570249U;

	t98 = ((x649^x650)*(x651*x652));

	if (t98 != 18446744069610456264LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x653 = INT16_MIN;
	int32_t x654 = 18303241;
	static int8_t x655 = -1;
	volatile int64_t x656 = -1LL;
	int64_t t99 = 3878842614800301LL;

	t99 = ((x653^x654)*(x655*x656));

	if (t99 != -18298615LL) { NG(); } else { ; }
	
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

