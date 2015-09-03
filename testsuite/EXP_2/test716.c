#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 1594912163838LLU;
int64_t x4 = -1LL;
static uint64_t t0 = UINT64_MAX;
uint64_t t1 = UINT64_MAX;
int64_t x18 = INT64_MIN;
static uint64_t x32 = 193283747LLU;
volatile uint64_t t4 = 120611365856312135LLU;
uint64_t x34 = 60121LLU;
static volatile int32_t x36 = -1;
int32_t x40 = -1;
uint64_t x41 = UINT64_MAX;
uint64_t x42 = 3438095840517146580LLU;
uint32_t x70 = UINT32_MAX;
int16_t x74 = -1;
static int64_t x75 = INT64_MAX;
int64_t t12 = -27561870213893LL;
uint8_t x77 = 20U;
volatile int64_t t13 = 33438667LL;
int32_t x81 = 176045982;
int8_t x84 = INT8_MAX;
volatile uint64_t x100 = 431477915727954735LLU;
int16_t x120 = -1;
uint8_t x139 = UINT8_MAX;
int32_t x142 = 3;
int16_t x150 = INT16_MIN;
static uint32_t t25 = 6412602U;
static int8_t x184 = -1;
volatile int32_t x202 = INT32_MAX;
static int8_t x204 = -55;
uint64_t x210 = 6LLU;
volatile uint32_t t34 = 2U;
uint32_t x231 = UINT32_MAX;
uint8_t x239 = UINT8_MAX;
uint32_t x243 = UINT32_MAX;
int16_t x246 = -2;
uint32_t x247 = 9880419U;
int8_t x257 = -7;
uint64_t x293 = 7457303149LLU;
int64_t x294 = INT64_MIN;
int16_t x302 = 7;
volatile uint16_t x303 = 1873U;
int32_t x314 = INT32_MIN;
volatile int16_t x315 = 27;
int8_t x332 = -1;
uint32_t t55 = 68012U;
static uint8_t x341 = 5U;
static volatile uint32_t x343 = 821145U;
int32_t x351 = INT32_MAX;
static int16_t x359 = INT16_MIN;
int64_t x368 = INT64_MIN;
volatile int32_t t63 = 6256;
uint64_t x386 = 23817LLU;
int16_t x393 = INT16_MAX;
int8_t x402 = -1;
int8_t x403 = -36;
static int64_t x409 = 2979183890627428454LL;
int64_t x411 = INT64_MAX;
static int32_t x414 = -3997217;
uint64_t x416 = 226847602659469LLU;
volatile uint64_t t70 = 11735611679LLU;
int8_t x420 = -1;
uint16_t x433 = 117U;
static volatile uint64_t t72 = 3418LLU;
int64_t x438 = -1LL;
uint64_t x441 = UINT64_MAX;
volatile int64_t x442 = INT64_MAX;
static int64_t x464 = INT64_MAX;
volatile int64_t t76 = 526276497022307999LL;
static uint16_t x468 = UINT16_MAX;
static uint8_t x470 = 43U;
volatile int64_t t79 = -767LL;
uint64_t t80 = 239255680126823221LLU;
uint32_t x503 = 233U;
static int16_t x507 = INT16_MAX;
int8_t x514 = INT8_MAX;
static int64_t x515 = -88085LL;
uint8_t x517 = 9U;
static uint32_t x543 = 92170U;
static int16_t x545 = INT16_MIN;
uint16_t x552 = 149U;
volatile int16_t x556 = INT16_MAX;
volatile int64_t x560 = INT64_MIN;
int64_t x565 = 6897517891LL;
int8_t x566 = -1;
static volatile int64_t t95 = -701336183316LL;
volatile int32_t x570 = INT32_MAX;
uint64_t x572 = 677658907682LLU;
volatile int32_t x587 = -4132;
uint8_t x588 = 0U;
int32_t t99 = 0;


void f0(void) {
	uint32_t x1 = 361U;
	int16_t x2 = INT16_MIN;

	t0 = ((x1/(x2%x3))+x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 104702490357LLU;
	static uint64_t x6 = 272731428909486LLU;
	int64_t x7 = -1LL;
	int16_t x8 = -1;

	t1 = ((x5/(x6%x7))+x8);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	uint8_t x14 = 2U;
	int16_t x15 = 8012;
	volatile int32_t x16 = -1;
	int32_t t2 = 67077065;

	t2 = ((x13/(x14%x15))+x16);

	if (t2 != -65) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 386U;
	uint16_t x19 = 21U;
	int16_t x20 = INT16_MIN;
	volatile int64_t t3 = -48861LL;

	t3 = ((x17/(x18%x19))+x20);

	if (t3 != -32816LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x29 = UINT32_MAX;
	int16_t x30 = 317;
	volatile uint64_t x31 = UINT64_MAX;

	t4 = ((x29/(x30%x31))+x32);

	if (t4 != 206832539LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x33 = -1;
	int8_t x35 = INT8_MAX;
	uint64_t t5 = 1891275122786533152LLU;

	t5 = ((x33/(x34%x35))+x36);

	if (t5 != 368934881474191031LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x37 = UINT16_MAX;
	int32_t x38 = -1;
	static uint32_t x39 = 8276520U;
	uint32_t t6 = UINT32_MAX;

	t6 = ((x37/(x38%x39))+x40);

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x43 = 28U;
	uint8_t x44 = UINT8_MAX;
	uint64_t t7 = 5892788263840569LLU;

	t7 = ((x41/(x42%x43))+x44);

	if (t7 != 1152921504606847230LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = 278;
	static uint64_t x50 = 948244262306154682LLU;
	int64_t x51 = INT64_MIN;
	int32_t x52 = -142;
	uint64_t t8 = 149LLU;

	t8 = ((x49/(x50%x51))+x52);

	if (t8 != 18446744073709551474LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x53 = 0;
	int64_t x54 = -14934840981784428LL;
	int8_t x55 = INT8_MIN;
	int16_t x56 = INT16_MIN;
	int64_t t9 = 5LL;

	t9 = ((x53/(x54%x55))+x56);

	if (t9 != -32768LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x65 = -7;
	int16_t x66 = INT16_MIN;
	static int8_t x67 = -24;
	int8_t x68 = INT8_MIN;
	int32_t t10 = -1166734;

	t10 = ((x65/(x66%x67))+x68);

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x69 = INT8_MIN;
	int64_t x71 = INT64_MAX;
	int32_t x72 = -1;
	static volatile int64_t t11 = 23487514771LL;

	t11 = ((x69/(x70%x71))+x72);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = -37;
	int8_t x76 = 0;

	t12 = ((x73/(x74%x75))+x76);

	if (t12 != 37LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x78 = INT64_MIN;
	int32_t x79 = INT32_MAX;
	uint16_t x80 = 35U;

	t13 = ((x77/(x78%x79))+x80);

	if (t13 != 25LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x82 = INT8_MIN;
	static int32_t x83 = INT32_MAX;
	int32_t t14 = -19622749;

	t14 = ((x81/(x82%x83))+x84);

	if (t14 != -1375232) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x97 = UINT16_MAX;
	uint16_t x98 = 22U;
	uint16_t x99 = 744U;
	static volatile uint64_t t15 = 15LLU;

	t15 = ((x97/(x98%x99))+x100);

	if (t15 != 431477915727957713LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x105 = INT8_MIN;
	int64_t x106 = INT64_MIN;
	int32_t x107 = INT32_MAX;
	static uint8_t x108 = 1U;
	static volatile int64_t t16 = 2420570260888502LL;

	t16 = ((x105/(x106%x107))+x108);

	if (t16 != 65LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x109 = INT8_MIN;
	static int8_t x110 = INT8_MAX;
	int64_t x111 = INT64_MAX;
	int32_t x112 = -179775;
	volatile int64_t t17 = -89642743920292LL;

	t17 = ((x109/(x110%x111))+x112);

	if (t17 != -179776LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x113 = 6832U;
	static int16_t x114 = INT16_MIN;
	uint64_t x115 = UINT64_MAX;
	static uint16_t x116 = 4U;
	volatile uint64_t t18 = 2487779736583266065LLU;

	t18 = ((x113/(x114%x115))+x116);

	if (t18 != 4LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x117 = 14791059U;
	int32_t x118 = 732;
	int32_t x119 = INT32_MAX;
	volatile uint32_t t19 = 836U;

	t19 = ((x117/(x118%x119))+x120);

	if (t19 != 20205U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x133 = -1LL;
	uint32_t x134 = 407U;
	int64_t x135 = -6423659201412219LL;
	int8_t x136 = 9;
	volatile int64_t t20 = -366926513844LL;

	t20 = ((x133/(x134%x135))+x136);

	if (t20 != 9LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x137 = UINT8_MAX;
	uint16_t x138 = 9720U;
	int16_t x140 = INT16_MIN;
	volatile int32_t t21 = -16372272;

	t21 = ((x137/(x138%x139))+x140);

	if (t21 != -32760) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x141 = 473U;
	int32_t x143 = INT32_MIN;
	static int16_t x144 = INT16_MIN;
	volatile int32_t t22 = -51185719;

	t22 = ((x141/(x142%x143))+x144);

	if (t22 != -32611) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x149 = -1LL;
	volatile int32_t x151 = 15948;
	uint64_t x152 = UINT64_MAX;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = ((x149/(x150%x151))+x152);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x153 = 562U;
	int8_t x154 = INT8_MAX;
	int64_t x155 = -232589LL;
	int64_t x156 = -765943274LL;
	volatile int64_t t24 = 3463935LL;

	t24 = ((x153/(x154%x155))+x156);

	if (t24 != -765943270LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x157 = UINT16_MAX;
	int16_t x158 = 1;
	uint32_t x159 = 555104U;
	int16_t x160 = -1;

	t25 = ((x157/(x158%x159))+x160);

	if (t25 != 65534U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x161 = 359LLU;
	uint16_t x162 = 2750U;
	static int64_t x163 = INT64_MIN;
	uint16_t x164 = UINT16_MAX;
	uint64_t t26 = 2795LLU;

	t26 = ((x161/(x162%x163))+x164);

	if (t26 != 65535LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x165 = INT16_MIN;
	volatile int32_t x166 = INT32_MIN;
	uint8_t x167 = UINT8_MAX;
	uint8_t x168 = 3U;
	int32_t t27 = 312;

	t27 = ((x165/(x166%x167))+x168);

	if (t27 != 259) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x169 = 33LLU;
	uint16_t x170 = 1U;
	int64_t x171 = INT64_MIN;
	int8_t x172 = INT8_MAX;
	volatile uint64_t t28 = 21839874958206814LLU;

	t28 = ((x169/(x170%x171))+x172);

	if (t28 != 160LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x173 = -215702LL;
	volatile uint8_t x174 = 53U;
	volatile int64_t x175 = INT64_MIN;
	int16_t x176 = INT16_MAX;
	volatile int64_t t29 = -3LL;

	t29 = ((x173/(x174%x175))+x176);

	if (t29 != 28698LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x181 = UINT16_MAX;
	int64_t x182 = INT64_MAX;
	volatile int8_t x183 = INT8_MIN;
	volatile int64_t t30 = 55173407LL;

	t30 = ((x181/(x182%x183))+x184);

	if (t30 != 515LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x185 = -1;
	static int16_t x186 = -452;
	int16_t x187 = INT16_MIN;
	uint32_t x188 = UINT32_MAX;
	volatile uint32_t t31 = UINT32_MAX;

	t31 = ((x185/(x186%x187))+x188);

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x201 = INT8_MIN;
	static volatile int64_t x203 = INT64_MIN;
	volatile int64_t t32 = -110757599149625414LL;

	t32 = ((x201/(x202%x203))+x204);

	if (t32 != -55LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x209 = 18;
	uint32_t x211 = UINT32_MAX;
	volatile int32_t x212 = -1;
	uint64_t t33 = 1LLU;

	t33 = ((x209/(x210%x211))+x212);

	if (t33 != 2LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x213 = UINT32_MAX;
	int8_t x214 = -24;
	int16_t x215 = -212;
	int32_t x216 = 11720;

	t34 = ((x213/(x214%x215))+x216);

	if (t34 != 11721U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x217 = 38U;
	volatile uint8_t x218 = 14U;
	int8_t x219 = INT8_MIN;
	int64_t x220 = INT64_MIN;
	volatile int64_t t35 = -37LL;

	t35 = ((x217/(x218%x219))+x220);

	if (t35 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x221 = INT16_MIN;
	volatile int8_t x222 = INT8_MIN;
	uint16_t x223 = 6U;
	int64_t x224 = 1LL;
	int64_t t36 = -39044942LL;

	t36 = ((x221/(x222%x223))+x224);

	if (t36 != 16385LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x229 = 2544U;
	int32_t x230 = INT32_MIN;
	int16_t x232 = INT16_MIN;
	static uint32_t t37 = 2U;

	t37 = ((x229/(x230%x231))+x232);

	if (t37 != 4294934528U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x237 = 36LLU;
	static int64_t x238 = INT64_MIN;
	static int8_t x240 = INT8_MIN;
	volatile uint64_t t38 = 1412482LLU;

	t38 = ((x237/(x238%x239))+x240);

	if (t38 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x241 = -76;
	static int32_t x242 = 6902489;
	int8_t x244 = INT8_MAX;
	uint32_t t39 = 618U;

	t39 = ((x241/(x242%x243))+x244);

	if (t39 != 749U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x245 = -107753575;
	uint16_t x248 = UINT16_MAX;
	volatile uint32_t t40 = 27U;

	t40 = ((x245/(x246%x247))+x248);

	if (t40 != 66144U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x249 = -674559821765448347LL;
	volatile int32_t x250 = INT32_MIN;
	uint16_t x251 = 4598U;
	uint64_t x252 = 53493806819544269LLU;
	static volatile uint64_t t41 = 18LLU;

	t41 = ((x249/(x250%x251))+x252);

	if (t41 != 53931264550909670LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x253 = 27546U;
	uint32_t x254 = 5659613U;
	int8_t x255 = -1;
	static int16_t x256 = -1;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = ((x253/(x254%x255))+x256);

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x258 = UINT64_MAX;
	static volatile int16_t x259 = INT16_MIN;
	int32_t x260 = 43545272;
	uint64_t t43 = 4122860554412LLU;

	t43 = ((x257/(x258%x259))+x260);

	if (t43 != 562967177360072LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x265 = INT32_MAX;
	int32_t x266 = -954930;
	uint32_t x267 = 38U;
	static int8_t x268 = -26;
	uint32_t t44 = 719U;

	t44 = ((x265/(x266%x267))+x268);

	if (t44 != 134217701U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x273 = -481;
	static int32_t x274 = INT32_MAX;
	uint16_t x275 = UINT16_MAX;
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t45 = 26;

	t45 = ((x273/(x274%x275))+x276);

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x281 = 19U;
	int64_t x282 = INT64_MIN;
	int16_t x283 = -63;
	int16_t x284 = -74;
	volatile int64_t t46 = -66LL;

	t46 = ((x281/(x282%x283))+x284);

	if (t46 != -76LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x295 = INT64_MAX;
	int32_t x296 = INT32_MIN;
	volatile uint64_t t47 = 2036006966LLU;

	t47 = ((x293/(x294%x295))+x296);

	if (t47 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x297 = -902;
	int64_t x298 = 217614190551811LL;
	uint64_t x299 = 42638761762497382LLU;
	uint32_t x300 = UINT32_MAX;
	volatile uint64_t t48 = 57046LLU;

	t48 = ((x297/(x298%x299))+x300);

	if (t48 != 4295052063LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x301 = 4871LLU;
	uint8_t x304 = UINT8_MAX;
	uint64_t t49 = 1105679230796903331LLU;

	t49 = ((x301/(x302%x303))+x304);

	if (t49 != 950LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x305 = 0;
	static int32_t x306 = -1;
	volatile uint64_t x307 = 126377779615538LLU;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = ((x305/(x306%x307))+x308);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x309 = INT8_MAX;
	volatile int32_t x310 = -1;
	static int32_t x311 = 802;
	int32_t x312 = -1;
	int32_t t51 = 1024957;

	t51 = ((x309/(x310%x311))+x312);

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x313 = 15U;
	uint64_t x316 = 44503048LLU;
	volatile uint64_t t52 = 1007373890480LLU;

	t52 = ((x313/(x314%x315))+x316);

	if (t52 != 44503047LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x317 = 16;
	static uint64_t x318 = 1830912590106140LLU;
	int8_t x319 = -2;
	int8_t x320 = -1;
	static volatile uint64_t t53 = UINT64_MAX;

	t53 = ((x317/(x318%x319))+x320);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x329 = INT16_MIN;
	uint16_t x330 = 529U;
	volatile int32_t x331 = INT32_MAX;
	int32_t t54 = -170730;

	t54 = ((x329/(x330%x331))+x332);

	if (t54 != -62) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x333 = -2;
	int16_t x334 = INT16_MIN;
	int32_t x335 = INT32_MIN;
	static uint32_t x336 = 2877270U;

	t55 = ((x333/(x334%x335))+x336);

	if (t55 != 2877270U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x337 = INT8_MAX;
	volatile int32_t x338 = 1979;
	int64_t x339 = -31LL;
	uint8_t x340 = UINT8_MAX;
	volatile int64_t t56 = -438LL;

	t56 = ((x337/(x338%x339))+x340);

	if (t56 != 259LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x342 = INT64_MIN;
	int16_t x344 = INT16_MIN;
	volatile int64_t t57 = -2001LL;

	t57 = ((x341/(x342%x343))+x344);

	if (t57 != -32768LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x345 = INT64_MAX;
	int8_t x346 = INT8_MAX;
	volatile int64_t x347 = -1192823861721118LL;
	volatile uint8_t x348 = UINT8_MAX;
	volatile int64_t t58 = -158218LL;

	t58 = ((x345/(x346%x347))+x348);

	if (t58 != 72624976668148096LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x349 = UINT64_MAX;
	int8_t x350 = INT8_MIN;
	static int16_t x352 = -211;
	volatile uint64_t t59 = 237346758004726498LLU;

	t59 = ((x349/(x350%x351))+x352);

	if (t59 != 18446744073709551406LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x357 = 18;
	uint32_t x358 = UINT32_MAX;
	int8_t x360 = INT8_MAX;
	volatile uint32_t t60 = 979206U;

	t60 = ((x357/(x358%x359))+x360);

	if (t60 != 127U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x365 = INT8_MIN;
	uint16_t x366 = 134U;
	int32_t x367 = INT32_MAX;
	int64_t t61 = INT64_MIN;

	t61 = ((x365/(x366%x367))+x368);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x373 = 11875;
	uint32_t x374 = 633U;
	volatile int32_t x375 = -4449;
	volatile int8_t x376 = -39;
	uint32_t t62 = 7192759U;

	t62 = ((x373/(x374%x375))+x376);

	if (t62 != 4294967275U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x377 = INT8_MAX;
	static int16_t x378 = -8443;
	volatile int16_t x379 = 2345;
	int16_t x380 = INT16_MAX;

	t63 = ((x377/(x378%x379))+x380);

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x385 = INT64_MAX;
	uint8_t x387 = UINT8_MAX;
	int8_t x388 = 20;
	volatile uint64_t t64 = 42235905740077LLU;

	t64 = ((x385/(x386%x387))+x388);

	if (t64 != 90425216047595861LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x389 = -26LL;
	int8_t x390 = -2;
	int8_t x391 = INT8_MIN;
	int64_t x392 = INT64_MIN;
	volatile int64_t t65 = -756979563LL;

	t65 = ((x389/(x390%x391))+x392);

	if (t65 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x394 = 1709;
	static int8_t x395 = INT8_MIN;
	static int16_t x396 = INT16_MIN;
	int32_t t66 = 3965;

	t66 = ((x393/(x394%x395))+x396);

	if (t66 != -32040) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x401 = 372U;
	int32_t x404 = -3;
	uint32_t t67 = 101727655U;

	t67 = ((x401/(x402%x403))+x404);

	if (t67 != 4294967293U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x405 = 478566653711614LL;
	uint64_t x406 = UINT64_MAX;
	volatile uint16_t x407 = 345U;
	volatile int64_t x408 = INT64_MIN;
	static uint64_t t68 = 13695792045385LLU;

	t68 = ((x405/(x406%x407))+x408);

	if (t68 != 9223376024910223404LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x410 = INT32_MAX;
	int32_t x412 = INT32_MIN;
	int64_t t69 = -7582701979889LL;

	t69 = ((x409/(x410%x411))+x412);

	if (t69 != -760193042LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x413 = 3U;
	int16_t x415 = 11969;

	t70 = ((x413/(x414%x415))+x416);

	if (t70 != 226847602659469LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x417 = INT16_MAX;
	int16_t x418 = INT16_MIN;
	int8_t x419 = 40;
	int32_t t71 = 10785263;

	t71 = ((x417/(x418%x419))+x420);

	if (t71 != -4096) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x434 = UINT16_MAX;
	int32_t x435 = INT32_MAX;
	uint64_t x436 = 1152LLU;

	t72 = ((x433/(x434%x435))+x436);

	if (t72 != 1152LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x437 = UINT16_MAX;
	int64_t x439 = INT64_MIN;
	static int16_t x440 = INT16_MIN;
	int64_t t73 = -1LL;

	t73 = ((x437/(x438%x439))+x440);

	if (t73 != -98303LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x443 = UINT32_MAX;
	int16_t x444 = INT16_MIN;
	uint64_t t74 = 677LLU;

	t74 = ((x441/(x442%x443))+x444);

	if (t74 != 8589901828LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x449 = 33287691LL;
	int8_t x450 = -14;
	static int64_t x451 = INT64_MAX;
	uint8_t x452 = 0U;
	int64_t t75 = 686LL;

	t75 = ((x449/(x450%x451))+x452);

	if (t75 != -2377692LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x461 = INT64_MIN;
	static volatile uint16_t x462 = 3U;
	volatile int64_t x463 = INT64_MAX;

	t76 = ((x461/(x462%x463))+x464);

	if (t76 != 6148914691236517205LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x465 = INT64_MIN;
	static int64_t x466 = INT64_MAX;
	int16_t x467 = INT16_MAX;
	static int64_t t77 = 46132034956LL;

	t77 = ((x465/(x466%x467))+x468);

	if (t77 != -1317624576693473866LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x469 = -1;
	int8_t x471 = INT8_MIN;
	uint16_t x472 = 11U;
	volatile int32_t t78 = -58055047;

	t78 = ((x469/(x470%x471))+x472);

	if (t78 != 11) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x485 = -1;
	int64_t x486 = INT64_MIN;
	uint8_t x487 = UINT8_MAX;
	static int8_t x488 = -30;

	t79 = ((x485/(x486%x487))+x488);

	if (t79 != -30LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x489 = INT16_MIN;
	uint64_t x490 = 24977422442LLU;
	int8_t x491 = INT8_MAX;
	int64_t x492 = 2LL;

	t80 = ((x489/(x490%x491))+x492);

	if (t80 != 222249928598909867LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x497 = 0U;
	static uint32_t x498 = 16023U;
	uint32_t x499 = UINT32_MAX;
	int8_t x500 = INT8_MAX;
	uint32_t t81 = 147801U;

	t81 = ((x497/(x498%x499))+x500);

	if (t81 != 127U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x501 = -1;
	int16_t x502 = 3406;
	int8_t x504 = 0;
	uint32_t t82 = 22U;

	t82 = ((x501/(x502%x503))+x504);

	if (t82 != 29826161U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x505 = UINT8_MAX;
	static int32_t x506 = -128453;
	int8_t x508 = INT8_MIN;
	int32_t t83 = -702;

	t83 = ((x505/(x506%x507))+x508);

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x513 = INT64_MIN;
	uint32_t x516 = UINT32_MAX;
	static int64_t t84 = 89352127917LL;

	t84 = ((x513/(x514%x515))+x516);

	if (t84 != -72624972373180546LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x518 = INT8_MIN;
	int32_t x519 = INT32_MIN;
	uint16_t x520 = UINT16_MAX;
	static volatile int32_t t85 = -102151685;

	t85 = ((x517/(x518%x519))+x520);

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x521 = INT8_MIN;
	uint16_t x522 = 16090U;
	int8_t x523 = INT8_MAX;
	static int64_t x524 = 79037913531LL;
	int64_t t86 = 32173LL;

	t86 = ((x521/(x522%x523))+x524);

	if (t86 != 79037913530LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x533 = 0LL;
	int16_t x534 = INT16_MIN;
	int32_t x535 = 31554;
	static int8_t x536 = -1;
	int64_t t87 = 821580060009LL;

	t87 = ((x533/(x534%x535))+x536);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x537 = 3;
	static int8_t x538 = INT8_MAX;
	int64_t x539 = INT64_MIN;
	int16_t x540 = 1636;
	int64_t t88 = 4045825094865LL;

	t88 = ((x537/(x538%x539))+x540);

	if (t88 != 1636LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x541 = 8U;
	uint32_t x542 = UINT32_MAX;
	int32_t x544 = -1;
	uint32_t t89 = UINT32_MAX;

	t89 = ((x541/(x542%x543))+x544);

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x546 = 98U;
	int32_t x547 = -357206;
	static int8_t x548 = INT8_MIN;
	static volatile uint32_t t90 = 0U;

	t90 = ((x545/(x546%x547))+x548);

	if (t90 != 43825734U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x549 = -1;
	volatile int64_t x550 = INT64_MAX;
	uint16_t x551 = 3U;
	int64_t t91 = 4232067953702174LL;

	t91 = ((x549/(x550%x551))+x552);

	if (t91 != 148LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x553 = -1;
	volatile int16_t x554 = -5;
	int16_t x555 = -1417;
	volatile int32_t t92 = 5935390;

	t92 = ((x553/(x554%x555))+x556);

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x557 = -40;
	int64_t x558 = -1LL;
	int64_t x559 = INT64_MAX;
	int64_t t93 = -2822735254543108LL;

	t93 = ((x557/(x558%x559))+x560);

	if (t93 != -9223372036854775768LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x561 = INT32_MAX;
	volatile uint16_t x562 = 429U;
	int16_t x563 = INT16_MIN;
	uint32_t x564 = 464690U;
	uint32_t t94 = 10385U;

	t94 = ((x561/(x562%x563))+x564);

	if (t94 != 5470479U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x567 = -24;
	static int8_t x568 = INT8_MAX;

	t95 = ((x565/(x566%x567))+x568);

	if (t95 != -6897517764LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x569 = INT16_MIN;
	static int16_t x571 = INT16_MIN;
	volatile uint64_t t96 = 207056281984LLU;

	t96 = ((x569/(x570%x571))+x572);

	if (t96 != 677658907681LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x577 = 161U;
	uint16_t x578 = 4U;
	uint32_t x579 = 35680U;
	int32_t x580 = -25;
	uint32_t t97 = 361673776U;

	t97 = ((x577/(x578%x579))+x580);

	if (t97 != 15U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x585 = 248470547;
	int32_t x586 = INT32_MIN;
	volatile int32_t t98 = -4;

	t98 = ((x585/(x586%x587))+x588);

	if (t98 != -408668) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x589 = -1;
	int32_t x590 = 22;
	int8_t x591 = INT8_MIN;
	uint16_t x592 = 1U;

	t99 = ((x589/(x590%x591))+x592);

	if (t99 != 1) { NG(); } else { ; }
	
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

