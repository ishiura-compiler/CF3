#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = UINT16_MAX;
volatile int64_t x4 = -21815LL;
uint32_t x16 = 2039147788U;
volatile uint32_t t2 = 44955891U;
static int16_t x17 = 391;
int64_t x18 = INT64_MIN;
static int16_t x22 = INT16_MIN;
int8_t x23 = INT8_MAX;
uint32_t t5 = 2871U;
volatile uint64_t x30 = UINT64_MAX;
static int16_t x31 = INT16_MIN;
static uint64_t x40 = UINT64_MAX;
int32_t x43 = INT32_MAX;
uint64_t x44 = 3048735LLU;
uint32_t x45 = 4160U;
volatile int64_t x49 = 62847998878964LL;
volatile int32_t x51 = 774;
volatile uint32_t t10 = 72U;
int32_t t12 = -393937996;
int32_t t13 = 28;
int32_t x72 = 2865920;
uint64_t t15 = 163055353LLU;
int32_t x79 = 0;
int8_t x84 = -1;
int32_t t18 = 192802014;
volatile int8_t x89 = 17;
static volatile uint64_t t19 = 444719587095LLU;
int8_t x110 = INT8_MIN;
int8_t x112 = 39;
int32_t t23 = 17;
volatile int16_t x114 = -1;
int32_t x115 = -44058888;
static int64_t t25 = 47446LL;
int16_t x125 = -9923;
int32_t x133 = -1;
int8_t x136 = INT8_MAX;
int8_t x139 = INT8_MIN;
int32_t t29 = 2728472;
uint32_t x143 = UINT32_MAX;
uint32_t t30 = 1607911U;
static int32_t x165 = -1;
int16_t x166 = INT16_MIN;
volatile int32_t t34 = 5337518;
uint8_t x174 = 0U;
static int64_t t35 = 147460702729LL;
int64_t x189 = -6182101LL;
static int8_t x191 = -1;
int64_t x192 = -2103503629600411500LL;
uint16_t x193 = 25560U;
int8_t x194 = -1;
volatile uint8_t x202 = 44U;
int16_t x224 = 1345;
static volatile int32_t t44 = 3463127;
int32_t x226 = INT32_MIN;
volatile int16_t x244 = INT16_MAX;
int64_t x247 = -8120LL;
int8_t x251 = INT8_MIN;
int64_t t49 = -13069949168LL;
uint16_t x254 = 59U;
int8_t x257 = INT8_MAX;
static int16_t x259 = INT16_MIN;
static volatile int64_t x262 = -1LL;
uint8_t x263 = 11U;
int32_t x281 = -1;
int64_t x286 = -1LL;
int8_t x289 = INT8_MIN;
int64_t x290 = INT64_MIN;
uint16_t x292 = UINT16_MAX;
static int8_t x293 = INT8_MIN;
volatile int64_t x296 = -1LL;
volatile int16_t x304 = INT16_MIN;
volatile int16_t x310 = INT16_MIN;
int64_t x337 = INT64_MIN;
int32_t x343 = INT32_MAX;
static uint32_t x359 = 197U;
int64_t x361 = INT64_MIN;
static int64_t x366 = INT64_MIN;
uint32_t x367 = UINT32_MAX;
volatile int16_t x373 = INT16_MIN;
uint32_t x375 = 256U;
int32_t x397 = -7052;
int64_t x401 = INT64_MIN;
int32_t x405 = -1;
uint16_t x412 = 16042U;
volatile int32_t t83 = -22;
volatile int32_t x417 = -3684;
volatile int16_t x418 = INT16_MIN;
int16_t x420 = INT16_MIN;
static volatile int32_t t85 = -784038938;
int64_t x427 = -18021827231448484LL;
volatile int64_t x431 = INT64_MIN;
volatile int64_t t87 = -588648LL;
uint32_t x437 = 236951022U;
int16_t x455 = -1;
int32_t t92 = -259;
volatile uint32_t t93 = 15436U;
uint16_t x464 = 14U;
int64_t x476 = INT64_MIN;
static volatile uint64_t t97 = 799LLU;
static uint32_t x482 = 11918998U;
uint32_t x483 = UINT32_MAX;
static int64_t t98 = 271404972LL;
int16_t x488 = INT16_MIN;


void f0(void) {
	int32_t x1 = -2570093;
	volatile int32_t x2 = 64896734;
	int64_t t0 = -3LL;

	t0 = ((x1<=x2)*(x3+x4));

	if (t0 != 43720LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MAX;
	static uint32_t x10 = UINT32_MAX;
	volatile int8_t x11 = INT8_MIN;
	static int64_t x12 = -1LL;
	static volatile int64_t t1 = -702610LL;

	t1 = ((x9<=x10)*(x11+x12));

	if (t1 != -129LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	static volatile uint16_t x14 = UINT16_MAX;
	uint16_t x15 = 284U;

	t2 = ((x13<=x14)*(x15+x16));

	if (t2 != 2039148072U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x19 = UINT8_MAX;
	int32_t x20 = -1;
	volatile int32_t t3 = -404855;

	t3 = ((x17<=x18)*(x19+x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = -243240;
	int32_t x24 = -10114798;
	int32_t t4 = 74835;

	t4 = ((x21<=x22)*(x23+x24));

	if (t4 != -10114671) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = 5;
	int32_t x26 = INT32_MIN;
	uint32_t x27 = 882263044U;
	int16_t x28 = 21;

	t5 = ((x25<=x26)*(x27+x28));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x29 = -4536459004729433002LL;
	int16_t x32 = INT16_MIN;
	volatile int32_t t6 = 662913343;

	t6 = ((x29<=x30)*(x31+x32));

	if (t6 != -65536) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MIN;
	int16_t x38 = INT16_MIN;
	volatile int8_t x39 = -4;
	volatile uint64_t t7 = 3801LLU;

	t7 = ((x37<=x38)*(x39+x40));

	if (t7 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x41 = INT64_MIN;
	int64_t x42 = -1LL;
	static uint64_t t8 = 69329676131595LLU;

	t8 = ((x41<=x42)*(x43+x44));

	if (t8 != 2150532382LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x46 = INT32_MIN;
	static int16_t x47 = -5;
	int32_t x48 = 88;
	int32_t t9 = 1;

	t9 = ((x45<=x46)*(x47+x48));

	if (t9 != 83) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x50 = INT8_MAX;
	uint32_t x52 = 13U;

	t10 = ((x49<=x50)*(x51+x52));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	int32_t x54 = -1;
	uint64_t x55 = 1134LLU;
	uint32_t x56 = 4472028U;
	uint64_t t11 = 5662802471LLU;

	t11 = ((x53<=x54)*(x55+x56));

	if (t11 != 4473162LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x57 = -7118;
	int16_t x58 = -792;
	static uint8_t x59 = 6U;
	volatile int16_t x60 = 1;

	t12 = ((x57<=x58)*(x59+x60));

	if (t12 != 7) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x65 = UINT64_MAX;
	volatile int8_t x66 = 1;
	int16_t x67 = INT16_MAX;
	uint8_t x68 = 14U;

	t13 = ((x65<=x66)*(x67+x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 184820LLU;
	static int16_t x70 = INT16_MIN;
	uint64_t x71 = UINT64_MAX;
	uint64_t t14 = 2851LLU;

	t14 = ((x69<=x70)*(x71+x72));

	if (t14 != 2865919LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = 1U;
	int64_t x74 = -612LL;
	int16_t x75 = INT16_MAX;
	uint64_t x76 = 1LLU;

	t15 = ((x73<=x74)*(x75+x76));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = 1U;
	int8_t x78 = INT8_MIN;
	int64_t x80 = 2773355956223321LL;
	volatile int64_t t16 = -18226663LL;

	t16 = ((x77<=x78)*(x79+x80));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 88U;
	uint16_t x82 = 55U;
	static uint8_t x83 = 13U;
	int32_t t17 = -171;

	t17 = ((x81<=x82)*(x83+x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x85 = 36U;
	int16_t x86 = INT16_MIN;
	volatile uint8_t x87 = 11U;
	int8_t x88 = -1;

	t18 = ((x85<=x86)*(x87+x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x90 = 7U;
	uint64_t x91 = 2822408LLU;
	volatile uint32_t x92 = UINT32_MAX;

	t19 = ((x89<=x90)*(x91+x92));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x93 = -1LL;
	int8_t x94 = INT8_MIN;
	uint16_t x95 = 15450U;
	static uint8_t x96 = 7U;
	volatile int32_t t20 = -581;

	t20 = ((x93<=x94)*(x95+x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = -1903;
	int8_t x98 = 30;
	static volatile uint8_t x99 = UINT8_MAX;
	static int8_t x100 = 18;
	int32_t t21 = -1;

	t21 = ((x97<=x98)*(x99+x100));

	if (t21 != 273) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MAX;
	int64_t x102 = -1LL;
	uint64_t x103 = 11881909101LLU;
	uint32_t x104 = 6U;
	static uint64_t t22 = 560888012LLU;

	t22 = ((x101<=x102)*(x103+x104));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x109 = 2;
	int32_t x111 = -1;

	t23 = ((x109<=x110)*(x111+x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = 3832;
	int64_t x116 = -3032479LL;
	static volatile int64_t t24 = -516LL;

	t24 = ((x113<=x114)*(x115+x116));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x121 = 47U;
	static int8_t x122 = -1;
	int64_t x123 = -4318604703132LL;
	volatile int16_t x124 = INT16_MAX;

	t25 = ((x121<=x122)*(x123+x124));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x126 = INT8_MAX;
	uint8_t x127 = 0U;
	uint64_t x128 = UINT64_MAX;
	uint64_t t26 = UINT64_MAX;

	t26 = ((x125<=x126)*(x127+x128));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x129 = -426;
	int32_t x130 = 7218;
	uint16_t x131 = 456U;
	int8_t x132 = INT8_MIN;
	volatile int32_t t27 = -484517502;

	t27 = ((x129<=x130)*(x131+x132));

	if (t27 != 328) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x134 = 1LL;
	uint64_t x135 = 28551113478956LLU;
	volatile uint64_t t28 = 45338LLU;

	t28 = ((x133<=x134)*(x135+x136));

	if (t28 != 28551113479083LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x137 = INT16_MIN;
	int64_t x138 = 364LL;
	uint16_t x140 = 7U;

	t29 = ((x137<=x138)*(x139+x140));

	if (t29 != -121) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = -13;
	volatile uint8_t x142 = 4U;
	static int8_t x144 = INT8_MIN;

	t30 = ((x141<=x142)*(x143+x144));

	if (t30 != 4294967167U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = -1;
	volatile uint8_t x150 = 1U;
	uint32_t x151 = UINT32_MAX;
	int32_t x152 = INT32_MAX;
	volatile uint32_t t31 = 151766480U;

	t31 = ((x149<=x150)*(x151+x152));

	if (t31 != 2147483646U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x153 = -1;
	int16_t x154 = INT16_MAX;
	volatile uint16_t x155 = UINT16_MAX;
	uint32_t x156 = UINT32_MAX;
	uint32_t t32 = 306516U;

	t32 = ((x153<=x154)*(x155+x156));

	if (t32 != 65534U) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x157 = INT8_MAX;
	static uint8_t x158 = 0U;
	int32_t x159 = 0;
	int8_t x160 = -1;
	volatile int32_t t33 = 2380;

	t33 = ((x157<=x158)*(x159+x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x167 = 14826;
	uint8_t x168 = 121U;

	t34 = ((x165<=x166)*(x167+x168));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x173 = 2U;
	int64_t x175 = -1LL;
	int16_t x176 = INT16_MIN;

	t35 = ((x173<=x174)*(x175+x176));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = -10227;
	volatile uint32_t x178 = 844U;
	uint32_t x179 = 1977058U;
	static volatile int16_t x180 = -1;
	uint32_t t36 = 121506998U;

	t36 = ((x177<=x178)*(x179+x180));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x190 = 14893602LL;
	volatile int64_t t37 = 886LL;

	t37 = ((x189<=x190)*(x191+x192));

	if (t37 != -2103503629600411501LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x195 = 64U;
	static volatile int8_t x196 = 1;
	uint32_t t38 = 40695U;

	t38 = ((x193<=x194)*(x195+x196));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x197 = 10U;
	int32_t x198 = -1;
	int64_t x199 = 114LL;
	int16_t x200 = -1;
	int64_t t39 = 31021884897LL;

	t39 = ((x197<=x198)*(x199+x200));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x201 = INT64_MIN;
	int32_t x203 = 1;
	int32_t x204 = -1;
	int32_t t40 = 230532116;

	t40 = ((x201<=x202)*(x203+x204));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x209 = -251578LL;
	volatile int32_t x210 = INT32_MIN;
	uint8_t x211 = UINT8_MAX;
	int8_t x212 = -1;
	int32_t t41 = 165647;

	t41 = ((x209<=x210)*(x211+x212));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x213 = INT32_MIN;
	static int16_t x214 = 12;
	uint16_t x215 = 0U;
	int8_t x216 = INT8_MIN;
	volatile int32_t t42 = 25;

	t42 = ((x213<=x214)*(x215+x216));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x217 = 73U;
	uint64_t x218 = 1LLU;
	static int16_t x219 = -12;
	volatile int16_t x220 = 5;
	int32_t t43 = 68;

	t43 = ((x217<=x218)*(x219+x220));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x221 = 149U;
	volatile int16_t x222 = 0;
	int16_t x223 = -1;

	t44 = ((x221<=x222)*(x223+x224));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x225 = INT16_MAX;
	int8_t x227 = -1;
	static int8_t x228 = INT8_MAX;
	int32_t t45 = -1627443;

	t45 = ((x225<=x226)*(x227+x228));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x233 = INT64_MAX;
	int8_t x234 = 41;
	volatile int16_t x235 = -1;
	uint8_t x236 = 1U;
	static int32_t t46 = -49389687;

	t46 = ((x233<=x234)*(x235+x236));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x241 = 23U;
	uint16_t x242 = 508U;
	int8_t x243 = -1;
	static volatile int32_t t47 = 2737951;

	t47 = ((x241<=x242)*(x243+x244));

	if (t47 != 32766) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x245 = 176170284407LLU;
	int32_t x246 = -1;
	volatile uint8_t x248 = 46U;
	static volatile int64_t t48 = 44017557725LL;

	t48 = ((x245<=x246)*(x247+x248));

	if (t48 != -8074LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x249 = -1;
	int64_t x250 = INT64_MIN;
	static int64_t x252 = -1614053LL;

	t49 = ((x249<=x250)*(x251+x252));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x253 = -30338;
	int32_t x255 = INT32_MAX;
	volatile int8_t x256 = -5;
	volatile int32_t t50 = 13571421;

	t50 = ((x253<=x254)*(x255+x256));

	if (t50 != 2147483642) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x258 = INT32_MAX;
	int32_t x260 = 0;
	int32_t t51 = 324714216;

	t51 = ((x257<=x258)*(x259+x260));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x261 = UINT16_MAX;
	uint16_t x264 = 416U;
	static volatile int32_t t52 = -76175;

	t52 = ((x261<=x262)*(x263+x264));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x265 = -1;
	int64_t x266 = INT64_MIN;
	int16_t x267 = 0;
	static uint16_t x268 = 3282U;
	static volatile int32_t t53 = -337458234;

	t53 = ((x265<=x266)*(x267+x268));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x277 = 164U;
	uint16_t x278 = UINT16_MAX;
	uint8_t x279 = UINT8_MAX;
	static int16_t x280 = INT16_MIN;
	volatile int32_t t54 = 1;

	t54 = ((x277<=x278)*(x279+x280));

	if (t54 != -32513) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x282 = UINT64_MAX;
	static uint8_t x283 = UINT8_MAX;
	int8_t x284 = -1;
	int32_t t55 = -448484;

	t55 = ((x281<=x282)*(x283+x284));

	if (t55 != 254) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x285 = UINT8_MAX;
	uint16_t x287 = 1U;
	int16_t x288 = INT16_MIN;
	int32_t t56 = -3375336;

	t56 = ((x285<=x286)*(x287+x288));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x291 = -1;
	int32_t t57 = 0;

	t57 = ((x289<=x290)*(x291+x292));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x294 = UINT64_MAX;
	volatile int8_t x295 = -1;
	static int64_t t58 = -73883968166802LL;

	t58 = ((x293<=x294)*(x295+x296));

	if (t58 != -2LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x297 = INT32_MIN;
	int16_t x298 = 1;
	static uint16_t x299 = 1730U;
	int32_t x300 = -1;
	volatile int32_t t59 = -1;

	t59 = ((x297<=x298)*(x299+x300));

	if (t59 != 1729) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x301 = -24;
	volatile int16_t x302 = 2;
	int8_t x303 = 5;
	int32_t t60 = -10361660;

	t60 = ((x301<=x302)*(x303+x304));

	if (t60 != -32763) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x305 = UINT16_MAX;
	int32_t x306 = -1;
	static int16_t x307 = INT16_MIN;
	int64_t x308 = -1351883705773LL;
	int64_t t61 = -56340022763745012LL;

	t61 = ((x305<=x306)*(x307+x308));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x309 = 6U;
	uint8_t x311 = 85U;
	int64_t x312 = 4945114716475081LL;
	volatile int64_t t62 = -215963LL;

	t62 = ((x309<=x310)*(x311+x312));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x317 = INT8_MAX;
	uint16_t x318 = 9U;
	int64_t x319 = -240062372212LL;
	int16_t x320 = 396;
	int64_t t63 = 1708469LL;

	t63 = ((x317<=x318)*(x319+x320));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x321 = INT8_MAX;
	int8_t x322 = -1;
	uint32_t x323 = 55968540U;
	uint8_t x324 = 4U;
	volatile uint32_t t64 = 0U;

	t64 = ((x321<=x322)*(x323+x324));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x325 = 92429322U;
	uint64_t x326 = UINT64_MAX;
	int64_t x327 = INT64_MAX;
	int16_t x328 = -63;
	int64_t t65 = -403LL;

	t65 = ((x325<=x326)*(x327+x328));

	if (t65 != 9223372036854775744LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x333 = UINT8_MAX;
	uint16_t x334 = 127U;
	uint16_t x335 = 29U;
	int8_t x336 = INT8_MIN;
	int32_t t66 = 1206916;

	t66 = ((x333<=x334)*(x335+x336));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x338 = INT64_MAX;
	static int32_t x339 = -1;
	volatile uint32_t x340 = UINT32_MAX;
	volatile uint32_t t67 = 59171882U;

	t67 = ((x337<=x338)*(x339+x340));

	if (t67 != 4294967294U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x341 = -3453;
	volatile uint8_t x342 = 3U;
	uint32_t x344 = 84584U;
	volatile uint32_t t68 = 173631341U;

	t68 = ((x341<=x342)*(x343+x344));

	if (t68 != 2147568231U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x349 = INT32_MIN;
	int8_t x350 = -58;
	static uint64_t x351 = 72LLU;
	static uint32_t x352 = 339794606U;
	static volatile uint64_t t69 = 3LLU;

	t69 = ((x349<=x350)*(x351+x352));

	if (t69 != 339794678LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x353 = UINT16_MAX;
	uint16_t x354 = UINT16_MAX;
	int64_t x355 = INT64_MIN;
	uint16_t x356 = 0U;
	volatile int64_t t70 = INT64_MIN;

	t70 = ((x353<=x354)*(x355+x356));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x357 = 955855418LL;
	uint8_t x358 = 2U;
	int32_t x360 = INT32_MIN;
	volatile uint32_t t71 = 5337U;

	t71 = ((x357<=x358)*(x359+x360));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x362 = UINT64_MAX;
	uint8_t x363 = 2U;
	static volatile uint8_t x364 = 39U;
	static int32_t t72 = -80490;

	t72 = ((x361<=x362)*(x363+x364));

	if (t72 != 41) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x365 = INT8_MAX;
	int64_t x368 = INT64_MIN;
	volatile int64_t t73 = 63LL;

	t73 = ((x365<=x366)*(x367+x368));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x374 = INT32_MAX;
	static int64_t x376 = -1LL;
	int64_t t74 = -214129324589LL;

	t74 = ((x373<=x374)*(x375+x376));

	if (t74 != 255LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x377 = UINT16_MAX;
	int32_t x378 = INT32_MIN;
	int64_t x379 = INT64_MIN;
	volatile uint64_t x380 = 216776LLU;
	uint64_t t75 = 6132198314786LLU;

	t75 = ((x377<=x378)*(x379+x380));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x381 = 15083;
	volatile uint16_t x382 = 27880U;
	uint16_t x383 = 0U;
	uint32_t x384 = 13U;
	volatile uint32_t t76 = 2009621U;

	t76 = ((x381<=x382)*(x383+x384));

	if (t76 != 13U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x385 = -7707795044LL;
	uint8_t x386 = 13U;
	uint64_t x387 = 54066581608235LLU;
	uint8_t x388 = 10U;
	uint64_t t77 = 1055116073LLU;

	t77 = ((x385<=x386)*(x387+x388));

	if (t77 != 54066581608245LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x389 = INT8_MIN;
	static int16_t x390 = -1;
	uint32_t x391 = UINT32_MAX;
	uint32_t x392 = UINT32_MAX;
	uint32_t t78 = 19U;

	t78 = ((x389<=x390)*(x391+x392));

	if (t78 != 4294967294U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x393 = UINT8_MAX;
	static int32_t x394 = -207925941;
	uint8_t x395 = UINT8_MAX;
	int32_t x396 = INT32_MIN;
	int32_t t79 = 439881823;

	t79 = ((x393<=x394)*(x395+x396));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x398 = -1;
	static int64_t x399 = INT64_MIN;
	uint32_t x400 = 1282U;
	volatile int64_t t80 = -729718LL;

	t80 = ((x397<=x398)*(x399+x400));

	if (t80 != -9223372036854774526LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x402 = INT16_MAX;
	int16_t x403 = -1;
	int64_t x404 = -6975197091122LL;
	int64_t t81 = 16987927969790LL;

	t81 = ((x401<=x402)*(x403+x404));

	if (t81 != -6975197091123LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x406 = INT16_MIN;
	int8_t x407 = INT8_MIN;
	uint64_t x408 = 1701436025LLU;
	static uint64_t t82 = 128469300439898LLU;

	t82 = ((x405<=x406)*(x407+x408));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x409 = 4896587478570LL;
	int32_t x410 = -1;
	volatile int32_t x411 = INT32_MIN;

	t83 = ((x409<=x410)*(x411+x412));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x413 = INT32_MAX;
	uint16_t x414 = 76U;
	int16_t x415 = INT16_MIN;
	static volatile uint32_t x416 = 165671702U;
	uint32_t t84 = 56811977U;

	t84 = ((x413<=x414)*(x415+x416));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x419 = 2282U;

	t85 = ((x417<=x418)*(x419+x420));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x425 = 316U;
	static volatile int16_t x426 = -7205;
	int64_t x428 = -1LL;
	int64_t t86 = -11491783LL;

	t86 = ((x425<=x426)*(x427+x428));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x429 = 631;
	uint64_t x430 = UINT64_MAX;
	int16_t x432 = INT16_MAX;

	t87 = ((x429<=x430)*(x431+x432));

	if (t87 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x438 = 3253U;
	volatile int8_t x439 = 36;
	static int8_t x440 = 0;
	static volatile int32_t t88 = -3233;

	t88 = ((x437<=x438)*(x439+x440));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x441 = 557;
	int8_t x442 = INT8_MIN;
	int16_t x443 = INT16_MIN;
	static int16_t x444 = 227;
	int32_t t89 = -875;

	t89 = ((x441<=x442)*(x443+x444));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x445 = INT64_MIN;
	int64_t x446 = INT64_MAX;
	volatile int16_t x447 = -131;
	uint32_t x448 = 300748567U;
	static uint32_t t90 = 23U;

	t90 = ((x445<=x446)*(x447+x448));

	if (t90 != 300748436U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x449 = INT16_MAX;
	uint16_t x450 = UINT16_MAX;
	int8_t x451 = -1;
	uint8_t x452 = 1U;
	volatile int32_t t91 = -2163399;

	t91 = ((x449<=x450)*(x451+x452));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x453 = INT8_MIN;
	uint64_t x454 = UINT64_MAX;
	int16_t x456 = 11644;

	t92 = ((x453<=x454)*(x455+x456));

	if (t92 != 11643) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x457 = INT16_MIN;
	int16_t x458 = INT16_MIN;
	uint32_t x459 = UINT32_MAX;
	int32_t x460 = 5242;

	t93 = ((x457<=x458)*(x459+x460));

	if (t93 != 5241U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x461 = INT64_MAX;
	int16_t x462 = -18;
	int8_t x463 = -1;
	volatile int32_t t94 = -30661;

	t94 = ((x461<=x462)*(x463+x464));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x469 = INT64_MIN;
	int16_t x470 = -8;
	volatile uint64_t x471 = 31617823157LLU;
	int64_t x472 = -1LL;
	static uint64_t t95 = 506LLU;

	t95 = ((x469<=x470)*(x471+x472));

	if (t95 != 31617823156LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x473 = INT64_MAX;
	volatile int16_t x474 = -1;
	uint8_t x475 = 0U;
	volatile int64_t t96 = 21LL;

	t96 = ((x473<=x474)*(x475+x476));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x477 = INT8_MIN;
	int8_t x478 = 3;
	volatile uint64_t x479 = UINT64_MAX;
	uint16_t x480 = UINT16_MAX;

	t97 = ((x477<=x478)*(x479+x480));

	if (t97 != 65534LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x481 = -34297876LL;
	int64_t x484 = 359080LL;

	t98 = ((x481<=x482)*(x483+x484));

	if (t98 != 4295326375LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x485 = 242683146771482LLU;
	volatile int8_t x486 = 1;
	uint64_t x487 = 783818977LLU;
	static uint64_t t99 = 59846717840LLU;

	t99 = ((x485<=x486)*(x487+x488));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

