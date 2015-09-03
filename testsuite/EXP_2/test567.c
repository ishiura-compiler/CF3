#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x5 = UINT32_MAX;
uint32_t x6 = UINT32_MAX;
uint64_t x13 = UINT64_MAX;
volatile int64_t x16 = INT64_MAX;
int32_t t4 = 0;
uint64_t x55 = 3102402LLU;
static int64_t x65 = INT64_MIN;
static volatile int8_t x66 = -1;
uint64_t x67 = 54751365185LLU;
volatile int32_t t8 = 163452;
uint8_t x73 = 2U;
uint64_t x74 = UINT64_MAX;
volatile int32_t t9 = -4;
uint8_t x85 = 6U;
uint16_t x88 = 59U;
int32_t t10 = 2309761;
volatile int32_t t11 = -15901835;
int32_t t12 = 195158786;
int16_t x115 = -1;
static uint64_t x136 = 0LLU;
int64_t x138 = 1LL;
static int16_t x140 = -1;
int32_t x142 = -6829209;
static int32_t t18 = 124693;
static uint16_t x148 = UINT16_MAX;
volatile int32_t t19 = 5137639;
int64_t x152 = 26LL;
static int64_t x154 = INT64_MAX;
volatile int8_t x160 = INT8_MIN;
static volatile uint32_t x162 = 29287U;
int32_t x174 = INT32_MIN;
int32_t x188 = INT32_MAX;
int16_t x201 = 7;
uint32_t x204 = UINT32_MAX;
volatile int8_t x207 = 1;
int32_t t29 = 1;
int64_t x237 = -97219325LL;
uint16_t x250 = UINT16_MAX;
static uint8_t x251 = 21U;
uint32_t x253 = 943197U;
volatile uint32_t x254 = UINT32_MAX;
static volatile int32_t t35 = -4;
uint16_t x262 = UINT16_MAX;
volatile int16_t x264 = INT16_MIN;
volatile int32_t t37 = -16730867;
volatile int32_t t39 = 13920162;
volatile uint32_t x316 = 10993065U;
volatile int32_t t40 = 34;
int64_t x326 = INT64_MIN;
int32_t t44 = -246832761;
volatile uint32_t x364 = 626819862U;
int32_t t49 = -1332597;
int16_t x373 = 38;
uint16_t x374 = 12162U;
static int16_t x382 = INT16_MAX;
uint8_t x384 = 0U;
static int8_t x391 = -1;
int32_t t55 = 46;
int32_t t57 = 3403;
int64_t x447 = -201976LL;
volatile int32_t t58 = -1184675;
volatile uint16_t x458 = 7616U;
int32_t x485 = 102;
int32_t x488 = INT32_MIN;
int8_t x513 = -1;
int16_t x534 = INT16_MAX;
static volatile uint64_t x543 = UINT64_MAX;
int64_t x552 = 206137573283023950LL;
volatile int16_t x555 = -1;
int32_t t68 = 0;
int8_t x578 = INT8_MIN;
int32_t x579 = 59;
int32_t t69 = -885105;
uint8_t x600 = UINT8_MAX;
volatile uint32_t x601 = 2233U;
int32_t t73 = -1452;
uint64_t x617 = 0LLU;
static int32_t x620 = -1;
uint8_t x645 = UINT8_MAX;
int32_t t78 = -14101;
int16_t x656 = INT16_MIN;
int32_t t80 = -4;
static int64_t x718 = INT64_MAX;
int32_t t84 = 783273;
int16_t x730 = -1;
int32_t x737 = INT32_MAX;
int8_t x745 = INT8_MAX;
static volatile int32_t t91 = 70882;
int32_t x787 = INT32_MIN;
static int8_t x790 = 44;
int16_t x791 = 2;
int8_t x818 = 48;
volatile int64_t x822 = INT64_MIN;
int64_t x823 = INT64_MIN;
volatile int32_t t97 = 1049720;
static int64_t x825 = INT64_MAX;
int8_t x827 = 53;


void f0(void) {
	static int8_t x1 = 1;
	int64_t x2 = INT64_MIN;
	volatile int32_t x3 = INT32_MIN;
	volatile int32_t x4 = INT32_MIN;
	int32_t t0 = -7068;

	t0 = ((x1%(x2/x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x7 = 2;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 15438168;

	t1 = ((x5%(x6/x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x14 = UINT16_MAX;
	static int8_t x15 = INT8_MAX;
	int32_t t2 = -12776248;

	t2 = ((x13%(x14/x15))==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = 433;
	static int32_t x26 = 395329;
	volatile int8_t x27 = INT8_MIN;
	int8_t x28 = INT8_MIN;
	int32_t t3 = 25757114;

	t3 = ((x25%(x26/x27))==x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = -1;
	uint16_t x30 = UINT16_MAX;
	static uint64_t x31 = 3421LLU;
	int16_t x32 = -1;

	t4 = ((x29%(x30/x31))==x32);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x33 = INT8_MIN;
	int64_t x34 = 926656961467110183LL;
	int16_t x35 = INT16_MIN;
	volatile int16_t x36 = INT16_MAX;
	volatile int32_t t5 = 85;

	t5 = ((x33%(x34/x35))==x36);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x49 = 78U;
	volatile uint64_t x50 = 2250555LLU;
	uint32_t x51 = 144U;
	volatile int32_t x52 = -1;
	int32_t t6 = -72079202;

	t6 = ((x49%(x50/x51))==x52);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x53 = INT16_MIN;
	static int16_t x54 = -1;
	int16_t x56 = INT16_MIN;
	volatile int32_t t7 = -22545975;

	t7 = ((x53%(x54/x55))==x56);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x68 = INT8_MIN;

	t8 = ((x65%(x66/x67))==x68);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x75 = 3191318;
	uint32_t x76 = 29764U;

	t9 = ((x73%(x74/x75))==x76);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x86 = UINT64_MAX;
	int32_t x87 = INT32_MIN;

	t10 = ((x85%(x86/x87))==x88);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x93 = 1U;
	volatile int8_t x94 = INT8_MAX;
	int32_t x95 = -1;
	volatile uint64_t x96 = UINT64_MAX;

	t11 = ((x93%(x94/x95))==x96);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x109 = 2U;
	int16_t x110 = INT16_MIN;
	int16_t x111 = INT16_MIN;
	volatile int32_t x112 = -8743;

	t12 = ((x109%(x110/x111))==x112);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x113 = 866900093543514051LLU;
	uint32_t x114 = UINT32_MAX;
	int64_t x116 = INT64_MIN;
	volatile int32_t t13 = 2003922;

	t13 = ((x113%(x114/x115))==x116);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x117 = INT32_MAX;
	static volatile uint16_t x118 = UINT16_MAX;
	uint64_t x119 = 27691LLU;
	static uint16_t x120 = 11U;
	volatile int32_t t14 = 882105642;

	t14 = ((x117%(x118/x119))==x120);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x121 = -8595;
	int64_t x122 = 3168488038217244306LL;
	uint32_t x123 = UINT32_MAX;
	static int32_t x124 = INT32_MAX;
	volatile int32_t t15 = 59582663;

	t15 = ((x121%(x122/x123))==x124);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x133 = INT16_MIN;
	uint64_t x134 = UINT64_MAX;
	uint16_t x135 = UINT16_MAX;
	int32_t t16 = -190319526;

	t16 = ((x133%(x134/x135))==x136);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x137 = INT32_MIN;
	int8_t x139 = -1;
	volatile int32_t t17 = 442659809;

	t17 = ((x137%(x138/x139))==x140);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x141 = 0;
	volatile uint8_t x143 = 15U;
	uint32_t x144 = 256019U;

	t18 = ((x141%(x142/x143))==x144);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x145 = 1;
	int32_t x146 = INT32_MIN;
	int32_t x147 = 49736;

	t19 = ((x145%(x146/x147))==x148);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x149 = INT64_MIN;
	int32_t x150 = -362976;
	int8_t x151 = INT8_MAX;
	volatile int32_t t20 = 516;

	t20 = ((x149%(x150/x151))==x152);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x153 = INT8_MIN;
	volatile int32_t x155 = -1;
	volatile int16_t x156 = -1;
	volatile int32_t t21 = 200367;

	t21 = ((x153%(x154/x155))==x156);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x157 = INT64_MIN;
	static int8_t x158 = INT8_MIN;
	uint8_t x159 = 9U;
	int32_t t22 = 5;

	t22 = ((x157%(x158/x159))==x160);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x161 = INT64_MIN;
	int8_t x163 = 5;
	volatile int32_t x164 = INT32_MIN;
	volatile int32_t t23 = 281282;

	t23 = ((x161%(x162/x163))==x164);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x173 = 427502831309LL;
	int8_t x175 = 1;
	uint32_t x176 = UINT32_MAX;
	static volatile int32_t t24 = -3750;

	t24 = ((x173%(x174/x175))==x176);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x181 = 77;
	static volatile int32_t x182 = INT32_MIN;
	static int16_t x183 = INT16_MIN;
	int16_t x184 = 0;
	int32_t t25 = 14;

	t25 = ((x181%(x182/x183))==x184);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x185 = -1;
	static volatile int64_t x186 = INT64_MIN;
	int32_t x187 = INT32_MAX;
	static int32_t t26 = -1028299;

	t26 = ((x185%(x186/x187))==x188);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x202 = INT32_MAX;
	uint32_t x203 = 199U;
	int32_t t27 = 4;

	t27 = ((x201%(x202/x203))==x204);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x205 = -1LL;
	uint32_t x206 = 2049130732U;
	uint64_t x208 = 26817904376LLU;
	volatile int32_t t28 = -124976395;

	t28 = ((x205%(x206/x207))==x208);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x213 = 0U;
	int64_t x214 = INT64_MAX;
	int8_t x215 = 2;
	int16_t x216 = INT16_MIN;

	t29 = ((x213%(x214/x215))==x216);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x221 = INT8_MAX;
	int16_t x222 = INT16_MAX;
	static int64_t x223 = 165LL;
	volatile int8_t x224 = INT8_MIN;
	volatile int32_t t30 = -368378452;

	t30 = ((x221%(x222/x223))==x224);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x233 = INT16_MIN;
	static int32_t x234 = INT32_MIN;
	volatile uint8_t x235 = 1U;
	volatile int64_t x236 = INT64_MIN;
	volatile int32_t t31 = 165651927;

	t31 = ((x233%(x234/x235))==x236);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x238 = INT16_MIN;
	int8_t x239 = -1;
	int16_t x240 = 15313;
	int32_t t32 = 218;

	t32 = ((x237%(x238/x239))==x240);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x245 = -1;
	int64_t x246 = INT64_MIN;
	int16_t x247 = INT16_MAX;
	int64_t x248 = INT64_MAX;
	static int32_t t33 = 1;

	t33 = ((x245%(x246/x247))==x248);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x249 = 2U;
	int16_t x252 = 1;
	int32_t t34 = -74062;

	t34 = ((x249%(x250/x251))==x252);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x255 = UINT32_MAX;
	static int32_t x256 = INT32_MIN;

	t35 = ((x253%(x254/x255))==x256);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x261 = 0U;
	static int16_t x263 = INT16_MIN;
	int32_t t36 = 399;

	t36 = ((x261%(x262/x263))==x264);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x269 = 535878U;
	volatile int16_t x270 = INT16_MIN;
	volatile int16_t x271 = INT16_MIN;
	uint32_t x272 = UINT32_MAX;

	t37 = ((x269%(x270/x271))==x272);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x285 = 733LL;
	uint32_t x286 = UINT32_MAX;
	volatile uint8_t x287 = 1U;
	int64_t x288 = INT64_MAX;
	static volatile int32_t t38 = 13054439;

	t38 = ((x285%(x286/x287))==x288);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x297 = 3U;
	static int8_t x298 = INT8_MIN;
	int16_t x299 = -1;
	volatile int16_t x300 = INT16_MIN;

	t39 = ((x297%(x298/x299))==x300);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x313 = 9U;
	int64_t x314 = INT64_MAX;
	int8_t x315 = -1;

	t40 = ((x313%(x314/x315))==x316);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x321 = 82U;
	volatile int16_t x322 = INT16_MIN;
	uint16_t x323 = 2U;
	uint64_t x324 = UINT64_MAX;
	int32_t t41 = -2703167;

	t41 = ((x321%(x322/x323))==x324);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x325 = INT64_MIN;
	uint32_t x327 = 10U;
	static volatile int16_t x328 = 0;
	static volatile int32_t t42 = 10;

	t42 = ((x325%(x326/x327))==x328);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x333 = INT32_MIN;
	volatile int8_t x334 = -1;
	uint32_t x335 = 172796296U;
	volatile int64_t x336 = INT64_MAX;
	int32_t t43 = 1295632;

	t43 = ((x333%(x334/x335))==x336);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x341 = 35463128010519280LL;
	int8_t x342 = -57;
	int16_t x343 = -54;
	int16_t x344 = INT16_MAX;

	t44 = ((x341%(x342/x343))==x344);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x349 = INT16_MAX;
	int64_t x350 = -6817LL;
	static int8_t x351 = INT8_MAX;
	volatile int32_t x352 = -19;
	static int32_t t45 = -67083959;

	t45 = ((x349%(x350/x351))==x352);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x357 = 155332551601LLU;
	volatile uint16_t x358 = 666U;
	volatile int8_t x359 = -1;
	static int64_t x360 = 1376093496969LL;
	int32_t t46 = 10054928;

	t46 = ((x357%(x358/x359))==x360);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x361 = INT64_MIN;
	uint16_t x362 = UINT16_MAX;
	volatile uint8_t x363 = 3U;
	volatile int32_t t47 = 25406714;

	t47 = ((x361%(x362/x363))==x364);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x365 = INT16_MAX;
	int16_t x366 = INT16_MIN;
	volatile uint64_t x367 = 60719283075436LLU;
	static volatile int16_t x368 = INT16_MIN;
	volatile int32_t t48 = 327;

	t48 = ((x365%(x366/x367))==x368);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x369 = -1;
	int8_t x370 = -1;
	uint64_t x371 = UINT64_MAX;
	static uint16_t x372 = UINT16_MAX;

	t49 = ((x369%(x370/x371))==x372);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x375 = 9;
	uint16_t x376 = 31830U;
	volatile int32_t t50 = 1;

	t50 = ((x373%(x374/x375))==x376);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x377 = UINT16_MAX;
	volatile int64_t x378 = INT64_MAX;
	static int8_t x379 = INT8_MIN;
	volatile int16_t x380 = INT16_MIN;
	static volatile int32_t t51 = 248355;

	t51 = ((x377%(x378/x379))==x380);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x381 = 1238329778122318430LLU;
	int8_t x383 = INT8_MIN;
	int32_t t52 = -51;

	t52 = ((x381%(x382/x383))==x384);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x389 = INT64_MAX;
	int32_t x390 = -198;
	volatile uint64_t x392 = UINT64_MAX;
	int32_t t53 = -45772;

	t53 = ((x389%(x390/x391))==x392);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x393 = INT64_MAX;
	int64_t x394 = INT64_MAX;
	int32_t x395 = INT32_MIN;
	int16_t x396 = -1;
	static volatile int32_t t54 = -63431;

	t54 = ((x393%(x394/x395))==x396);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x401 = INT16_MIN;
	uint64_t x402 = 3534982033292972LLU;
	int16_t x403 = INT16_MAX;
	int64_t x404 = INT64_MAX;

	t55 = ((x401%(x402/x403))==x404);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x425 = INT16_MAX;
	static int64_t x426 = INT64_MIN;
	int32_t x427 = -89098842;
	int32_t x428 = -14;
	volatile int32_t t56 = 405;

	t56 = ((x425%(x426/x427))==x428);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x433 = 3331U;
	static int64_t x434 = INT64_MIN;
	static volatile int16_t x435 = INT16_MAX;
	volatile int16_t x436 = INT16_MAX;

	t57 = ((x433%(x434/x435))==x436);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x445 = -1;
	uint32_t x446 = 27268570U;
	volatile int32_t x448 = INT32_MIN;

	t58 = ((x445%(x446/x447))==x448);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x457 = 407;
	uint16_t x459 = 56U;
	static volatile int64_t x460 = -2692951676598724LL;
	int32_t t59 = 2262;

	t59 = ((x457%(x458/x459))==x460);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x486 = -1;
	volatile int8_t x487 = 1;
	int32_t t60 = 0;

	t60 = ((x485%(x486/x487))==x488);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x514 = 16159;
	int8_t x515 = INT8_MAX;
	int64_t x516 = 2228834879LL;
	int32_t t61 = 121521949;

	t61 = ((x513%(x514/x515))==x516);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x533 = 368438966LL;
	static volatile uint8_t x535 = 123U;
	int16_t x536 = INT16_MIN;
	static volatile int32_t t62 = -1439725;

	t62 = ((x533%(x534/x535))==x536);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x537 = 2U;
	static uint32_t x538 = UINT32_MAX;
	uint8_t x539 = UINT8_MAX;
	int8_t x540 = -1;
	int32_t t63 = 107;

	t63 = ((x537%(x538/x539))==x540);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x541 = 6U;
	int64_t x542 = -1LL;
	int64_t x544 = 6394LL;
	volatile int32_t t64 = -75;

	t64 = ((x541%(x542/x543))==x544);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x545 = UINT16_MAX;
	static int16_t x546 = 1;
	int32_t x547 = -1;
	int8_t x548 = INT8_MIN;
	int32_t t65 = -30;

	t65 = ((x545%(x546/x547))==x548);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x549 = INT8_MIN;
	int32_t x550 = -1;
	volatile int32_t x551 = -1;
	volatile int32_t t66 = 14213620;

	t66 = ((x549%(x550/x551))==x552);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x553 = 713U;
	volatile uint32_t x554 = UINT32_MAX;
	uint16_t x556 = UINT16_MAX;
	volatile int32_t t67 = 0;

	t67 = ((x553%(x554/x555))==x556);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x573 = 105LLU;
	int64_t x574 = INT64_MIN;
	int64_t x575 = -61300541688LL;
	int8_t x576 = INT8_MIN;

	t68 = ((x573%(x574/x575))==x576);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x577 = 593U;
	int32_t x580 = INT32_MIN;

	t69 = ((x577%(x578/x579))==x580);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x597 = INT8_MAX;
	int16_t x598 = -2267;
	int32_t x599 = -1;
	volatile int32_t t70 = 21797;

	t70 = ((x597%(x598/x599))==x600);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x602 = 12;
	int64_t x603 = -1LL;
	int8_t x604 = 40;
	volatile int32_t t71 = -81;

	t71 = ((x601%(x602/x603))==x604);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x609 = UINT64_MAX;
	static volatile int16_t x610 = INT16_MIN;
	volatile int16_t x611 = INT16_MIN;
	uint8_t x612 = 27U;
	int32_t t72 = -14;

	t72 = ((x609%(x610/x611))==x612);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x613 = UINT16_MAX;
	int16_t x614 = INT16_MIN;
	uint8_t x615 = 1U;
	int8_t x616 = -1;

	t73 = ((x613%(x614/x615))==x616);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x618 = -3;
	int8_t x619 = 3;
	volatile int32_t t74 = -1523;

	t74 = ((x617%(x618/x619))==x620);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x629 = 1U;
	int16_t x630 = -1;
	uint64_t x631 = 36969LLU;
	uint16_t x632 = 83U;
	static volatile int32_t t75 = -150600;

	t75 = ((x629%(x630/x631))==x632);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x633 = -1;
	int32_t x634 = 608;
	int32_t x635 = -1;
	volatile uint8_t x636 = 0U;
	int32_t t76 = 2054;

	t76 = ((x633%(x634/x635))==x636);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x646 = INT32_MIN;
	uint16_t x647 = 5U;
	uint64_t x648 = UINT64_MAX;
	volatile int32_t t77 = -6;

	t77 = ((x645%(x646/x647))==x648);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x649 = INT8_MIN;
	int16_t x650 = INT16_MIN;
	int16_t x651 = INT16_MAX;
	int16_t x652 = -1;

	t78 = ((x649%(x650/x651))==x652);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x653 = 65136249566448LLU;
	int8_t x654 = -1;
	uint32_t x655 = UINT32_MAX;
	volatile int32_t t79 = 34;

	t79 = ((x653%(x654/x655))==x656);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x657 = -1;
	int32_t x658 = -47147899;
	int16_t x659 = INT16_MIN;
	static volatile uint32_t x660 = 749455U;

	t80 = ((x657%(x658/x659))==x660);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x665 = 2;
	int32_t x666 = INT32_MIN;
	static int32_t x667 = INT32_MAX;
	uint32_t x668 = 1927U;
	int32_t t81 = 0;

	t81 = ((x665%(x666/x667))==x668);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x677 = INT8_MIN;
	volatile int64_t x678 = INT64_MIN;
	uint32_t x679 = UINT32_MAX;
	uint32_t x680 = 116720800U;
	int32_t t82 = 94638425;

	t82 = ((x677%(x678/x679))==x680);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x705 = INT8_MIN;
	int64_t x706 = 2184038746LL;
	int16_t x707 = INT16_MIN;
	int64_t x708 = -1LL;
	int32_t t83 = 58198;

	t83 = ((x705%(x706/x707))==x708);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x717 = 3359357681332662LL;
	uint32_t x719 = UINT32_MAX;
	uint16_t x720 = 3763U;

	t84 = ((x717%(x718/x719))==x720);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x725 = -1167644039LL;
	uint16_t x726 = 402U;
	int16_t x727 = -1;
	volatile int32_t x728 = INT32_MIN;
	volatile int32_t t85 = 0;

	t85 = ((x725%(x726/x727))==x728);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x729 = 69696U;
	uint32_t x731 = 6U;
	volatile int64_t x732 = INT64_MAX;
	static int32_t t86 = -45;

	t86 = ((x729%(x730/x731))==x732);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x733 = UINT16_MAX;
	uint64_t x734 = 1992573147878837641LLU;
	volatile uint16_t x735 = 67U;
	volatile int32_t x736 = -177848011;
	int32_t t87 = -138344224;

	t87 = ((x733%(x734/x735))==x736);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x738 = 4369200024347643LLU;
	static int16_t x739 = 4069;
	volatile int64_t x740 = INT64_MIN;
	int32_t t88 = 687853;

	t88 = ((x737%(x738/x739))==x740);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x741 = 14744LLU;
	int32_t x742 = -59538412;
	static int32_t x743 = 19906660;
	volatile uint8_t x744 = UINT8_MAX;
	int32_t t89 = -6044;

	t89 = ((x741%(x742/x743))==x744);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x746 = INT8_MAX;
	static int16_t x747 = -1;
	int32_t x748 = INT32_MAX;
	int32_t t90 = 814603;

	t90 = ((x745%(x746/x747))==x748);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x773 = UINT32_MAX;
	static int8_t x774 = 17;
	int64_t x775 = -3LL;
	int64_t x776 = -25994682056846509LL;

	t91 = ((x773%(x774/x775))==x776);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x785 = INT32_MAX;
	int32_t x786 = INT32_MIN;
	uint16_t x788 = 954U;
	int32_t t92 = -1477070;

	t92 = ((x785%(x786/x787))==x788);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x789 = INT32_MIN;
	static int32_t x792 = -227572384;
	volatile int32_t t93 = -11;

	t93 = ((x789%(x790/x791))==x792);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x809 = 51;
	int16_t x810 = -14496;
	static uint16_t x811 = 2U;
	int16_t x812 = -1;
	static int32_t t94 = -1843;

	t94 = ((x809%(x810/x811))==x812);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x813 = UINT32_MAX;
	static int32_t x814 = INT32_MAX;
	int16_t x815 = 60;
	static int16_t x816 = INT16_MIN;
	int32_t t95 = -1;

	t95 = ((x813%(x814/x815))==x816);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x817 = 1025237;
	int32_t x819 = -1;
	int8_t x820 = INT8_MIN;
	static volatile int32_t t96 = -19;

	t96 = ((x817%(x818/x819))==x820);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x821 = -1;
	int32_t x824 = 358426;

	t97 = ((x821%(x822/x823))==x824);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x826 = INT32_MIN;
	int8_t x828 = -5;
	int32_t t98 = -13627831;

	t98 = ((x825%(x826/x827))==x828);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x845 = 1U;
	volatile int16_t x846 = INT16_MIN;
	volatile int8_t x847 = -1;
	volatile uint8_t x848 = 6U;
	static volatile int32_t t99 = -387811648;

	t99 = ((x845%(x846/x847))==x848);

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

