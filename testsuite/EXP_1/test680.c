#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x3 = 1847600LLU;
static uint64_t x6 = 235LLU;
uint64_t t1 = 267922484442531LLU;
static int8_t x9 = INT8_MAX;
uint8_t x17 = 7U;
uint16_t x18 = 4635U;
volatile uint8_t x20 = UINT8_MAX;
int32_t x24 = INT32_MAX;
volatile int64_t t5 = -51601771550875LL;
int64_t x42 = -1LL;
volatile uint8_t x44 = 73U;
volatile int64_t t10 = 787091LL;
volatile uint32_t t11 = 6028759U;
volatile int16_t x52 = INT16_MAX;
static uint16_t x54 = UINT16_MAX;
volatile int8_t x57 = INT8_MAX;
int16_t x62 = -1;
int32_t x67 = -1;
volatile int64_t x68 = INT64_MIN;
static volatile uint64_t t16 = 29389620039739002LLU;
int64_t t17 = -2LL;
static int16_t x86 = INT16_MIN;
uint64_t x87 = 276024330457226657LLU;
int32_t t22 = 2;
static volatile int64_t x99 = 9LL;
static uint64_t t25 = 350357903332281LLU;
int16_t x106 = INT16_MIN;
volatile int32_t t26 = 3231;
int16_t x119 = INT16_MIN;
static int16_t x124 = -1;
volatile int32_t t31 = -567;
uint64_t x130 = 1785275951509480LLU;
static volatile uint64_t t32 = 355909LLU;
int8_t x140 = -1;
uint64_t x141 = 40LLU;
static int32_t x143 = INT32_MIN;
int32_t x146 = INT32_MIN;
int8_t x151 = INT8_MIN;
volatile int64_t t37 = -882LL;
int8_t x155 = -1;
volatile int64_t t38 = 474410829LL;
int64_t x159 = INT64_MAX;
uint8_t x161 = UINT8_MAX;
int64_t x162 = INT64_MIN;
static int64_t t40 = 90581273174LL;
volatile int32_t x166 = INT32_MIN;
int32_t x175 = INT32_MIN;
int64_t t43 = 1920886650422921661LL;
int32_t x179 = 223785;
int16_t x187 = 56;
int8_t x189 = 47;
static int64_t x198 = INT64_MIN;
uint32_t x202 = 39597039U;
int16_t x205 = -1;
static int64_t x207 = -70396LL;
static volatile int16_t x210 = 4;
static volatile uint16_t x212 = UINT16_MAX;
uint16_t x214 = UINT16_MAX;
int8_t x215 = INT8_MAX;
volatile int32_t t53 = 158268;
int64_t x229 = -3789192686572118LL;
static int8_t x230 = -54;
int32_t x232 = INT32_MAX;
static int8_t x233 = 0;
int16_t x235 = INT16_MIN;
int16_t x236 = -1;
uint64_t x252 = 51644795LLU;
uint64_t x259 = 66631169108925095LLU;
static int32_t x260 = -1;
uint64_t t59 = 727195361676LLU;
volatile uint64_t t60 = 9464570LLU;
int32_t t61 = 461202230;
int8_t x269 = -1;
uint8_t x274 = 4U;
int32_t x275 = INT32_MIN;
uint8_t x277 = UINT8_MAX;
int32_t x280 = INT32_MIN;
int16_t x284 = 19;
volatile int32_t t65 = 1;
uint32_t x291 = 171U;
uint8_t x292 = 16U;
uint16_t x300 = 13056U;
int16_t x307 = INT16_MAX;
int16_t x308 = -1;
volatile int8_t x312 = INT8_MAX;
uint16_t x315 = UINT16_MAX;
static uint64_t t76 = 3LLU;
int64_t x339 = INT64_MIN;
static int64_t x346 = INT64_MIN;
int32_t x347 = INT32_MIN;
int64_t x360 = INT64_MAX;
uint64_t x363 = UINT64_MAX;
static int16_t x365 = -1;
volatile int32_t x366 = INT32_MAX;
static uint32_t x367 = UINT32_MAX;
int64_t x374 = -142LL;
int64_t x380 = INT64_MIN;
int16_t x381 = -1;
uint8_t x383 = 52U;
volatile uint64_t x388 = 86437LLU;
uint64_t t91 = 11220532212851106LLU;
static uint64_t x397 = 99547523LLU;
static int64_t x399 = -1LL;
uint64_t t94 = 684653533LLU;
uint64_t x401 = UINT64_MAX;
int32_t x414 = 6256;
static int16_t x415 = -16;
static int64_t t98 = -2810839710806639776LL;
int64_t x419 = -751LL;


void f0(void) {
	static int8_t x1 = 50;
	uint8_t x2 = 59U;
	static int32_t x4 = 135165;
	volatile uint64_t t0 = 3766261415922652LLU;

	t0 = (((x1%x2)+x3)/x4);

	if (t0 != 13LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	uint64_t x7 = 21LLU;
	uint64_t x8 = UINT64_MAX;

	t1 = (((x5%x6)+x7)/x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -1;
	int8_t x11 = INT8_MAX;
	uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 366339144929LLU;

	t2 = (((x9%x10)+x11)/x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int64_t x14 = 12756481795600LL;
	static volatile uint8_t x15 = 98U;
	static int8_t x16 = 10;
	volatile int64_t t3 = -3541526LL;

	t3 = (((x13%x14)+x15)/x16);

	if (t3 != 9LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x19 = INT16_MAX;
	volatile int32_t t4 = -742047466;

	t4 = (((x17%x18)+x19)/x20);

	if (t4 != 128) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -2;
	int64_t x22 = INT64_MIN;
	volatile uint16_t x23 = 28649U;

	t5 = (((x21%x22)+x23)/x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -8;
	volatile int16_t x26 = INT16_MIN;
	int16_t x27 = 1;
	uint64_t x28 = 75LLU;
	uint64_t t6 = 168105128782LLU;

	t6 = (((x25%x26)+x27)/x28);

	if (t6 != 245956587649460688LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	int64_t x30 = INT64_MAX;
	uint8_t x31 = 56U;
	int64_t x32 = -178978574838577LL;
	int64_t t7 = -49122LL;

	t7 = (((x29%x30)+x31)/x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MAX;
	uint8_t x34 = UINT8_MAX;
	int16_t x35 = 15064;
	static int8_t x36 = -1;
	static int32_t t8 = 27361;

	t8 = (((x33%x34)+x35)/x36);

	if (t8 != -15191) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 38817272LLU;
	uint8_t x38 = 1U;
	int32_t x39 = -26;
	int32_t x40 = INT32_MAX;
	uint64_t t9 = 6LLU;

	t9 = (((x37%x38)+x39)/x40);

	if (t9 != 8589934595LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -1;
	volatile int32_t x43 = INT32_MIN;

	t10 = (((x41%x42)+x43)/x44);

	if (t10 != -29417584LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = UINT32_MAX;
	int32_t x46 = INT32_MAX;
	static int16_t x47 = INT16_MAX;
	uint32_t x48 = UINT32_MAX;

	t11 = (((x45%x46)+x47)/x48);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = -6814;
	int8_t x50 = INT8_MIN;
	volatile uint16_t x51 = 1277U;
	int32_t t12 = 1648;

	t12 = (((x49%x50)+x51)/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 5;
	int64_t x55 = INT64_MIN;
	int64_t x56 = -218791009LL;
	int64_t t13 = 675505LL;

	t13 = (((x53%x54)+x55)/x56);

	if (t13 != 42156083465LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = UINT64_MAX;
	uint16_t x59 = UINT16_MAX;
	int16_t x60 = -1;
	uint64_t t14 = 4816339095618073106LLU;

	t14 = (((x57%x58)+x59)/x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MIN;
	uint16_t x63 = UINT16_MAX;
	static int64_t x64 = INT64_MIN;
	static volatile int64_t t15 = 2968826191491006254LL;

	t15 = (((x61%x62)+x63)/x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	int32_t x66 = 3;

	t16 = (((x65%x66)+x67)/x68);

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	uint32_t x70 = 5U;
	int32_t x71 = INT32_MAX;
	int32_t x72 = -1;

	t17 = (((x69%x70)+x71)/x72);

	if (t17 != -2147483646LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = -1;
	int8_t x74 = INT8_MIN;
	int16_t x75 = -9974;
	int64_t x76 = -1LL;
	volatile int64_t t18 = 5LL;

	t18 = (((x73%x74)+x75)/x76);

	if (t18 != 9975LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int8_t x78 = -1;
	volatile int16_t x79 = -3;
	uint64_t x80 = UINT64_MAX;
	uint64_t t19 = 20LLU;

	t19 = (((x77%x78)+x79)/x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MIN;
	int16_t x83 = -3;
	uint8_t x84 = 29U;
	int32_t t20 = 71;

	t20 = (((x81%x82)+x83)/x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	static int64_t x88 = 56350LL;
	volatile uint64_t t21 = 4292039829414480428LLU;

	t21 = (((x85%x86)+x87)/x88);

	if (t21 != 4898390957537LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -2;
	volatile int32_t x90 = INT32_MIN;
	int8_t x91 = -41;
	volatile int16_t x92 = -2642;

	t22 = (((x89%x90)+x91)/x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	uint16_t x94 = 26U;
	uint64_t x95 = 1345531328178LLU;
	static int8_t x96 = -3;
	static uint64_t t23 = 14168185232409LLU;

	t23 = (((x93%x94)+x95)/x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	int8_t x98 = INT8_MAX;
	volatile int64_t x100 = INT64_MIN;
	static int64_t t24 = -2498247351367LL;

	t24 = (((x97%x98)+x99)/x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int16_t x102 = INT16_MIN;
	static uint32_t x103 = 435U;
	int64_t x104 = INT64_MIN;

	t25 = (((x101%x102)+x103)/x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 6511886;
	int32_t x107 = -1;
	volatile uint8_t x108 = 4U;

	t26 = (((x105%x106)+x107)/x108);

	if (t26 != 5955) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 37U;
	static int8_t x110 = 14;
	int8_t x111 = INT8_MAX;
	volatile int16_t x112 = -16;
	volatile int32_t t27 = -7250;

	t27 = (((x109%x110)+x111)/x112);

	if (t27 != -8) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -271LL;
	int64_t x114 = INT64_MAX;
	int16_t x115 = -20;
	int8_t x116 = INT8_MAX;
	int64_t t28 = 18458960484691053LL;

	t28 = (((x113%x114)+x115)/x116);

	if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = INT64_MIN;
	int64_t x118 = INT64_MIN;
	uint64_t x120 = 8177LLU;
	uint64_t t29 = 858160LLU;

	t29 = (((x117%x118)+x119)/x120);

	if (t29 != 2255930545885962LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	static uint8_t x122 = 2U;
	volatile uint8_t x123 = 62U;
	int32_t t30 = -2;

	t30 = (((x121%x122)+x123)/x124);

	if (t30 != -62) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	volatile int16_t x126 = INT16_MAX;
	volatile int8_t x127 = INT8_MIN;
	static int16_t x128 = 75;

	t31 = (((x125%x126)+x127)/x128);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x129 = 13719U;
	int16_t x131 = INT16_MIN;
	int16_t x132 = -1;

	t32 = (((x129%x130)+x131)/x132);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1581;
	int16_t x134 = -1;
	static int16_t x135 = INT16_MIN;
	int32_t x136 = INT32_MAX;
	volatile int32_t t33 = -5124932;

	t33 = (((x133%x134)+x135)/x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 8U;
	int8_t x138 = -1;
	volatile uint16_t x139 = 21U;
	volatile int32_t t34 = 1355;

	t34 = (((x137%x138)+x139)/x140);

	if (t34 != -21) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x142 = 2U;
	int16_t x144 = -49;
	volatile uint64_t t35 = 3028383216386874849LLU;

	t35 = (((x141%x142)+x143)/x144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int16_t x147 = -1;
	static volatile uint32_t x148 = UINT32_MAX;
	static volatile uint32_t t36 = 184100193U;

	t36 = (((x145%x146)+x147)/x148);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 12U;
	volatile int64_t x150 = -1LL;
	static uint32_t x152 = UINT32_MAX;

	t37 = (((x149%x150)+x151)/x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = 1473590334453401374LL;
	int64_t x154 = INT64_MIN;
	int8_t x156 = INT8_MAX;

	t38 = (((x153%x154)+x155)/x156);

	if (t38 != 11603073499633081LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	volatile int8_t x158 = -1;
	volatile int16_t x160 = INT16_MIN;
	int64_t t39 = 46LL;

	t39 = (((x157%x158)+x159)/x160);

	if (t39 != -281474976710655LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x163 = UINT16_MAX;
	static int16_t x164 = INT16_MAX;

	t40 = (((x161%x162)+x163)/x164);

	if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 40027U;
	int32_t x167 = INT32_MAX;
	int8_t x168 = 2;
	static uint32_t t41 = 173U;

	t41 = (((x165%x166)+x167)/x168);

	if (t41 != 1073761837U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MIN;
	uint8_t x171 = 3U;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t42 = -74698632;

	t42 = (((x169%x170)+x171)/x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	uint16_t x174 = UINT16_MAX;
	uint8_t x176 = 5U;

	t43 = (((x173%x174)+x175)/x176);

	if (t43 != -429503283LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = 472;
	int16_t x178 = -1;
	static int16_t x180 = -1;
	int32_t t44 = 4;

	t44 = (((x177%x178)+x179)/x180);

	if (t44 != -223785) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -578647187237LL;
	int8_t x186 = INT8_MIN;
	volatile uint64_t x188 = UINT64_MAX;
	volatile uint64_t t45 = 23197369026729378LLU;

	t45 = (((x185%x186)+x187)/x188);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x190 = 501103639U;
	int32_t x191 = INT32_MAX;
	int8_t x192 = -1;
	static uint32_t t46 = 91491U;

	t46 = (((x189%x190)+x191)/x192);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x193 = -57;
	uint8_t x194 = 8U;
	int16_t x195 = INT16_MIN;
	uint16_t x196 = 2146U;
	int32_t t47 = -254337891;

	t47 = (((x193%x194)+x195)/x196);

	if (t47 != -15) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x197 = -1;
	static int8_t x199 = INT8_MIN;
	uint16_t x200 = 910U;
	int64_t t48 = -61043585464LL;

	t48 = (((x197%x198)+x199)/x200);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = INT64_MIN;
	int8_t x203 = -1;
	static int32_t x204 = INT32_MIN;
	volatile int64_t t49 = 112376LL;

	t49 = (((x201%x202)+x203)/x204);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x206 = 966588015LLU;
	uint64_t x208 = 2101495315189707LLU;
	volatile uint64_t t50 = 471205644276922LLU;

	t50 = (((x205%x206)+x207)/x208);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x209 = 10U;
	volatile int64_t x211 = -1LL;
	volatile int64_t t51 = -1017LL;

	t51 = (((x209%x210)+x211)/x212);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MIN;
	int16_t x216 = -13512;
	int32_t t52 = -225;

	t52 = (((x213%x214)+x215)/x216);

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = 124404;
	uint8_t x218 = UINT8_MAX;
	int32_t x219 = -339808749;
	volatile int32_t x220 = INT32_MIN;

	t53 = (((x217%x218)+x219)/x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = -1;
	static int16_t x226 = -1;
	uint32_t x227 = 271U;
	volatile int16_t x228 = -1;
	uint32_t t54 = 615U;

	t54 = (((x225%x226)+x227)/x228);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x231 = 23973LLU;
	volatile uint64_t t55 = 21650052155LLU;

	t55 = (((x229%x230)+x231)/x232);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x234 = 8128782U;
	static uint32_t t56 = 7720029U;

	t56 = (((x233%x234)+x235)/x236);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x245 = -7164335331LL;
	uint64_t x246 = 5LLU;
	int16_t x247 = -12;
	int16_t x248 = 1;
	uint64_t t57 = 10LLU;

	t57 = (((x245%x246)+x247)/x248);

	if (t57 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = -1;
	static volatile int64_t x250 = INT64_MIN;
	uint16_t x251 = UINT16_MAX;
	static volatile uint64_t t58 = 1231711LLU;

	t58 = (((x249%x250)+x251)/x252);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x257 = -1LL;
	volatile uint8_t x258 = UINT8_MAX;

	t59 = (((x257%x258)+x259)/x260);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = INT32_MIN;
	int64_t x262 = INT64_MAX;
	uint64_t x263 = UINT64_MAX;
	static int32_t x264 = -3;

	t60 = (((x261%x262)+x263)/x264);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x265 = -7458391;
	static uint8_t x266 = UINT8_MAX;
	int8_t x267 = INT8_MAX;
	uint8_t x268 = UINT8_MAX;

	t61 = (((x265%x266)+x267)/x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x270 = 22U;
	volatile int32_t x271 = 152120;
	uint8_t x272 = UINT8_MAX;
	volatile int32_t t62 = 1;

	t62 = (((x269%x270)+x271)/x272);

	if (t62 != 596) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x273 = INT64_MAX;
	volatile int64_t x276 = -368879430528812096LL;
	int64_t t63 = 134684861887LL;

	t63 = (((x273%x274)+x275)/x276);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x278 = INT8_MAX;
	volatile int64_t x279 = INT64_MIN;
	int64_t t64 = -545LL;

	t64 = (((x277%x278)+x279)/x280);

	if (t64 != 4294967295LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = -7153;
	static uint16_t x282 = UINT16_MAX;
	volatile uint8_t x283 = UINT8_MAX;

	t65 = (((x281%x282)+x283)/x284);

	if (t65 != -363) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = INT8_MAX;
	int64_t x286 = INT64_MAX;
	int64_t x287 = INT64_MIN;
	volatile int8_t x288 = INT8_MAX;
	static int64_t t66 = 1235939133418LL;

	t66 = (((x285%x286)+x287)/x288);

	if (t66 != -72624976668147840LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x289 = INT32_MIN;
	int64_t x290 = INT64_MAX;
	int64_t t67 = 787LL;

	t67 = (((x289%x290)+x291)/x292);

	if (t67 != -134217717LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x293 = 20U;
	int8_t x294 = INT8_MIN;
	int8_t x295 = -1;
	int8_t x296 = INT8_MIN;
	int32_t t68 = -37316115;

	t68 = (((x293%x294)+x295)/x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x297 = 28250U;
	static int8_t x298 = INT8_MAX;
	volatile int16_t x299 = 195;
	static volatile int32_t t69 = -2612;

	t69 = (((x297%x298)+x299)/x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x301 = INT8_MIN;
	int64_t x302 = INT64_MIN;
	int16_t x303 = INT16_MIN;
	static int16_t x304 = 1;
	int64_t t70 = -3208682LL;

	t70 = (((x301%x302)+x303)/x304);

	if (t70 != -32896LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x305 = UINT32_MAX;
	int8_t x306 = -17;
	volatile uint32_t t71 = 237785U;

	t71 = (((x305%x306)+x307)/x308);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = INT8_MAX;
	uint8_t x310 = 26U;
	volatile uint64_t x311 = UINT64_MAX;
	static volatile uint64_t t72 = 7950927905106LLU;

	t72 = (((x309%x310)+x311)/x312);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x313 = 7U;
	volatile uint64_t x314 = 1708LLU;
	volatile int64_t x316 = -1LL;
	volatile uint64_t t73 = 70LLU;

	t73 = (((x313%x314)+x315)/x316);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x317 = INT16_MIN;
	int16_t x318 = -11;
	int16_t x319 = 14943;
	volatile int64_t x320 = 19918665LL;
	int64_t t74 = 0LL;

	t74 = (((x317%x318)+x319)/x320);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x321 = UINT8_MAX;
	volatile uint32_t x322 = UINT32_MAX;
	int32_t x323 = INT32_MIN;
	static int16_t x324 = INT16_MAX;
	static volatile uint32_t t75 = 1U;

	t75 = (((x321%x322)+x323)/x324);

	if (t75 != 65538U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x325 = UINT64_MAX;
	int64_t x326 = -60LL;
	int16_t x327 = -1;
	uint16_t x328 = 1U;

	t76 = (((x325%x326)+x327)/x328);

	if (t76 != 58LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = 85;
	uint16_t x330 = UINT16_MAX;
	static uint16_t x331 = UINT16_MAX;
	int16_t x332 = INT16_MAX;
	volatile int32_t t77 = 2;

	t77 = (((x329%x330)+x331)/x332);

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x333 = 5250910536110278329LLU;
	uint32_t x334 = 4U;
	int16_t x335 = 9;
	static volatile int32_t x336 = INT32_MIN;
	volatile uint64_t t78 = 417479824029185649LLU;

	t78 = (((x333%x334)+x335)/x336);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x337 = 7908660U;
	int16_t x338 = -1;
	int8_t x340 = INT8_MIN;
	int64_t t79 = -44207LL;

	t79 = (((x337%x338)+x339)/x340);

	if (t79 != 72057594037866149LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x341 = 2878556885LLU;
	static int32_t x342 = -1;
	int8_t x343 = INT8_MIN;
	uint64_t x344 = 123LLU;
	volatile uint64_t t80 = 50876LLU;

	t80 = (((x341%x342)+x343)/x344);

	if (t80 != 23402900LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x345 = 166947LLU;
	volatile int32_t x348 = INT32_MIN;
	static uint64_t t81 = 276LLU;

	t81 = (((x345%x346)+x347)/x348);

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x349 = INT64_MIN;
	uint32_t x350 = 93183U;
	int32_t x351 = INT32_MAX;
	int32_t x352 = -1;
	static volatile int64_t t82 = 763LL;

	t82 = (((x349%x350)+x351)/x352);

	if (t82 != -2147450906LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x353 = -1LL;
	int64_t x354 = INT64_MIN;
	int32_t x355 = -1;
	int8_t x356 = -17;
	static volatile int64_t t83 = -110LL;

	t83 = (((x353%x354)+x355)/x356);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x357 = UINT64_MAX;
	int32_t x358 = INT32_MIN;
	int64_t x359 = -1LL;
	static uint64_t t84 = 97929957287169086LLU;

	t84 = (((x357%x358)+x359)/x360);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x361 = -94;
	static int64_t x362 = -1LL;
	uint8_t x364 = 1U;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (((x361%x362)+x363)/x364);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x368 = -465647221888552LL;
	volatile int64_t t86 = 12944710LL;

	t86 = (((x365%x366)+x367)/x368);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x369 = -1;
	uint64_t x370 = 3085428LLU;
	int64_t x371 = INT64_MAX;
	uint16_t x372 = 53U;
	uint64_t t87 = 497655829247LLU;

	t87 = (((x369%x370)+x371)/x372);

	if (t87 != 174025887487841851LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x373 = 975448LLU;
	volatile int8_t x375 = 13;
	uint64_t x376 = UINT64_MAX;
	volatile uint64_t t88 = 5980649090522932769LLU;

	t88 = (((x373%x374)+x375)/x376);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x377 = -58;
	static int8_t x378 = -1;
	static uint16_t x379 = 6U;
	volatile int64_t t89 = 119314669LL;

	t89 = (((x377%x378)+x379)/x380);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x382 = -1;
	volatile int32_t x384 = INT32_MIN;
	volatile int32_t t90 = 1529;

	t90 = (((x381%x382)+x383)/x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = INT8_MIN;
	int64_t x386 = 36864LL;
	static int8_t x387 = INT8_MIN;

	t91 = (((x385%x386)+x387)/x388);

	if (t91 != 213412590368818LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x389 = 0U;
	volatile int16_t x390 = INT16_MIN;
	int32_t x391 = INT32_MIN;
	int64_t x392 = -1LL;
	volatile int64_t t92 = -523015832109248LL;

	t92 = (((x389%x390)+x391)/x392);

	if (t92 != 2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = INT16_MIN;
	int16_t x394 = -1756;
	int64_t x395 = -7293623467058722LL;
	volatile int8_t x396 = 5;
	volatile int64_t t93 = -68730951206931256LL;

	t93 = (((x393%x394)+x395)/x396);

	if (t93 != -1458724693411976LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x398 = INT64_MIN;
	int8_t x400 = INT8_MIN;

	t94 = (((x397%x398)+x399)/x400);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x402 = -11;
	uint8_t x403 = 14U;
	int32_t x404 = INT32_MIN;
	static volatile uint64_t t95 = 281056229454947LLU;

	t95 = (((x401%x402)+x403)/x404);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x405 = -1;
	static int32_t x406 = INT32_MIN;
	volatile int64_t x407 = INT64_MAX;
	int8_t x408 = INT8_MIN;
	volatile int64_t t96 = -61026461734LL;

	t96 = (((x405%x406)+x407)/x408);

	if (t96 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x409 = 3053128;
	static int16_t x410 = -4052;
	uint32_t x411 = 70031748U;
	int64_t x412 = INT64_MIN;
	static int64_t t97 = 787371456937LL;

	t97 = (((x409%x410)+x411)/x412);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x413 = INT8_MIN;
	volatile int64_t x416 = 25LL;

	t98 = (((x413%x414)+x415)/x416);

	if (t98 != -5LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x417 = UINT8_MAX;
	int8_t x418 = -1;
	static int64_t x420 = INT64_MIN;
	volatile int64_t t99 = 1511LL;

	t99 = (((x417%x418)+x419)/x420);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

