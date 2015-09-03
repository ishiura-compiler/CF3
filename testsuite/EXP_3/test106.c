#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = 32575461U;
volatile int16_t x8 = 867;
int32_t t1 = -314728270;
int16_t x11 = -3512;
int8_t x14 = -1;
static volatile uint64_t t4 = 57577887LLU;
static int64_t x21 = INT64_MIN;
static volatile int64_t x25 = -103782LL;
int8_t x33 = 22;
int16_t x34 = -1;
int32_t x37 = -1;
static uint16_t x44 = 291U;
volatile int32_t t11 = -38498047;
uint16_t x63 = 3U;
int32_t t16 = -224;
int64_t x82 = -1LL;
volatile uint32_t x88 = UINT32_MAX;
static volatile int32_t t19 = -16;
static uint16_t x94 = UINT16_MAX;
uint64_t x101 = UINT64_MAX;
uint16_t x103 = 111U;
static int32_t t22 = 716376592;
int32_t x105 = INT32_MAX;
uint64_t t23 = 123555276387LLU;
uint64_t t25 = 49551982LLU;
int16_t x128 = 1;
uint32_t x130 = 32003U;
static uint8_t x131 = UINT8_MAX;
static int64_t x133 = -53476022337648086LL;
int64_t x135 = -4112472LL;
static int64_t t29 = -132340415286871LL;
volatile int32_t x142 = INT32_MAX;
int64_t x144 = INT64_MIN;
int16_t x150 = INT16_MAX;
uint32_t t36 = 206440171U;
uint32_t x179 = UINT32_MAX;
volatile int64_t t37 = 16LL;
int8_t x190 = -1;
int64_t x191 = INT64_MIN;
int64_t x194 = 123631824670LL;
int32_t x199 = INT32_MAX;
volatile int8_t x209 = 0;
volatile int16_t x211 = 27;
static volatile int32_t t45 = -524379;
uint64_t x219 = 4872007117976102LLU;
int64_t x228 = INT64_MIN;
static int8_t x241 = INT8_MIN;
int8_t x244 = INT8_MAX;
int32_t x247 = -1;
uint64_t x248 = 55075724LLU;
int8_t x250 = 47;
int32_t x256 = INT32_MIN;
volatile int8_t x258 = 6;
int8_t x262 = INT8_MIN;
static volatile int8_t x270 = -1;
int64_t x275 = 103181193LL;
volatile uint16_t x276 = 1314U;
uint32_t t60 = 24U;
volatile int8_t x282 = INT8_MIN;
static uint8_t x293 = UINT8_MAX;
int32_t x294 = INT32_MIN;
volatile uint64_t x295 = UINT64_MAX;
uint32_t x300 = UINT32_MAX;
uint8_t x307 = 93U;
volatile int64_t x315 = -310LL;
static int8_t x317 = -48;
int16_t x330 = INT16_MAX;
int16_t x331 = -12321;
uint32_t t71 = 211783U;
int64_t x334 = INT64_MAX;
uint64_t x335 = UINT64_MAX;
uint8_t x340 = UINT8_MAX;
uint16_t x341 = 1323U;
uint16_t x344 = 164U;
static volatile int32_t t74 = -430482;
int32_t x353 = INT32_MIN;
volatile int32_t x355 = -1;
volatile uint16_t x356 = 9773U;
volatile int64_t x358 = INT64_MIN;
uint16_t x362 = UINT16_MAX;
int32_t t78 = 332844818;
uint32_t t79 = 55634U;
int16_t x369 = -1;
static volatile int64_t x375 = -1LL;
int8_t x376 = INT8_MAX;
int64_t t81 = -1LL;
int16_t x378 = -1;
volatile int32_t t83 = 253;
volatile uint16_t x386 = UINT16_MAX;
volatile int32_t t85 = -72480;
static int8_t x394 = INT8_MIN;
uint8_t x395 = 10U;
uint64_t x396 = UINT64_MAX;
static int32_t t87 = -234;
uint16_t x401 = 56U;
uint8_t x405 = UINT8_MAX;
uint8_t x409 = 48U;
int8_t x414 = INT8_MIN;
int64_t x415 = INT64_MIN;
static int64_t t91 = 2961086805LL;
int64_t x417 = INT64_MAX;
int8_t x418 = INT8_MAX;
volatile int32_t t93 = -12164;
int16_t x427 = 0;
int64_t x432 = -14760856516098341LL;
int8_t x433 = 15;
static int64_t x434 = -7LL;
uint32_t x435 = 2170U;
volatile uint64_t t97 = 21LLU;
int32_t x449 = 663162;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	int16_t x2 = INT16_MIN;
	int16_t x3 = INT16_MAX;
	static int16_t x4 = -1;
	volatile int32_t t0 = 2771645;

	t0 = ((x1<x2)-(x3+x4));

	if (t0 != -32765) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 974798LLU;
	int32_t x7 = -477160897;

	t1 = ((x5<x6)-(x7+x8));

	if (t1 != 477160031) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint64_t x10 = 269197218092088677LLU;
	int32_t x12 = INT32_MAX;
	int32_t t2 = 1328189;

	t2 = ((x9<x10)-(x11+x12));

	if (t2 != -2147480135) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint64_t x15 = 2LLU;
	volatile int64_t x16 = 867LL;
	uint64_t t3 = 418LLU;

	t3 = ((x13<x14)-(x15+x16));

	if (t3 != 18446744073709550748LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MAX;
	int32_t x18 = -1;
	static int8_t x19 = 9;
	uint64_t x20 = 75959524LLU;

	t4 = ((x17<x18)-(x19+x20));

	if (t4 != 18446744073633592083LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MIN;
	static volatile int64_t x23 = 0LL;
	int32_t x24 = 0;
	volatile int64_t t5 = -126885LL;

	t5 = ((x21<x22)-(x23+x24));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -1LL;
	volatile uint32_t x27 = UINT32_MAX;
	int8_t x28 = -3;
	static uint32_t t6 = 0U;

	t6 = ((x25<x26)-(x27+x28));

	if (t6 != 5U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int16_t x30 = -1947;
	int8_t x31 = 6;
	volatile uint64_t x32 = UINT64_MAX;
	uint64_t t7 = 13229851LLU;

	t7 = ((x29<x30)-(x31+x32));

	if (t7 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x35 = INT8_MAX;
	int8_t x36 = INT8_MAX;
	int32_t t8 = 5734556;

	t8 = ((x33<x34)-(x35+x36));

	if (t8 != -254) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = 0U;
	int32_t x39 = INT32_MAX;
	static int16_t x40 = -1;
	volatile int32_t t9 = 32917;

	t9 = ((x37<x38)-(x39+x40));

	if (t9 != -2147483645) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	volatile int8_t x42 = 0;
	static int64_t x43 = -1LL;
	int64_t t10 = -29860675463041375LL;

	t10 = ((x41<x42)-(x43+x44));

	if (t10 != -289LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x49 = 104U;
	uint64_t x50 = UINT64_MAX;
	int8_t x51 = INT8_MIN;
	static uint16_t x52 = 130U;

	t11 = ((x49<x50)-(x51+x52));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -11;
	int32_t x54 = -1;
	int32_t x55 = 36589;
	uint32_t x56 = 1773U;
	uint32_t t12 = 500836U;

	t12 = ((x53<x54)-(x55+x56));

	if (t12 != 4294928935U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x57 = 2818317227405565LLU;
	static uint32_t x58 = UINT32_MAX;
	int32_t x59 = INT32_MIN;
	static int16_t x60 = 50;
	int32_t t13 = 585240945;

	t13 = ((x57<x58)-(x59+x60));

	if (t13 != 2147483598) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = -657;
	uint16_t x62 = 3348U;
	int16_t x64 = INT16_MAX;
	int32_t t14 = -1;

	t14 = ((x61<x62)-(x63+x64));

	if (t14 != -32769) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MIN;
	static volatile int8_t x74 = INT8_MIN;
	uint16_t x75 = 929U;
	static int16_t x76 = 0;
	int32_t t15 = -821;

	t15 = ((x73<x74)-(x75+x76));

	if (t15 != -928) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x77 = 50997482545450LLU;
	static uint8_t x78 = 1U;
	volatile int8_t x79 = 1;
	int32_t x80 = -1;

	t16 = ((x77<x78)-(x79+x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x81 = 171;
	uint64_t x83 = 993444362LLU;
	int8_t x84 = INT8_MIN;
	static uint64_t t17 = 120083498684675LLU;

	t17 = ((x81<x82)-(x83+x84));

	if (t17 != 18446744072716107382LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = 3640670235513828532LLU;
	static volatile uint64_t x86 = 3067LLU;
	int16_t x87 = INT16_MAX;
	static volatile uint32_t t18 = 1U;

	t18 = ((x85<x86)-(x87+x88));

	if (t18 != 4294934530U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = 11751414622951718LL;
	int16_t x90 = INT16_MAX;
	int32_t x91 = INT32_MAX;
	int32_t x92 = -1;

	t19 = ((x89<x90)-(x91+x92));

	if (t19 != -2147483646) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x93 = 14U;
	int16_t x95 = 1355;
	volatile int8_t x96 = INT8_MAX;
	int32_t t20 = 72175110;

	t20 = ((x93<x94)-(x95+x96));

	if (t20 != -1481) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = INT32_MIN;
	volatile int32_t x98 = 1017;
	static uint64_t x99 = UINT64_MAX;
	uint16_t x100 = UINT16_MAX;
	uint64_t t21 = 435078513LLU;

	t21 = ((x97<x98)-(x99+x100));

	if (t21 != 18446744073709486083LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x102 = INT64_MIN;
	int16_t x104 = INT16_MIN;

	t22 = ((x101<x102)-(x103+x104));

	if (t22 != 32657) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x106 = 17749153;
	uint8_t x107 = UINT8_MAX;
	uint64_t x108 = UINT64_MAX;

	t23 = ((x105<x106)-(x107+x108));

	if (t23 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = 24U;
	int32_t x110 = -1;
	uint32_t x111 = 20334472U;
	static int32_t x112 = INT32_MIN;
	uint32_t t24 = 857172U;

	t24 = ((x109<x110)-(x111+x112));

	if (t24 != 2127149176U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x113 = 41854221U;
	int64_t x114 = -356419LL;
	static volatile uint64_t x115 = 42808462058806771LLU;
	volatile int16_t x116 = INT16_MIN;

	t25 = ((x113<x114)-(x115+x116));

	if (t25 != 18403935611650777613LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = 9U;
	static uint64_t x122 = 7421LLU;
	int8_t x123 = INT8_MIN;
	int16_t x124 = -1;
	volatile int32_t t26 = 0;

	t26 = ((x121<x122)-(x123+x124));

	if (t26 != 130) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = -11;
	volatile uint32_t x126 = UINT32_MAX;
	int32_t x127 = 7232252;
	static volatile int32_t t27 = 3;

	t27 = ((x125<x126)-(x127+x128));

	if (t27 != -7232252) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x129 = 521346746LLU;
	int32_t x132 = 224;
	volatile int32_t t28 = -22;

	t28 = ((x129<x130)-(x131+x132));

	if (t28 != -479) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x134 = UINT64_MAX;
	uint32_t x136 = 232U;

	t29 = ((x133<x134)-(x135+x136));

	if (t29 != 4112241LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = 3404;
	uint8_t x138 = 19U;
	int16_t x139 = -1;
	int32_t x140 = INT32_MAX;
	volatile int32_t t30 = 3687622;

	t30 = ((x137<x138)-(x139+x140));

	if (t30 != -2147483646) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x141 = -1LL;
	uint32_t x143 = UINT32_MAX;
	volatile int64_t t31 = 211LL;

	t31 = ((x141<x142)-(x143+x144));

	if (t31 != 9223372032559808514LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x149 = 775U;
	uint32_t x151 = UINT32_MAX;
	static volatile int16_t x152 = INT16_MAX;
	uint32_t t32 = 6155825U;

	t32 = ((x149<x150)-(x151+x152));

	if (t32 != 4294934531U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x157 = UINT16_MAX;
	int8_t x158 = -1;
	uint64_t x159 = 9LLU;
	static uint16_t x160 = UINT16_MAX;
	uint64_t t33 = 26225LLU;

	t33 = ((x157<x158)-(x159+x160));

	if (t33 != 18446744073709486072LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x161 = 126401554U;
	int8_t x162 = INT8_MAX;
	volatile uint32_t x163 = 115071753U;
	volatile int8_t x164 = INT8_MAX;
	uint32_t t34 = 88U;

	t34 = ((x161<x162)-(x163+x164));

	if (t34 != 4179895416U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = -1;
	int32_t x166 = -1;
	int8_t x167 = 0;
	int8_t x168 = -1;
	int32_t t35 = 121907303;

	t35 = ((x165<x166)-(x167+x168));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x173 = -9;
	volatile uint64_t x174 = 18211155345556989LLU;
	volatile int16_t x175 = 3835;
	uint32_t x176 = 2U;

	t36 = ((x173<x174)-(x175+x176));

	if (t36 != 4294963459U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x177 = 56761106091089277LL;
	static int64_t x178 = INT64_MIN;
	volatile int64_t x180 = 473285039757LL;

	t37 = ((x177<x178)-(x179+x180));

	if (t37 != -477580007052LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x181 = 3017LL;
	int8_t x182 = -1;
	uint8_t x183 = 20U;
	static int32_t x184 = 707816;
	volatile int32_t t38 = -5348;

	t38 = ((x181<x182)-(x183+x184));

	if (t38 != -707836) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x185 = INT64_MAX;
	static uint32_t x186 = UINT32_MAX;
	static uint16_t x187 = UINT16_MAX;
	int64_t x188 = INT64_MIN;
	volatile int64_t t39 = -1655027824391814279LL;

	t39 = ((x185<x186)-(x187+x188));

	if (t39 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x189 = 66324560LLU;
	uint32_t x192 = 3062U;
	volatile int64_t t40 = 11LL;

	t40 = ((x189<x190)-(x191+x192));

	if (t40 != 9223372036854772747LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x193 = -1LL;
	volatile uint64_t x195 = 117496575LLU;
	int8_t x196 = -38;
	uint64_t t41 = 611LLU;

	t41 = ((x193<x194)-(x195+x196));

	if (t41 != 18446744073592055080LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x197 = INT64_MAX;
	int64_t x198 = -224691427845LL;
	uint32_t x200 = 23U;
	volatile uint32_t t42 = 1U;

	t42 = ((x197<x198)-(x199+x200));

	if (t42 != 2147483626U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x201 = 11794U;
	volatile uint16_t x202 = 104U;
	int64_t x203 = 113219965485709LL;
	static int32_t x204 = 1;
	volatile int64_t t43 = -194371106673158LL;

	t43 = ((x201<x202)-(x203+x204));

	if (t43 != -113219965485710LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x205 = -1LL;
	static int8_t x206 = INT8_MIN;
	static uint16_t x207 = 88U;
	int32_t x208 = 10704;
	int32_t t44 = 1928;

	t44 = ((x205<x206)-(x207+x208));

	if (t44 != -10792) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x210 = 30;
	int8_t x212 = INT8_MAX;

	t45 = ((x209<x210)-(x211+x212));

	if (t45 != -153) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x213 = INT8_MAX;
	static int8_t x214 = -37;
	volatile int8_t x215 = -1;
	int16_t x216 = INT16_MAX;
	volatile int32_t t46 = -40724;

	t46 = ((x213<x214)-(x215+x216));

	if (t46 != -32766) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x217 = INT32_MIN;
	int8_t x218 = INT8_MIN;
	volatile uint8_t x220 = UINT8_MAX;
	uint64_t t47 = 13964603LLU;

	t47 = ((x217<x218)-(x219+x220));

	if (t47 != 18441872066591575260LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x225 = 6U;
	static volatile uint8_t x226 = 5U;
	uint16_t x227 = UINT16_MAX;
	static volatile int64_t t48 = -22663617065783LL;

	t48 = ((x225<x226)-(x227+x228));

	if (t48 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x233 = 175799446693LLU;
	int16_t x234 = INT16_MIN;
	uint8_t x235 = 3U;
	static int64_t x236 = -101780410709844LL;
	volatile int64_t t49 = 83781684LL;

	t49 = ((x233<x234)-(x235+x236));

	if (t49 != 101780410709842LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x237 = 48;
	int8_t x238 = INT8_MAX;
	int8_t x239 = 0;
	int32_t x240 = -1;
	int32_t t50 = 847324628;

	t50 = ((x237<x238)-(x239+x240));

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x242 = 1063442793304LLU;
	int16_t x243 = 21;
	volatile int32_t t51 = -40;

	t51 = ((x241<x242)-(x243+x244));

	if (t51 != -148) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x245 = UINT32_MAX;
	uint64_t x246 = 3279693141853LLU;
	uint64_t t52 = 132572734246549342LLU;

	t52 = ((x245<x246)-(x247+x248));

	if (t52 != 18446744073654475894LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x249 = 14641U;
	volatile int32_t x251 = 958;
	static uint16_t x252 = UINT16_MAX;
	int32_t t53 = -71;

	t53 = ((x249<x250)-(x251+x252));

	if (t53 != -66493) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x253 = -1;
	volatile int64_t x254 = -1LL;
	int64_t x255 = INT64_MAX;
	volatile int64_t t54 = -55351919625030486LL;

	t54 = ((x253<x254)-(x255+x256));

	if (t54 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x257 = INT64_MIN;
	volatile int64_t x259 = 59609LL;
	static int8_t x260 = 0;
	int64_t t55 = -396903030LL;

	t55 = ((x257<x258)-(x259+x260));

	if (t55 != -59608LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x261 = 8U;
	static uint32_t x263 = 376115U;
	static volatile int64_t x264 = INT64_MIN;
	static int64_t t56 = 23170550261578318LL;

	t56 = ((x261<x262)-(x263+x264));

	if (t56 != 9223372036854399694LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x265 = -1LL;
	int32_t x266 = INT32_MIN;
	int64_t x267 = 230287614LL;
	uint8_t x268 = UINT8_MAX;
	int64_t t57 = 85218704062LL;

	t57 = ((x265<x266)-(x267+x268));

	if (t57 != -230287869LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x269 = 5815U;
	static uint8_t x271 = UINT8_MAX;
	uint64_t x272 = 1382544116878LLU;
	volatile uint64_t t58 = 5128999735586300LLU;

	t58 = ((x269<x270)-(x271+x272));

	if (t58 != 18446742691165434483LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x273 = INT8_MIN;
	volatile int16_t x274 = 1;
	volatile int64_t t59 = -2737888620LL;

	t59 = ((x273<x274)-(x275+x276));

	if (t59 != -103182506LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x277 = 269229266242LLU;
	int64_t x278 = INT64_MIN;
	uint32_t x279 = UINT32_MAX;
	uint16_t x280 = UINT16_MAX;

	t60 = ((x277<x278)-(x279+x280));

	if (t60 != 4294901763U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x281 = 1U;
	int32_t x283 = -1;
	int64_t x284 = -439LL;
	volatile int64_t t61 = -979604LL;

	t61 = ((x281<x282)-(x283+x284));

	if (t61 != 440LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x285 = 479;
	static int64_t x286 = INT64_MIN;
	volatile uint64_t x287 = 7544562LLU;
	int64_t x288 = -1LL;
	uint64_t t62 = 102885352257360869LLU;

	t62 = ((x285<x286)-(x287+x288));

	if (t62 != 18446744073702007055LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x296 = -13797517438183988LL;
	volatile uint64_t t63 = 119941901441LLU;

	t63 = ((x293<x294)-(x295+x296));

	if (t63 != 13797517438183989LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x297 = INT32_MAX;
	uint16_t x298 = 0U;
	volatile int8_t x299 = INT8_MAX;
	volatile uint32_t t64 = 1U;

	t64 = ((x297<x298)-(x299+x300));

	if (t64 != 4294967170U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x301 = 2949;
	static int16_t x302 = 3;
	int16_t x303 = -620;
	static int8_t x304 = 58;
	volatile int32_t t65 = 16361;

	t65 = ((x301<x302)-(x303+x304));

	if (t65 != 562) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x305 = 9U;
	volatile int32_t x306 = INT32_MAX;
	int8_t x308 = 29;
	int32_t t66 = 1070353669;

	t66 = ((x305<x306)-(x307+x308));

	if (t66 != -121) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x309 = -1;
	uint16_t x310 = 7976U;
	int64_t x311 = INT64_MAX;
	int8_t x312 = -4;
	int64_t t67 = 10LL;

	t67 = ((x309<x310)-(x311+x312));

	if (t67 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x313 = 4;
	int16_t x314 = -76;
	int32_t x316 = INT32_MAX;
	int64_t t68 = -5LL;

	t68 = ((x313<x314)-(x315+x316));

	if (t68 != -2147483337LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x318 = UINT8_MAX;
	uint8_t x319 = UINT8_MAX;
	uint16_t x320 = 26U;
	int32_t t69 = 1052;

	t69 = ((x317<x318)-(x319+x320));

	if (t69 != -280) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x325 = INT32_MIN;
	uint16_t x326 = 0U;
	static int8_t x327 = 1;
	int16_t x328 = -1;
	volatile int32_t t70 = -25340;

	t70 = ((x325<x326)-(x327+x328));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x329 = INT8_MIN;
	uint32_t x332 = 10018087U;

	t71 = ((x329<x330)-(x331+x332));

	if (t71 != 4284961531U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x333 = INT8_MIN;
	int32_t x336 = -3557;
	volatile uint64_t t72 = 182559948573945LLU;

	t72 = ((x333<x334)-(x335+x336));

	if (t72 != 3559LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x337 = INT16_MIN;
	int16_t x338 = -1;
	volatile int64_t x339 = -2855881732LL;
	volatile int64_t t73 = -19489998851LL;

	t73 = ((x337<x338)-(x339+x340));

	if (t73 != 2855881478LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x342 = INT8_MIN;
	volatile int16_t x343 = -1;

	t74 = ((x341<x342)-(x343+x344));

	if (t74 != -163) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x345 = 344U;
	int16_t x346 = -1;
	uint32_t x347 = UINT32_MAX;
	int32_t x348 = INT32_MAX;
	volatile uint32_t t75 = 8323U;

	t75 = ((x345<x346)-(x347+x348));

	if (t75 != 2147483651U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x354 = UINT64_MAX;
	static volatile int32_t t76 = -49210036;

	t76 = ((x353<x354)-(x355+x356));

	if (t76 != -9771) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x357 = -28;
	int32_t x359 = -431813;
	volatile int64_t x360 = -1LL;
	volatile int64_t t77 = 113706954LL;

	t77 = ((x357<x358)-(x359+x360));

	if (t77 != 431814LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x361 = -1LL;
	uint8_t x363 = 6U;
	int16_t x364 = INT16_MAX;

	t78 = ((x361<x362)-(x363+x364));

	if (t78 != -32772) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x365 = 5U;
	volatile int64_t x366 = -1LL;
	uint32_t x367 = 14U;
	uint16_t x368 = 7250U;

	t79 = ((x365<x366)-(x367+x368));

	if (t79 != 4294960032U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x370 = INT16_MIN;
	uint32_t x371 = UINT32_MAX;
	int16_t x372 = INT16_MIN;
	uint32_t t80 = 1855788U;

	t80 = ((x369<x370)-(x371+x372));

	if (t80 != 32769U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x373 = INT64_MIN;
	int16_t x374 = -1;

	t81 = ((x373<x374)-(x375+x376));

	if (t81 != -125LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x377 = -35;
	int64_t x379 = INT64_MAX;
	int32_t x380 = INT32_MIN;
	volatile int64_t t82 = -209948406313901LL;

	t82 = ((x377<x378)-(x379+x380));

	if (t82 != -9223372034707292158LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x381 = -853;
	uint16_t x382 = 19U;
	int16_t x383 = 0;
	int8_t x384 = -24;

	t83 = ((x381<x382)-(x383+x384));

	if (t83 != 25) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x385 = INT8_MIN;
	static int16_t x387 = 65;
	int64_t x388 = -70453717505794733LL;
	volatile int64_t t84 = -512378055720LL;

	t84 = ((x385<x386)-(x387+x388));

	if (t84 != 70453717505794669LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x389 = INT16_MAX;
	volatile uint16_t x390 = 15U;
	uint16_t x391 = UINT16_MAX;
	int16_t x392 = 76;

	t85 = ((x389<x390)-(x391+x392));

	if (t85 != -65611) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x393 = -1;
	volatile uint64_t t86 = 1853024190211LLU;

	t86 = ((x393<x394)-(x395+x396));

	if (t86 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x397 = UINT32_MAX;
	uint32_t x398 = UINT32_MAX;
	uint8_t x399 = 7U;
	volatile int32_t x400 = 34654580;

	t87 = ((x397<x398)-(x399+x400));

	if (t87 != -34654587) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x402 = 32;
	uint32_t x403 = 288U;
	int16_t x404 = -67;
	static volatile uint32_t t88 = 18U;

	t88 = ((x401<x402)-(x403+x404));

	if (t88 != 4294967075U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x406 = INT64_MIN;
	uint64_t x407 = UINT64_MAX;
	int8_t x408 = 0;
	uint64_t t89 = 94LLU;

	t89 = ((x405<x406)-(x407+x408));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x410 = 0;
	uint32_t x411 = 228171078U;
	static volatile int32_t x412 = 44484;
	uint32_t t90 = 1U;

	t90 = ((x409<x410)-(x411+x412));

	if (t90 != 4066751734U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x413 = UINT64_MAX;
	static uint8_t x416 = 25U;

	t91 = ((x413<x414)-(x415+x416));

	if (t91 != 9223372036854775783LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x419 = 1012453661U;
	volatile int16_t x420 = -1;
	static volatile uint32_t t92 = 26016U;

	t92 = ((x417<x418)-(x419+x420));

	if (t92 != 3282513636U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x421 = -1;
	int64_t x422 = INT64_MIN;
	int16_t x423 = 182;
	static int16_t x424 = 931;

	t93 = ((x421<x422)-(x423+x424));

	if (t93 != -1113) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x425 = INT16_MIN;
	uint8_t x426 = 65U;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t94 = 2589;

	t94 = ((x425<x426)-(x427+x428));

	if (t94 != -254) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x429 = INT32_MAX;
	int16_t x430 = -10;
	int32_t x431 = INT32_MAX;
	int64_t t95 = 39683LL;

	t95 = ((x429<x430)-(x431+x432));

	if (t95 != 14760854368614694LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x436 = 453107U;
	volatile uint32_t t96 = 944787026U;

	t96 = ((x433<x434)-(x435+x436));

	if (t96 != 4294512019U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x437 = INT64_MIN;
	static uint8_t x438 = 3U;
	int64_t x439 = -1LL;
	uint64_t x440 = UINT64_MAX;

	t97 = ((x437<x438)-(x439+x440));

	if (t97 != 3LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x441 = 23U;
	int32_t x442 = -1;
	static uint32_t x443 = 208808U;
	volatile int64_t x444 = -5567351LL;
	volatile int64_t t98 = -7623LL;

	t98 = ((x441<x442)-(x443+x444));

	if (t98 != 5358543LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x450 = 804U;
	volatile int16_t x451 = INT16_MIN;
	static int32_t x452 = 2894681;
	static int32_t t99 = 869653;

	t99 = ((x449<x450)-(x451+x452));

	if (t99 != -2861913) { NG(); } else { ; }
	
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

