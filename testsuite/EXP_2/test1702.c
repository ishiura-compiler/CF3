#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x2 = UINT32_MAX;
int8_t x7 = -1;
uint64_t t3 = 1566745LLU;
int32_t x19 = 3001193;
int16_t x22 = INT16_MIN;
volatile int8_t x30 = -1;
static uint16_t x34 = 103U;
int8_t x38 = -1;
static int64_t x41 = INT64_MAX;
static uint32_t x50 = 155111U;
static int16_t x51 = -1;
int8_t x53 = 1;
int16_t x56 = INT16_MIN;
uint32_t x64 = UINT32_MAX;
uint16_t x68 = 128U;
int64_t x71 = 57344759LL;
static int32_t x73 = INT32_MIN;
int64_t x74 = INT64_MIN;
static int64_t x75 = INT64_MAX;
int64_t t18 = -1013433457476614476LL;
int16_t x77 = -1;
volatile int64_t t19 = -5414702LL;
static int32_t x83 = -29334259;
static int64_t t23 = 1620LL;
int16_t x108 = 13;
int64_t x112 = INT64_MAX;
int16_t x113 = INT16_MIN;
uint16_t x115 = UINT16_MAX;
static uint64_t x123 = UINT64_MAX;
int16_t x126 = INT16_MIN;
uint8_t x127 = UINT8_MAX;
int64_t t31 = -181874412016658LL;
int8_t x136 = INT8_MIN;
int64_t t33 = -237LL;
uint16_t x145 = UINT16_MAX;
int8_t x150 = 1;
int16_t x156 = -2052;
static uint32_t x166 = 1233998678U;
int64_t t42 = 38806572161513LL;
int32_t t43 = 2333759;
static int32_t x179 = -15128;
volatile uint64_t t44 = 673LLU;
volatile int8_t x184 = -1;
static int32_t x186 = INT32_MIN;
static int32_t x189 = 92;
uint8_t x190 = 62U;
int8_t x192 = -1;
int64_t t48 = -3283808775310945685LL;
static int32_t x203 = INT32_MIN;
uint64_t x213 = 0LLU;
uint64_t t51 = UINT64_MAX;
int64_t x223 = INT64_MAX;
int32_t x224 = INT32_MAX;
int32_t x226 = -4;
volatile uint32_t x235 = UINT32_MAX;
static int16_t x236 = INT16_MIN;
static volatile uint32_t t56 = 38712049U;
volatile int16_t x238 = INT16_MAX;
int64_t x239 = 422638LL;
static uint16_t x245 = 0U;
int8_t x246 = -1;
uint16_t x250 = 13705U;
int64_t x258 = -1LL;
uint8_t x261 = UINT8_MAX;
volatile int32_t x262 = 0;
int32_t x277 = INT32_MIN;
static volatile uint32_t t67 = 38622538U;
volatile int32_t t68 = -1;
uint32_t x294 = 0U;
static uint32_t t70 = 922U;
static volatile int32_t x299 = INT32_MIN;
int16_t x305 = INT16_MIN;
int16_t x311 = -42;
static volatile int32_t x312 = -1;
int8_t x314 = INT8_MAX;
uint8_t x319 = UINT8_MAX;
uint16_t x324 = 3U;
int64_t x326 = -1LL;
volatile int16_t x327 = -1;
volatile int32_t t80 = -123449;
int32_t x337 = -119;
int64_t x338 = -2238449601555829940LL;
uint32_t x351 = UINT32_MAX;
int16_t x352 = -1;
static int32_t x361 = INT32_MIN;
static uint8_t x365 = UINT8_MAX;
int64_t x366 = -22128525679242541LL;
uint32_t x374 = 0U;
int8_t x376 = INT8_MIN;
volatile uint32_t t88 = 119U;
int16_t x382 = INT16_MAX;
uint64_t x392 = 752LLU;
int32_t x395 = -3;
static volatile uint64_t t94 = 3958923237944351359LLU;
int32_t x404 = INT32_MAX;
static int32_t t95 = INT32_MAX;
int16_t x409 = INT16_MIN;
int32_t x410 = INT32_MIN;
int8_t x412 = INT8_MIN;
int32_t x419 = INT32_MIN;
int32_t x420 = -1;


void f0(void) {
	static volatile int64_t x1 = INT64_MIN;
	uint16_t x3 = 333U;
	int16_t x4 = INT16_MAX;
	int64_t t0 = -4573083LL;

	t0 = ((x1+(x2&x3))|x4);

	if (t0 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 14729U;
	static int8_t x6 = INT8_MIN;
	int8_t x8 = -1;
	int32_t t1 = 19;

	t1 = ((x5+(x6&x7))|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int64_t x10 = -35558355LL;
	int8_t x11 = INT8_MAX;
	int32_t x12 = INT32_MIN;
	int64_t t2 = 418038187642542LL;

	t2 = ((x9+(x10&x11))|x12);

	if (t2 != -32723LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -1;
	uint8_t x14 = UINT8_MAX;
	static uint64_t x15 = UINT64_MAX;
	uint16_t x16 = 49U;

	t3 = ((x13+(x14&x15))|x16);

	if (t3 != 255LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 2U;
	uint64_t x18 = 0LLU;
	uint64_t x20 = 1376353945570LLU;
	uint64_t t4 = 8104732834251507314LLU;

	t4 = ((x17+(x18&x19))|x20);

	if (t4 != 1376353945570LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 1418U;
	uint16_t x23 = 0U;
	uint8_t x24 = 5U;
	static uint32_t t5 = 507U;

	t5 = ((x21+(x22&x23))|x24);

	if (t5 != 1423U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = 19;
	uint16_t x26 = 7U;
	static int16_t x27 = -1;
	volatile int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -14310804;

	t6 = ((x25+(x26&x27))|x28);

	if (t6 != -32742) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -1;
	volatile int8_t x31 = INT8_MIN;
	uint64_t x32 = 247538681LLU;
	uint64_t t7 = UINT64_MAX;

	t7 = ((x29+(x30&x31))|x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = -14;
	int16_t x35 = -2107;
	int16_t x36 = 111;
	volatile int32_t t8 = 352648;

	t8 = ((x33+(x34&x35))|x36);

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 63123168LLU;
	static int32_t x39 = INT32_MIN;
	int64_t x40 = INT64_MIN;
	uint64_t t9 = 25662586LLU;

	t9 = ((x37+(x38&x39))|x40);

	if (t9 != 18446744071625191136LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x42 = 30;
	static volatile int32_t x43 = INT32_MIN;
	int8_t x44 = INT8_MIN;
	volatile int64_t t10 = -76928235741477645LL;

	t10 = ((x41+(x42&x43))|x44);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -43112006215356LL;
	volatile int64_t x46 = -1LL;
	int64_t x47 = -1LL;
	uint64_t x48 = UINT64_MAX;
	uint64_t t11 = UINT64_MAX;

	t11 = ((x45+(x46&x47))|x48);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = UINT8_MAX;
	uint16_t x52 = 400U;
	volatile uint32_t t12 = 112U;

	t12 = ((x49+(x50&x51))|x52);

	if (t12 != 155638U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = UINT16_MAX;
	int64_t x55 = -1501006696450364980LL;
	static volatile int64_t t13 = 1LL;

	t13 = ((x53+(x54&x55))|x56);

	if (t13 != -5683LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -871;
	uint64_t x58 = 186957809023535152LLU;
	int64_t x59 = 54651274790906LL;
	int16_t x60 = INT16_MIN;
	uint64_t t14 = 692566642LLU;

	t14 = ((x57+(x58&x59))|x60);

	if (t14 != 18446744073709550793LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x61 = INT32_MAX;
	uint64_t x62 = 1064223065126870720LLU;
	uint32_t x63 = 71431U;
	volatile uint64_t t15 = 53563528394LLU;

	t15 = ((x61+(x62&x63))|x64);

	if (t15 != 4294967295LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = UINT8_MAX;
	int8_t x66 = INT8_MAX;
	volatile uint16_t x67 = UINT16_MAX;
	volatile int32_t t16 = 1;

	t16 = ((x65+(x66&x67))|x68);

	if (t16 != 510) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -1;
	int8_t x70 = -10;
	volatile uint8_t x72 = 0U;
	static int64_t t17 = 1313522LL;

	t17 = ((x69+(x70&x71))|x72);

	if (t17 != 57344757LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x76 = INT8_MAX;

	t18 = ((x73+(x74&x75))|x76);

	if (t18 != -2147483521LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x78 = INT16_MIN;
	volatile int16_t x79 = INT16_MIN;
	static int64_t x80 = INT64_MIN;

	t19 = ((x77+(x78&x79))|x80);

	if (t19 != -32769LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x81 = INT32_MIN;
	uint16_t x82 = 5U;
	uint32_t x84 = 11244U;
	uint32_t t20 = 303U;

	t20 = ((x81+(x82&x83))|x84);

	if (t20 != 2147494893U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = 2780U;
	int32_t x86 = INT32_MIN;
	int32_t x87 = 85388;
	int64_t x88 = -59234256344418LL;
	static volatile int64_t t21 = -48471LL;

	t21 = ((x85+(x86&x87))|x88);

	if (t21 != -59234256344354LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	int64_t x90 = INT64_MIN;
	volatile int32_t x91 = 394693088;
	static volatile uint8_t x92 = UINT8_MAX;
	int64_t t22 = -51810768792150621LL;

	t22 = ((x89+(x90&x91))|x92);

	if (t22 != 255LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	static int16_t x94 = INT16_MIN;
	static int64_t x95 = INT64_MIN;
	uint32_t x96 = UINT32_MAX;

	t23 = ((x93+(x94&x95))|x96);

	if (t23 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 64U;
	int16_t x98 = INT16_MAX;
	static int64_t x99 = -1LL;
	static uint8_t x100 = 5U;
	int64_t t24 = 8LL;

	t24 = ((x97+(x98&x99))|x100);

	if (t24 != 32831LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = -23;
	volatile int64_t x102 = 1038452LL;
	volatile int16_t x103 = INT16_MIN;
	int32_t x104 = INT32_MAX;
	volatile int64_t t25 = -15191628LL;

	t25 = ((x101+(x102&x103))|x104);

	if (t25 != 2147483647LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 978U;
	int16_t x106 = INT16_MIN;
	int32_t x107 = 166037;
	static volatile int32_t t26 = 1617;

	t26 = ((x105+(x106&x107))|x108);

	if (t26 != 164831) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 140322559355117LLU;
	volatile int32_t x110 = -1;
	int8_t x111 = -1;
	static uint64_t t27 = 732457LLU;

	t27 = ((x109+(x110&x111))|x112);

	if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x114 = 183LLU;
	static int8_t x116 = -44;
	volatile uint64_t t28 = 1033376919738373LLU;

	t28 = ((x113+(x114&x115))|x116);

	if (t28 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = 1023LL;
	volatile uint64_t x118 = 817717189429LLU;
	volatile int32_t x119 = INT32_MIN;
	static int8_t x120 = -9;
	uint64_t t29 = UINT64_MAX;

	t29 = ((x117+(x118&x119))|x120);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x121 = UINT16_MAX;
	volatile uint32_t x122 = 31590229U;
	uint16_t x124 = 8U;
	uint64_t t30 = 6015231LLU;

	t30 = ((x121+(x122&x123))|x124);

	if (t30 != 31655772LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	static int64_t x128 = 325LL;

	t31 = ((x125+(x126&x127))|x128);

	if (t31 != -2147483323LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MIN;
	uint32_t x130 = 140630297U;
	static int8_t x131 = -1;
	static uint8_t x132 = UINT8_MAX;
	volatile uint32_t t32 = 23195U;

	t32 = ((x129+(x130&x131))|x132);

	if (t32 != 2288114175U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	uint32_t x134 = UINT32_MAX;
	int64_t x135 = 6LL;

	t33 = ((x133+(x134&x135))|x136);

	if (t33 != -122LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	static uint16_t x138 = 2U;
	static uint32_t x139 = 3376169U;
	int32_t x140 = INT32_MIN;
	volatile uint32_t t34 = UINT32_MAX;

	t34 = ((x137+(x138&x139))|x140);

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 16LLU;
	int32_t x142 = INT32_MIN;
	static uint64_t x143 = UINT64_MAX;
	int8_t x144 = INT8_MIN;
	volatile uint64_t t35 = 245130826087371495LLU;

	t35 = ((x141+(x142&x143))|x144);

	if (t35 != 18446744073709551504LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = 936;
	volatile int16_t x147 = 8391;
	static int16_t x148 = INT16_MIN;
	int32_t t36 = -1;

	t36 = ((x145+(x146&x147))|x148);

	if (t36 != -32641) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	uint32_t x151 = 341761U;
	int64_t x152 = INT64_MIN;
	int64_t t37 = -32784023447450LL;

	t37 = ((x149+(x150&x151))|x152);

	if (t37 != -9223372032559808639LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = 51179304075990LLU;
	uint8_t x154 = UINT8_MAX;
	uint64_t x155 = 6326989280029524LLU;
	uint64_t t38 = 72487719508420LLU;

	t38 = ((x153+(x154&x155))|x156);

	if (t38 != 18446744073709549566LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 0;
	static int32_t x158 = -1;
	uint32_t x159 = 102U;
	uint32_t x160 = 440172932U;
	static volatile uint32_t t39 = 48U;

	t39 = ((x157+(x158&x159))|x160);

	if (t39 != 440173030U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = INT16_MAX;
	int64_t x162 = 24839066LL;
	int8_t x163 = INT8_MIN;
	uint64_t x164 = 65999263LLU;
	volatile uint64_t t40 = 41901709670875LLU;

	t40 = ((x161+(x162&x163))|x164);

	if (t40 != 67081215LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = 45;
	volatile int8_t x167 = -1;
	uint8_t x168 = 2U;
	uint32_t t41 = 291806385U;

	t41 = ((x165+(x166&x167))|x168);

	if (t41 != 1233998723U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x169 = UINT32_MAX;
	volatile int16_t x170 = 1058;
	uint8_t x171 = UINT8_MAX;
	int64_t x172 = INT64_MIN;

	t42 = ((x169+(x170&x171))|x172);

	if (t42 != -9223372036854775775LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = 14U;
	int16_t x174 = INT16_MIN;
	static int8_t x175 = -1;
	static int32_t x176 = INT32_MAX;

	t43 = ((x173+(x174&x175))|x176);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MAX;
	volatile uint64_t x178 = UINT64_MAX;
	int32_t x180 = 343500;

	t44 = ((x177+(x178&x179))|x180);

	if (t44 != 2147483119LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = -71823LL;
	int8_t x182 = INT8_MIN;
	int8_t x183 = 0;
	static volatile int64_t t45 = 233296776850LL;

	t45 = ((x181+(x182&x183))|x184);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	int16_t x187 = 49;
	int16_t x188 = 123;
	volatile int32_t t46 = 661290341;

	t46 = ((x185+(x186&x187))|x188);

	if (t46 != -2147483525) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x191 = INT8_MIN;
	volatile int32_t t47 = -6339326;

	t47 = ((x189+(x190&x191))|x192);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	int32_t x194 = INT32_MAX;
	static int32_t x195 = -1;
	volatile int64_t x196 = 24LL;

	t48 = ((x193+(x194&x195))|x196);

	if (t48 != 2147450879LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = INT64_MIN;
	static volatile int16_t x202 = 3;
	int8_t x204 = INT8_MIN;
	volatile int64_t t49 = 55225263LL;

	t49 = ((x201+(x202&x203))|x204);

	if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = INT8_MIN;
	volatile int16_t x206 = -39;
	int8_t x207 = INT8_MIN;
	static int16_t x208 = 404;
	int32_t t50 = 43;

	t50 = ((x205+(x206&x207))|x208);

	if (t50 != -108) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x214 = INT32_MAX;
	int16_t x215 = 1;
	static int16_t x216 = -1;

	t51 = ((x213+(x214&x215))|x216);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = 1;
	int16_t x218 = INT16_MIN;
	int8_t x219 = -15;
	volatile int64_t x220 = 110732LL;
	int64_t t52 = 6835LL;

	t52 = ((x217+(x218&x219))|x220);

	if (t52 != -20339LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x221 = -99LL;
	int32_t x222 = INT32_MAX;
	int64_t t53 = 49025102LL;

	t53 = ((x221+(x222&x223))|x224);

	if (t53 != 2147483647LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x225 = -3;
	uint32_t x227 = 173988U;
	int64_t x228 = 0LL;
	volatile int64_t t54 = 409LL;

	t54 = ((x225+(x226&x227))|x228);

	if (t54 != 173985LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MIN;
	uint16_t x230 = 0U;
	static int64_t x231 = -1LL;
	int8_t x232 = INT8_MIN;
	int64_t t55 = -967732LL;

	t55 = ((x229+(x230&x231))|x232);

	if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = 4;
	int8_t x234 = INT8_MIN;

	t56 = ((x233+(x234&x235))|x236);

	if (t56 != 4294967172U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = -33870901369823LL;
	int64_t x240 = -1LL;
	volatile int64_t t57 = 38LL;

	t57 = ((x237+(x238&x239))|x240);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x241 = INT32_MIN;
	uint16_t x242 = 161U;
	uint16_t x243 = UINT16_MAX;
	int16_t x244 = INT16_MAX;
	int32_t t58 = -1680;

	t58 = ((x241+(x242&x243))|x244);

	if (t58 != -2147450881) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x247 = -1;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = ((x245+(x246&x247))|x248);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = 14U;
	int64_t x251 = INT64_MIN;
	static int16_t x252 = INT16_MIN;
	volatile int64_t t60 = -14195428LL;

	t60 = ((x249+(x250&x251))|x252);

	if (t60 != -32754LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = INT16_MIN;
	volatile int64_t x254 = INT64_MIN;
	uint64_t x255 = 16276LLU;
	uint8_t x256 = UINT8_MAX;
	uint64_t t61 = 12586739LLU;

	t61 = ((x253+(x254&x255))|x256);

	if (t61 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = 676894747656707LL;
	static int64_t x259 = -465701LL;
	volatile int64_t x260 = INT64_MIN;
	volatile int64_t t62 = 59909250613LL;

	t62 = ((x257+(x258&x259))|x260);

	if (t62 != -9222695142107584802LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x263 = UINT64_MAX;
	uint8_t x264 = 3U;
	volatile uint64_t t63 = 2471610520546LLU;

	t63 = ((x261+(x262&x263))|x264);

	if (t63 != 255LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x265 = -87LL;
	int32_t x266 = -106288585;
	int32_t x267 = 26417213;
	static int8_t x268 = INT8_MIN;
	int64_t t64 = 75LL;

	t64 = ((x265+(x266&x267))|x268);

	if (t64 != -34LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x269 = UINT8_MAX;
	static volatile int64_t x270 = 2180641588484LL;
	uint8_t x271 = 1U;
	int16_t x272 = INT16_MAX;
	static int64_t t65 = -637LL;

	t65 = ((x269+(x270&x271))|x272);

	if (t65 != 32767LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = -1;
	volatile int16_t x274 = INT16_MIN;
	uint16_t x275 = 7U;
	volatile uint64_t x276 = UINT64_MAX;
	uint64_t t66 = UINT64_MAX;

	t66 = ((x273+(x274&x275))|x276);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x278 = -4;
	static volatile uint32_t x279 = 2051395018U;
	static uint16_t x280 = 27U;

	t67 = ((x277+(x278&x279))|x280);

	if (t67 != 4198878683U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = -4;
	volatile uint8_t x286 = UINT8_MAX;
	int16_t x287 = 0;
	int16_t x288 = INT16_MIN;

	t68 = ((x285+(x286&x287))|x288);

	if (t68 != -4) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = 1;
	volatile int8_t x290 = -32;
	volatile int16_t x291 = INT16_MIN;
	static int32_t x292 = INT32_MIN;
	volatile int32_t t69 = -2;

	t69 = ((x289+(x290&x291))|x292);

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = INT16_MAX;
	int32_t x295 = INT32_MIN;
	int8_t x296 = 0;

	t70 = ((x293+(x294&x295))|x296);

	if (t70 != 32767U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x297 = 2LLU;
	volatile int32_t x298 = 0;
	static int32_t x300 = INT32_MIN;
	volatile uint64_t t71 = 45229706777858LLU;

	t71 = ((x297+(x298&x299))|x300);

	if (t71 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x301 = 7U;
	int32_t x302 = -1;
	int8_t x303 = INT8_MIN;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t72 = -7886;

	t72 = ((x301+(x302&x303))|x304);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x306 = -1;
	static volatile uint16_t x307 = UINT16_MAX;
	int64_t x308 = -1LL;
	int64_t t73 = 2064232LL;

	t73 = ((x305+(x306&x307))|x308);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x309 = INT32_MAX;
	int32_t x310 = INT32_MIN;
	static volatile int32_t t74 = 1383;

	t74 = ((x309+(x310&x311))|x312);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x313 = -36493102913414LL;
	uint64_t x315 = 3657LLU;
	int16_t x316 = -1;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = ((x313+(x314&x315))|x316);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x317 = 60U;
	static int64_t x318 = INT64_MIN;
	int8_t x320 = 46;
	int64_t t76 = 3364340914LL;

	t76 = ((x317+(x318&x319))|x320);

	if (t76 != 62LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x321 = INT16_MAX;
	static uint16_t x322 = UINT16_MAX;
	int64_t x323 = 23162LL;
	volatile int64_t t77 = 45985647LL;

	t77 = ((x321+(x322&x323))|x324);

	if (t77 != 55931LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = INT16_MIN;
	int8_t x328 = 31;
	volatile int64_t t78 = -1858245628036LL;

	t78 = ((x325+(x326&x327))|x328);

	if (t78 != -32769LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x329 = INT32_MIN;
	int64_t x330 = -1LL;
	uint8_t x331 = 0U;
	int64_t x332 = INT64_MAX;
	static int64_t t79 = 216178808LL;

	t79 = ((x329+(x330&x331))|x332);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x333 = 199629337;
	static volatile int32_t x334 = INT32_MAX;
	int32_t x335 = INT32_MIN;
	int16_t x336 = 0;

	t80 = ((x333+(x334&x335))|x336);

	if (t80 != 199629337) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x339 = 15737712LL;
	static uint64_t x340 = 52753982905LLU;
	uint64_t t81 = 19509059465513LLU;

	t81 = ((x337+(x338&x339))|x340);

	if (t81 != 52762372089LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x341 = INT16_MAX;
	static int64_t x342 = INT64_MAX;
	uint32_t x343 = 438U;
	volatile int64_t x344 = INT64_MIN;
	static int64_t t82 = 196045022894LL;

	t82 = ((x341+(x342&x343))|x344);

	if (t82 != -9223372036854742603LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = INT32_MAX;
	static volatile uint32_t x350 = 23820U;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = ((x349+(x350&x351))|x352);

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = -1;
	int16_t x354 = -45;
	uint16_t x355 = 1U;
	static uint16_t x356 = 18698U;
	static volatile int32_t t84 = -7078;

	t84 = ((x353+(x354&x355))|x356);

	if (t84 != 18698) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x362 = 9U;
	int64_t x363 = -119LL;
	int64_t x364 = INT64_MIN;
	static int64_t t85 = 76223493064LL;

	t85 = ((x361+(x362&x363))|x364);

	if (t85 != -2147483639LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x367 = -1LL;
	uint16_t x368 = 75U;
	static int64_t t86 = -703850673909LL;

	t86 = ((x365+(x366&x367))|x368);

	if (t86 != -22128525679242277LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x369 = UINT64_MAX;
	int32_t x370 = INT32_MAX;
	volatile int8_t x371 = INT8_MIN;
	volatile int64_t x372 = INT64_MIN;
	volatile uint64_t t87 = 1645LLU;

	t87 = ((x369+(x370&x371))|x372);

	if (t87 != 9223372039002259327LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x373 = 23958969;
	uint16_t x375 = UINT16_MAX;

	t88 = ((x373+(x374&x375))|x376);

	if (t88 != 4294967225U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x377 = -23;
	int32_t x378 = INT32_MAX;
	int32_t x379 = 613;
	static volatile int64_t x380 = INT64_MIN;
	volatile int64_t t89 = -1034LL;

	t89 = ((x377+(x378&x379))|x380);

	if (t89 != -9223372036854775218LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x381 = INT16_MIN;
	volatile uint32_t x383 = 3556U;
	int16_t x384 = -192;
	static volatile uint32_t t90 = 4299U;

	t90 = ((x381+(x382&x383))|x384);

	if (t90 != 4294967268U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x385 = INT32_MAX;
	int64_t x386 = INT64_MAX;
	static int32_t x387 = 38427;
	uint8_t x388 = 91U;
	int64_t t91 = -11166416LL;

	t91 = ((x385+(x386&x387))|x388);

	if (t91 != 2147522139LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x389 = INT8_MIN;
	int8_t x390 = 2;
	int64_t x391 = INT64_MIN;
	static uint64_t t92 = 3078LLU;

	t92 = ((x389+(x390&x391))|x392);

	if (t92 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x393 = UINT8_MAX;
	int16_t x394 = INT16_MIN;
	int16_t x396 = INT16_MAX;
	int32_t t93 = 4;

	t93 = ((x393+(x394&x395))|x396);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = INT64_MAX;
	uint64_t x398 = 17453563289LLU;
	volatile int32_t x399 = 50744454;
	static uint32_t x400 = 592333U;

	t94 = ((x397+(x398&x399))|x400);

	if (t94 != 9223372036855369215LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x401 = 12U;
	uint16_t x402 = 14078U;
	volatile int8_t x403 = INT8_MIN;

	t95 = ((x401+(x402&x403))|x404);

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x411 = 3U;
	volatile uint32_t t96 = 28227143U;

	t96 = ((x409+(x410&x411))|x412);

	if (t96 != 4294967168U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x413 = UINT64_MAX;
	static volatile uint64_t x414 = 8021LLU;
	int8_t x415 = INT8_MIN;
	int32_t x416 = 31;
	uint64_t t97 = 4254LLU;

	t97 = ((x413+(x414&x415))|x416);

	if (t97 != 7935LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x417 = INT8_MAX;
	int64_t x418 = -1065118509LL;
	int64_t t98 = -4LL;

	t98 = ((x417+(x418&x419))|x420);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x421 = 26LLU;
	int64_t x422 = INT64_MAX;
	static int32_t x423 = INT32_MIN;
	uint64_t x424 = 92455613508350LLU;
	volatile uint64_t t99 = 4994325LLU;

	t99 = ((x421+(x422&x423))|x424);

	if (t99 != 9223372034707303166LLU) { NG(); } else { ; }
	
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

