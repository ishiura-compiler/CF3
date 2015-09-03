#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = 14009;
volatile int32_t t1 = -5;
static int16_t x10 = INT16_MAX;
uint16_t x11 = UINT16_MAX;
int32_t x15 = INT32_MAX;
int16_t x18 = INT16_MIN;
static int16_t x35 = INT16_MIN;
static uint64_t t9 = 60085064464206LLU;
int8_t x54 = INT8_MAX;
uint64_t x66 = UINT64_MAX;
volatile uint64_t t14 = 183571633419797214LLU;
int64_t x70 = -1LL;
uint32_t x76 = UINT32_MAX;
int32_t x79 = INT32_MAX;
int64_t t17 = 14LL;
static int64_t x81 = -1LL;
int8_t x88 = 0;
uint8_t x90 = UINT8_MAX;
int32_t x92 = -1;
uint64_t x98 = 1154LLU;
int32_t x106 = INT32_MIN;
static uint64_t x110 = 1357411040LLU;
int32_t x111 = INT32_MAX;
int32_t x113 = 5551875;
int16_t x116 = -1;
static int16_t x122 = -446;
int8_t x124 = INT8_MAX;
volatile int32_t t27 = -3254;
static volatile int32_t x139 = INT32_MAX;
uint64_t x142 = 1LLU;
uint64_t t31 = 66776LLU;
int32_t x147 = -1;
int8_t x155 = -2;
int64_t x161 = INT64_MIN;
uint64_t x163 = 1199323LLU;
int16_t x164 = INT16_MIN;
int16_t x172 = INT16_MIN;
uint8_t x173 = 4U;
uint64_t x174 = 60724599543727225LLU;
uint32_t x176 = 0U;
volatile uint64_t t39 = 196776831LLU;
uint32_t x181 = 4957440U;
uint32_t t41 = 3355158U;
static volatile uint32_t t42 = 29U;
int8_t x189 = -13;
int64_t t45 = 192LL;
int16_t x207 = INT16_MAX;
int16_t x210 = 14;
volatile int64_t x215 = INT64_MAX;
uint32_t x216 = 78749793U;
int16_t x217 = INT16_MIN;
int64_t t49 = -16439508419415LL;
int8_t x227 = INT8_MAX;
uint32_t x231 = 148575862U;
int32_t x238 = -14557222;
volatile int32_t x240 = -925;
uint16_t x241 = 15U;
int8_t x243 = INT8_MIN;
int32_t t57 = -127006;
uint8_t x258 = 64U;
uint32_t t58 = 29414U;
uint8_t x264 = 1U;
int32_t t59 = -493;
static volatile int64_t t61 = 111298136497823265LL;
static volatile int64_t x285 = -1LL;
volatile int8_t x286 = INT8_MIN;
uint64_t x288 = 2884816LLU;
int64_t t64 = -246936789678515LL;
uint64_t x291 = UINT64_MAX;
volatile uint64_t t67 = 7758LLU;
volatile int8_t x308 = -1;
static int64_t x322 = 3010LL;
int16_t x331 = INT16_MIN;
volatile int32_t t77 = 850077;
uint32_t x349 = 40U;
volatile uint32_t t78 = 1246U;
uint8_t x353 = 11U;
int8_t x358 = INT8_MAX;
static int8_t x359 = 0;
volatile int64_t x363 = -802410LL;
uint64_t x364 = 247LLU;
int16_t x366 = -39;
int8_t x367 = INT8_MIN;
volatile int64_t t82 = -50406LL;
static int32_t x370 = -970624;
int32_t t83 = 15708;
static int64_t x380 = INT64_MIN;
int64_t x401 = 34475LL;
volatile uint64_t t90 = 1645497376447807LLU;
int32_t x420 = INT32_MAX;
uint8_t x425 = 6U;
uint16_t x431 = 5U;
static int32_t x434 = -1;
volatile int64_t x436 = -1LL;
volatile int32_t t97 = -13771;
volatile int8_t x439 = -3;
static int64_t x447 = -2068501429253359LL;


void f0(void) {
	static int16_t x1 = 354;
	uint32_t x2 = UINT32_MAX;
	static volatile int32_t x3 = 0;
	int8_t x4 = -8;
	uint32_t t0 = 637335U;

	t0 = (x1-(x2-(x3<=x4)));

	if (t0 != 355U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	static uint16_t x6 = UINT16_MAX;
	int32_t x8 = INT32_MIN;

	t1 = (x5-(x6-(x7<=x8)));

	if (t1 != -65536) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	static int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -329403;

	t2 = (x9-(x10-(x11<=x12)));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = UINT32_MAX;
	uint32_t x14 = 113U;
	int64_t x16 = -1LL;
	static volatile uint32_t t3 = 3873473U;

	t3 = (x13-(x14-(x15<=x16)));

	if (t3 != 4294967182U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int64_t x19 = -90835LL;
	uint16_t x20 = 690U;
	volatile int64_t t4 = -599628LL;

	t4 = (x17-(x18-(x19<=x20)));

	if (t4 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x21 = UINT16_MAX;
	int16_t x22 = -1;
	int32_t x23 = INT32_MAX;
	int64_t x24 = INT64_MAX;
	int32_t t5 = 202076327;

	t5 = (x21-(x22-(x23<=x24)));

	if (t5 != 65537) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 0U;
	static uint16_t x26 = 0U;
	int64_t x27 = INT64_MIN;
	uint32_t x28 = UINT32_MAX;
	int32_t t6 = 672;

	t6 = (x25-(x26-(x27<=x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int8_t x30 = INT8_MIN;
	static uint16_t x31 = 20930U;
	volatile uint8_t x32 = 9U;
	volatile int32_t t7 = 10255;

	t7 = (x29-(x30-(x31<=x32)));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 24045U;
	volatile int8_t x34 = -1;
	int32_t x36 = -260;
	volatile int32_t t8 = 61;

	t8 = (x33-(x34-(x35<=x36)));

	if (t8 != 24047) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	static uint64_t x42 = 15LLU;
	int16_t x43 = -2154;
	uint32_t x44 = UINT32_MAX;

	t9 = (x41-(x42-(x43<=x44)));

	if (t9 != 18446744073709518834LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	uint32_t x46 = 715U;
	static int64_t x47 = INT64_MAX;
	static volatile int32_t x48 = -1;
	volatile uint32_t t10 = 490158U;

	t10 = (x45-(x46-(x47<=x48)));

	if (t10 != 2147482933U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1;
	volatile uint16_t x50 = 8U;
	volatile int16_t x51 = 1;
	int8_t x52 = -1;
	volatile int32_t t11 = 44504;

	t11 = (x49-(x50-(x51<=x52)));

	if (t11 != -9) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MAX;
	int32_t x55 = -1;
	static int16_t x56 = 4;
	volatile int32_t t12 = 2053;

	t12 = (x53-(x54-(x55<=x56)));

	if (t12 != 32641) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -1;
	uint64_t x62 = 164622744097LLU;
	static int8_t x63 = 0;
	uint16_t x64 = 2U;
	volatile uint64_t t13 = 1LLU;

	t13 = (x61-(x62-(x63<=x64)));

	if (t13 != 18446743909086807519LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = 6;
	int16_t x67 = INT16_MAX;
	uint64_t x68 = 868185LLU;

	t14 = (x65-(x66-(x67<=x68)));

	if (t14 != 8LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 30U;
	int8_t x71 = INT8_MIN;
	int32_t x72 = INT32_MIN;
	volatile int64_t t15 = 1069763632477464LL;

	t15 = (x69-(x70-(x71<=x72)));

	if (t15 != 31LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x73 = INT64_MIN;
	uint64_t x74 = 36LLU;
	static int16_t x75 = INT16_MIN;
	volatile uint64_t t16 = 1508868LLU;

	t16 = (x73-(x74-(x75<=x76)));

	if (t16 != 9223372036854775773LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x77 = INT8_MIN;
	int64_t x78 = -3266285281431454249LL;
	static int32_t x80 = -1;

	t17 = (x77-(x78-(x79<=x80)));

	if (t17 != 3266285281431454121LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x82 = INT16_MIN;
	static volatile int64_t x83 = 38295381977367243LL;
	int64_t x84 = INT64_MAX;
	volatile int64_t t18 = 59198884741863776LL;

	t18 = (x81-(x82-(x83<=x84)));

	if (t18 != 32768LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -1;
	uint64_t x86 = 13430523LLU;
	uint16_t x87 = UINT16_MAX;
	volatile uint64_t t19 = 7LLU;

	t19 = (x85-(x86-(x87<=x88)));

	if (t19 != 18446744073696121092LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x89 = INT8_MIN;
	int8_t x91 = 1;
	static int32_t t20 = 490;

	t20 = (x89-(x90-(x91<=x92)));

	if (t20 != -383) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x93 = 117880444702998LLU;
	volatile int64_t x94 = INT64_MAX;
	int8_t x95 = INT8_MAX;
	uint32_t x96 = 73016222U;
	volatile uint64_t t21 = 3259085595337LLU;

	t21 = (x93-(x94-(x95<=x96)));

	if (t21 != 9223489917299478808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MAX;
	uint32_t x99 = 57U;
	uint8_t x100 = UINT8_MAX;
	uint64_t t22 = 55LLU;

	t22 = (x97-(x98-(x99<=x100)));

	if (t22 != 31614LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MAX;
	int64_t x102 = INT64_MAX;
	volatile uint8_t x103 = 0U;
	int64_t x104 = INT64_MAX;
	volatile int64_t t23 = -324995368063363LL;

	t23 = (x101-(x102-(x103<=x104)));

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	uint32_t x107 = UINT32_MAX;
	int16_t x108 = INT16_MAX;
	volatile int32_t t24 = -229898725;

	t24 = (x105-(x106-(x107<=x108)));

	if (t24 != 2147450880) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = 276381316085148909LLU;
	uint16_t x112 = UINT16_MAX;
	volatile uint64_t t25 = 10LLU;

	t25 = (x109-(x110-(x111<=x112)));

	if (t25 != 276381314727737869LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x114 = 73;
	volatile uint32_t x115 = UINT32_MAX;
	int32_t t26 = -637869715;

	t26 = (x113-(x114-(x115<=x116)));

	if (t26 != 5551803) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = 3U;
	int16_t x123 = -1;

	t27 = (x121-(x122-(x123<=x124)));

	if (t27 != 450) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x125 = 3U;
	int8_t x126 = -1;
	volatile int64_t x127 = -898637280393342522LL;
	int8_t x128 = INT8_MAX;
	static int32_t t28 = 19113461;

	t28 = (x125-(x126-(x127<=x128)));

	if (t28 != 5) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x133 = 13U;
	int32_t x134 = -54;
	int8_t x135 = INT8_MIN;
	static int16_t x136 = INT16_MIN;
	static volatile int32_t t29 = -2576075;

	t29 = (x133-(x134-(x135<=x136)));

	if (t29 != 67) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x137 = -1LL;
	int32_t x138 = INT32_MAX;
	int64_t x140 = -15810LL;
	static int64_t t30 = -4LL;

	t30 = (x137-(x138-(x139<=x140)));

	if (t30 != -2147483648LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x141 = UINT8_MAX;
	int8_t x143 = INT8_MIN;
	volatile int64_t x144 = INT64_MIN;

	t31 = (x141-(x142-(x143<=x144)));

	if (t31 != 254LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x145 = 9422;
	static uint64_t x146 = UINT64_MAX;
	static int16_t x148 = INT16_MAX;
	uint64_t t32 = 2124211768013LLU;

	t32 = (x145-(x146-(x147<=x148)));

	if (t32 != 9424LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x149 = 104085U;
	volatile int64_t x150 = 250LL;
	int8_t x151 = INT8_MIN;
	volatile uint16_t x152 = 9U;
	volatile int64_t t33 = -3086435693980497179LL;

	t33 = (x149-(x150-(x151<=x152)));

	if (t33 != 103836LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = 26250439824828713LL;
	volatile int16_t x154 = INT16_MIN;
	int16_t x156 = INT16_MIN;
	static int64_t t34 = 2960388579081517LL;

	t34 = (x153-(x154-(x155<=x156)));

	if (t34 != 26250439824861481LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = 15;
	uint8_t x158 = UINT8_MAX;
	int8_t x159 = -1;
	uint32_t x160 = 56U;
	volatile int32_t t35 = 672;

	t35 = (x157-(x158-(x159<=x160)));

	if (t35 != -240) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x162 = -1;
	volatile int64_t t36 = 1516187LL;

	t36 = (x161-(x162-(x163<=x164)));

	if (t36 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x165 = 28LLU;
	int64_t x166 = -317275895LL;
	uint16_t x167 = 952U;
	volatile int16_t x168 = 2;
	volatile uint64_t t37 = 58052377941110LLU;

	t37 = (x165-(x166-(x167<=x168)));

	if (t37 != 317275923LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = UINT16_MAX;
	uint32_t x170 = 11U;
	static int64_t x171 = -18558577597853LL;
	volatile uint32_t t38 = 3474640U;

	t38 = (x169-(x170-(x171<=x172)));

	if (t38 != 65525U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x175 = 29U;

	t39 = (x173-(x174-(x175<=x176)));

	if (t39 != 18386019474165824395LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = INT64_MAX;
	int32_t x178 = INT32_MAX;
	static int8_t x179 = -1;
	int16_t x180 = -812;
	static volatile int64_t t40 = 1490946622997LL;

	t40 = (x177-(x178-(x179<=x180)));

	if (t40 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x182 = 6;
	volatile uint32_t x183 = 1987U;
	static int64_t x184 = INT64_MAX;

	t41 = (x181-(x182-(x183<=x184)));

	if (t41 != 4957435U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x185 = UINT32_MAX;
	int32_t x186 = -1;
	volatile int32_t x187 = INT32_MIN;
	static uint8_t x188 = UINT8_MAX;

	t42 = (x185-(x186-(x187<=x188)));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x190 = UINT32_MAX;
	volatile int64_t x191 = INT64_MAX;
	int8_t x192 = INT8_MAX;
	volatile uint32_t t43 = 19U;

	t43 = (x189-(x190-(x191<=x192)));

	if (t43 != 4294967284U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x193 = -2;
	int16_t x194 = -1;
	volatile int16_t x195 = INT16_MAX;
	uint64_t x196 = UINT64_MAX;
	int32_t t44 = 6560;

	t44 = (x193-(x194-(x195<=x196)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x201 = INT64_MAX;
	uint8_t x202 = 34U;
	volatile uint8_t x203 = UINT8_MAX;
	int16_t x204 = INT16_MAX;

	t45 = (x201-(x202-(x203<=x204)));

	if (t45 != 9223372036854775774LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x205 = 58U;
	int16_t x206 = INT16_MAX;
	int16_t x208 = INT16_MIN;
	static int32_t t46 = -53;

	t46 = (x205-(x206-(x207<=x208)));

	if (t46 != -32709) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x209 = 57;
	int64_t x211 = -20931193LL;
	uint16_t x212 = UINT16_MAX;
	int32_t t47 = -3;

	t47 = (x209-(x210-(x211<=x212)));

	if (t47 != 44) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x213 = -4;
	volatile uint64_t x214 = UINT64_MAX;
	uint64_t t48 = 910752411331738LLU;

	t48 = (x213-(x214-(x215<=x216)));

	if (t48 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x218 = 538125234LL;
	int64_t x219 = INT64_MIN;
	volatile int8_t x220 = INT8_MIN;

	t49 = (x217-(x218-(x219<=x220)));

	if (t49 != -538158001LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x221 = 87776U;
	int8_t x222 = INT8_MIN;
	static int64_t x223 = INT64_MIN;
	volatile uint8_t x224 = UINT8_MAX;
	uint32_t t50 = 1104419843U;

	t50 = (x221-(x222-(x223<=x224)));

	if (t50 != 87905U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x225 = 3LLU;
	volatile int8_t x226 = -1;
	static int64_t x228 = 11757164LL;
	uint64_t t51 = 1LLU;

	t51 = (x225-(x226-(x227<=x228)));

	if (t51 != 5LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x229 = 360114743263901LLU;
	static int32_t x230 = -1;
	uint32_t x232 = 692U;
	static uint64_t t52 = 157956LLU;

	t52 = (x229-(x230-(x231<=x232)));

	if (t52 != 360114743263902LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x237 = INT8_MAX;
	int8_t x239 = INT8_MIN;
	static volatile int32_t t53 = -37052948;

	t53 = (x237-(x238-(x239<=x240)));

	if (t53 != 14557349) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x242 = UINT8_MAX;
	uint8_t x244 = 1U;
	static int32_t t54 = 2;

	t54 = (x241-(x242-(x243<=x244)));

	if (t54 != -239) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x245 = 160922239604525100LL;
	int16_t x246 = INT16_MIN;
	volatile int64_t x247 = INT64_MIN;
	int64_t x248 = 4718LL;
	volatile int64_t t55 = -5726764602616LL;

	t55 = (x245-(x246-(x247<=x248)));

	if (t55 != 160922239604557869LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x249 = 205212U;
	static int64_t x250 = INT64_MAX;
	volatile uint8_t x251 = 0U;
	int16_t x252 = INT16_MIN;
	volatile int64_t t56 = -2961876LL;

	t56 = (x249-(x250-(x251<=x252)));

	if (t56 != -9223372036854570595LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x253 = 51U;
	int8_t x254 = INT8_MIN;
	int32_t x255 = 895916;
	static int32_t x256 = INT32_MAX;

	t57 = (x253-(x254-(x255<=x256)));

	if (t57 != 180) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x257 = UINT32_MAX;
	int16_t x259 = -88;
	int64_t x260 = INT64_MIN;

	t58 = (x257-(x258-(x259<=x260)));

	if (t58 != 4294967231U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x261 = INT32_MIN;
	static int16_t x262 = INT16_MIN;
	int64_t x263 = -1LL;

	t59 = (x261-(x262-(x263<=x264)));

	if (t59 != -2147450879) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x265 = -1;
	uint32_t x266 = 513U;
	int32_t x267 = -1;
	static int8_t x268 = -1;
	static uint32_t t60 = 2150U;

	t60 = (x265-(x266-(x267<=x268)));

	if (t60 != 4294966783U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x269 = 45668774520LL;
	uint8_t x270 = 1U;
	int64_t x271 = 347438156LL;
	volatile int16_t x272 = -1;

	t61 = (x269-(x270-(x271<=x272)));

	if (t61 != 45668774519LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = INT16_MAX;
	static int64_t x278 = -1LL;
	int8_t x279 = INT8_MAX;
	static int64_t x280 = INT64_MAX;
	volatile int64_t t62 = 2031047LL;

	t62 = (x277-(x278-(x279<=x280)));

	if (t62 != 32769LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = INT32_MAX;
	uint8_t x282 = 93U;
	static int32_t x283 = -1;
	int64_t x284 = INT64_MIN;
	volatile int32_t t63 = 62;

	t63 = (x281-(x282-(x283<=x284)));

	if (t63 != 2147483554) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x287 = INT16_MAX;

	t64 = (x285-(x286-(x287<=x288)));

	if (t64 != 128LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = 2;
	static int16_t x290 = 17;
	static volatile int16_t x292 = INT16_MIN;
	int32_t t65 = 9;

	t65 = (x289-(x290-(x291<=x292)));

	if (t65 != -15) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x293 = 500U;
	int8_t x294 = -1;
	int32_t x295 = INT32_MIN;
	int16_t x296 = INT16_MAX;
	volatile int32_t t66 = -128600;

	t66 = (x293-(x294-(x295<=x296)));

	if (t66 != 502) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x297 = UINT8_MAX;
	static uint64_t x298 = UINT64_MAX;
	volatile int64_t x299 = -6624825LL;
	int32_t x300 = -1;

	t67 = (x297-(x298-(x299<=x300)));

	if (t67 != 257LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x301 = UINT16_MAX;
	int8_t x302 = INT8_MIN;
	volatile int32_t x303 = INT32_MAX;
	int32_t x304 = 2;
	int32_t t68 = -928226;

	t68 = (x301-(x302-(x303<=x304)));

	if (t68 != 65663) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x305 = UINT32_MAX;
	int16_t x306 = -7;
	volatile int8_t x307 = INT8_MIN;
	volatile uint32_t t69 = 10993U;

	t69 = (x305-(x306-(x307<=x308)));

	if (t69 != 7U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x309 = -1;
	volatile int32_t x310 = INT32_MAX;
	int32_t x311 = -1;
	static int16_t x312 = -463;
	static int32_t t70 = INT32_MIN;

	t70 = (x309-(x310-(x311<=x312)));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x313 = -1LL;
	uint64_t x314 = 3LLU;
	volatile uint16_t x315 = 625U;
	int32_t x316 = 42576150;
	uint64_t t71 = 13510355613LLU;

	t71 = (x313-(x314-(x315<=x316)));

	if (t71 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x317 = -1101;
	uint8_t x318 = UINT8_MAX;
	uint16_t x319 = 31U;
	volatile uint32_t x320 = 5718862U;
	static volatile int32_t t72 = 476234170;

	t72 = (x317-(x318-(x319<=x320)));

	if (t72 != -1355) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x321 = 14U;
	volatile int16_t x323 = 1;
	volatile uint8_t x324 = 60U;
	int64_t t73 = -3LL;

	t73 = (x321-(x322-(x323<=x324)));

	if (t73 != -2995LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x325 = -104;
	volatile uint32_t x326 = 162719266U;
	static uint16_t x327 = 4204U;
	volatile int8_t x328 = INT8_MAX;
	volatile uint32_t t74 = 60526U;

	t74 = (x325-(x326-(x327<=x328)));

	if (t74 != 4132247926U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = -1LL;
	uint8_t x330 = 3U;
	int32_t x332 = 789981;
	volatile int64_t t75 = 103LL;

	t75 = (x329-(x330-(x331<=x332)));

	if (t75 != -3LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x337 = UINT32_MAX;
	uint16_t x338 = 12567U;
	volatile int16_t x339 = INT16_MAX;
	uint32_t x340 = 83282316U;
	volatile uint32_t t76 = 14318523U;

	t76 = (x337-(x338-(x339<=x340)));

	if (t76 != 4294954729U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x341 = 894U;
	int16_t x342 = INT16_MIN;
	int32_t x343 = INT32_MIN;
	static uint32_t x344 = 349585534U;

	t77 = (x341-(x342-(x343<=x344)));

	if (t77 != 33662) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x350 = 3;
	int32_t x351 = INT32_MIN;
	static int64_t x352 = -473LL;

	t78 = (x349-(x350-(x351<=x352)));

	if (t78 != 38U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x354 = 428;
	volatile int64_t x355 = -137LL;
	uint64_t x356 = 3684LLU;
	volatile int32_t t79 = -14;

	t79 = (x353-(x354-(x355<=x356)));

	if (t79 != -417) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x357 = INT64_MAX;
	static volatile int8_t x360 = INT8_MIN;
	int64_t t80 = 12LL;

	t80 = (x357-(x358-(x359<=x360)));

	if (t80 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x361 = UINT8_MAX;
	uint64_t x362 = 3915376046723134LLU;
	volatile uint64_t t81 = 479649LLU;

	t81 = (x361-(x362-(x363<=x364)));

	if (t81 != 18442828697662828737LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x365 = INT64_MIN;
	volatile int32_t x368 = INT32_MIN;

	t82 = (x365-(x366-(x367<=x368)));

	if (t82 != -9223372036854775769LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x369 = 2;
	uint64_t x371 = UINT64_MAX;
	uint8_t x372 = 2U;

	t83 = (x369-(x370-(x371<=x372)));

	if (t83 != 970626) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x373 = INT32_MIN;
	int64_t x374 = 13962424653LL;
	static uint8_t x375 = UINT8_MAX;
	uint16_t x376 = UINT16_MAX;
	volatile int64_t t84 = 23697LL;

	t84 = (x373-(x374-(x375<=x376)));

	if (t84 != -16109908300LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x377 = 51691761484221080LLU;
	uint8_t x378 = UINT8_MAX;
	int64_t x379 = INT64_MIN;
	volatile uint64_t t85 = 1LLU;

	t85 = (x377-(x378-(x379<=x380)));

	if (t85 != 51691761484220826LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x381 = -377;
	volatile int64_t x382 = INT64_MIN;
	volatile int16_t x383 = -2;
	int8_t x384 = INT8_MIN;
	int64_t t86 = 1657749169LL;

	t86 = (x381-(x382-(x383<=x384)));

	if (t86 != 9223372036854775431LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x385 = UINT64_MAX;
	volatile int32_t x386 = -15289;
	uint16_t x387 = 2199U;
	uint16_t x388 = 55U;
	uint64_t t87 = 176779LLU;

	t87 = (x385-(x386-(x387<=x388)));

	if (t87 != 15288LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x389 = 9086U;
	uint64_t x390 = UINT64_MAX;
	int16_t x391 = INT16_MIN;
	static uint32_t x392 = 111133U;
	uint64_t t88 = 42102833LLU;

	t88 = (x389-(x390-(x391<=x392)));

	if (t88 != 9087LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x397 = 23LLU;
	volatile uint64_t x398 = 2695883701742871812LLU;
	static int8_t x399 = -1;
	int16_t x400 = INT16_MIN;
	volatile uint64_t t89 = 268LLU;

	t89 = (x397-(x398-(x399<=x400)));

	if (t89 != 15750860371966679827LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x402 = 425805596359635418LLU;
	volatile int8_t x403 = INT8_MAX;
	static int32_t x404 = 409766817;

	t90 = (x401-(x402-(x403<=x404)));

	if (t90 != 18020938477349950674LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x405 = UINT64_MAX;
	int16_t x406 = 1;
	volatile uint16_t x407 = UINT16_MAX;
	int64_t x408 = INT64_MIN;
	uint64_t t91 = 527421112865476LLU;

	t91 = (x405-(x406-(x407<=x408)));

	if (t91 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x413 = INT32_MAX;
	uint8_t x414 = 4U;
	uint16_t x415 = 0U;
	int32_t x416 = INT32_MIN;
	int32_t t92 = 1;

	t92 = (x413-(x414-(x415<=x416)));

	if (t92 != 2147483643) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x417 = -1;
	int64_t x418 = -1063249642LL;
	int16_t x419 = -7;
	volatile int64_t t93 = 17146LL;

	t93 = (x417-(x418-(x419<=x420)));

	if (t93 != 1063249642LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x421 = UINT8_MAX;
	static volatile int8_t x422 = INT8_MAX;
	static uint64_t x423 = 81501204389804680LLU;
	int16_t x424 = INT16_MAX;
	static volatile int32_t t94 = -4400;

	t94 = (x421-(x422-(x423<=x424)));

	if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x426 = 10U;
	volatile int8_t x427 = INT8_MIN;
	static uint8_t x428 = 13U;
	int32_t t95 = 861427818;

	t95 = (x425-(x426-(x427<=x428)));

	if (t95 != -3) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x429 = INT64_MAX;
	static uint32_t x430 = 2896269U;
	static int64_t x432 = INT64_MIN;
	int64_t t96 = -1246858414786666LL;

	t96 = (x429-(x430-(x431<=x432)));

	if (t96 != 9223372036851879538LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x433 = INT16_MIN;
	static int16_t x435 = -6541;

	t97 = (x433-(x434-(x435<=x436)));

	if (t97 != -32766) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x437 = INT64_MAX;
	uint64_t x438 = 2806167LLU;
	static int32_t x440 = -9887026;
	volatile uint64_t t98 = 116676635557LLU;

	t98 = (x437-(x438-(x439<=x440)));

	if (t98 != 9223372036851969640LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x445 = 8146U;
	int32_t x446 = -1;
	int8_t x448 = 0;
	static uint32_t t99 = 111U;

	t99 = (x445-(x446-(x447<=x448)));

	if (t99 != 8148U) { NG(); } else { ; }
	
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

