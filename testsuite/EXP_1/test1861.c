#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MAX;
volatile int64_t t0 = 8568106521055396LL;
uint32_t x5 = 7546U;
int32_t x9 = INT32_MIN;
static int32_t t2 = 4826958;
uint8_t x18 = UINT8_MAX;
int32_t x20 = -167802;
uint64_t x28 = UINT64_MAX;
uint64_t t6 = 1929LLU;
int64_t x34 = INT64_MIN;
volatile uint32_t x39 = UINT32_MAX;
uint32_t t9 = 161218U;
static int16_t x44 = INT16_MIN;
uint16_t x50 = 7297U;
int64_t x52 = -470189LL;
int16_t x55 = INT16_MAX;
static volatile uint64_t t12 = 7693LLU;
volatile int16_t x60 = -1;
volatile int64_t t14 = -2931765073547LL;
int64_t x81 = INT64_MIN;
int16_t x84 = INT16_MIN;
int8_t x85 = INT8_MIN;
static uint64_t t19 = 11348393942740331LLU;
volatile uint64_t t20 = 293063LLU;
uint32_t x94 = 36746U;
volatile uint64_t x101 = 9659013415639LLU;
volatile uint8_t x113 = 13U;
int16_t x127 = INT16_MAX;
volatile int64_t t27 = -5282LL;
int32_t x130 = INT32_MIN;
int64_t t28 = -33113453354060LL;
int32_t x133 = 6;
volatile int32_t x136 = INT32_MIN;
static int32_t t29 = 118694936;
int64_t x150 = -1LL;
int16_t x153 = -1;
int16_t x155 = INT16_MIN;
volatile uint32_t x178 = UINT32_MAX;
int32_t x192 = -346974;
uint32_t x193 = UINT32_MAX;
volatile uint8_t x197 = UINT8_MAX;
volatile int32_t t42 = 36;
int16_t x213 = 9802;
static int8_t x216 = -1;
static int16_t x217 = -1;
volatile uint64_t t50 = UINT64_MAX;
int32_t x251 = 254;
uint16_t x255 = 40U;
volatile int64_t t53 = 88411099LL;
int16_t x267 = INT16_MIN;
volatile int8_t x283 = 52;
int32_t x285 = INT32_MIN;
uint16_t x291 = 307U;
static int64_t x292 = -83217983938521LL;
static volatile int8_t x293 = INT8_MAX;
uint8_t x294 = 1U;
volatile int16_t x296 = -1;
int32_t t62 = 15;
uint32_t x305 = 5U;
uint64_t x306 = 29181163313LLU;
int16_t x308 = -1;
int16_t x320 = -1;
int16_t x324 = INT16_MIN;
volatile uint8_t x325 = UINT8_MAX;
volatile uint64_t x326 = UINT64_MAX;
int32_t x328 = 197988711;
uint64_t t69 = 10176019LLU;
volatile int64_t t71 = 1LL;
int16_t x338 = -1;
uint64_t t72 = 23098926354LLU;
volatile int8_t x347 = -7;
volatile int32_t t73 = -263378;
int16_t x351 = INT16_MIN;
volatile int64_t t75 = 224LL;
volatile int64_t t76 = -111871059984750415LL;
static volatile uint64_t t77 = 88428566405285LLU;
uint8_t x365 = 10U;
volatile int64_t x367 = INT64_MAX;
volatile uint16_t x369 = 2U;
int16_t x371 = INT16_MIN;
int64_t x373 = INT64_MIN;
int32_t x379 = INT32_MIN;
int64_t x383 = -1650620385LL;
static int8_t x384 = 0;
int32_t x386 = -637117418;
uint32_t t84 = 312553944U;
int8_t x397 = INT8_MIN;
uint8_t x405 = UINT8_MAX;
static volatile int64_t t87 = 26718LL;
int64_t x413 = -16511535185929LL;
volatile uint64_t t91 = 7151LLU;
int64_t x429 = -1LL;
int8_t x430 = 8;
static int64_t x431 = INT64_MAX;
int8_t x436 = INT8_MAX;
int16_t x437 = 1901;
int32_t x452 = -5464751;
volatile uint64_t t96 = 62480444210LLU;
volatile int64_t t97 = -1316LL;
volatile int32_t t98 = -221;


void f0(void) {
	int64_t x1 = -218338788345296LL;
	uint16_t x2 = 3611U;
	uint16_t x4 = 3616U;

	t0 = (((x1|x2)+x3)-x4);

	if (t0 != -218336640864230LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x6 = -1;
	uint16_t x7 = 3837U;
	static int32_t x8 = 645;
	uint32_t t1 = 1U;

	t1 = (((x5|x6)+x7)-x8);

	if (t1 != 3191U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -3;
	volatile int8_t x11 = INT8_MIN;
	volatile int16_t x12 = -1;

	t2 = (((x9|x10)+x11)-x12);

	if (t2 != -130) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MAX;
	int16_t x14 = INT16_MAX;
	uint64_t x15 = 1130636LLU;
	uint64_t x16 = 55179LLU;
	static uint64_t t3 = 14584762LLU;

	t3 = (((x13|x14)+x15)-x16);

	if (t3 != 9223372036855851264LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 8LLU;
	int64_t x19 = INT64_MAX;
	static volatile uint64_t t4 = 503LLU;

	t4 = (((x17|x18)+x19)-x20);

	if (t4 != 9223372036854943864LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int64_t x22 = INT64_MAX;
	int16_t x23 = -1;
	int8_t x24 = 0;
	int64_t t5 = -362624074LL;

	t5 = (((x21|x22)+x23)-x24);

	if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	static uint32_t x26 = UINT32_MAX;
	int8_t x27 = INT8_MIN;

	t6 = (((x25|x26)+x27)-x28);

	if (t6 != 4294967168LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x29 = INT64_MAX;
	int16_t x30 = INT16_MAX;
	int32_t x31 = INT32_MIN;
	uint16_t x32 = 2U;
	int64_t t7 = -99502085726LL;

	t7 = (((x29|x30)+x31)-x32);

	if (t7 != 9223372034707292157LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int16_t x35 = 1;
	static volatile int16_t x36 = INT16_MIN;
	int64_t t8 = 2851411LL;

	t8 = (((x33|x34)+x35)-x36);

	if (t8 != -2147450879LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	volatile int32_t x38 = -1;
	uint8_t x40 = UINT8_MAX;

	t9 = (((x37|x38)+x39)-x40);

	if (t9 != 4294967039U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -3839;
	int64_t x42 = INT64_MAX;
	uint8_t x43 = 1U;
	volatile int64_t t10 = -2402847087885117938LL;

	t10 = (((x41|x42)+x43)-x44);

	if (t10 != 32768LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = 29618686104LL;
	int64_t x51 = INT64_MIN;
	volatile int64_t t11 = -51614202611524595LL;

	t11 = (((x49|x50)+x51)-x52);

	if (t11 != -9223372007235614394LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	uint64_t x54 = 156870199LLU;
	int32_t x56 = 11063;

	t12 = (((x53|x54)+x55)-x56);

	if (t12 != 18446744073709550335LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = 4725598572286405LL;
	int16_t x58 = INT16_MIN;
	uint8_t x59 = 54U;
	volatile int64_t t13 = 4117044296876882LL;

	t13 = (((x57|x58)+x59)-x60);

	if (t13 != -28164LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MAX;
	int32_t x62 = -1;
	int16_t x63 = -1;
	static int64_t x64 = -1LL;

	t14 = (((x61|x62)+x63)-x64);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = 13;
	volatile int8_t x66 = 40;
	int8_t x67 = 63;
	uint32_t x68 = 117651U;
	volatile uint32_t t15 = 4U;

	t15 = (((x65|x66)+x67)-x68);

	if (t15 != 4294849753U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -4084LL;
	uint64_t x74 = 2806441645837LLU;
	int16_t x75 = INT16_MIN;
	static int16_t x76 = -47;
	uint64_t t16 = 8373662LLU;

	t16 = (((x73|x74)+x75)-x76);

	if (t16 != 18446744073709516604LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x77 = INT64_MAX;
	uint16_t x78 = 1210U;
	int32_t x79 = INT32_MIN;
	volatile int32_t x80 = -1;
	int64_t t17 = -2205485393873483LL;

	t17 = (((x77|x78)+x79)-x80);

	if (t17 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x82 = -1577105;
	volatile uint64_t x83 = UINT64_MAX;
	uint64_t t18 = 71915559575988LLU;

	t18 = (((x81|x82)+x83)-x84);

	if (t18 != 18446744073708007278LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x86 = 5;
	uint64_t x87 = 1053237649549591LLU;
	uint8_t x88 = 1U;

	t19 = (((x85|x86)+x87)-x88);

	if (t19 != 1053237649549467LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x89 = -1;
	volatile uint32_t x90 = UINT32_MAX;
	volatile uint32_t x91 = UINT32_MAX;
	uint64_t x92 = UINT64_MAX;

	t20 = (((x89|x90)+x91)-x92);

	if (t20 != 4294967295LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x93 = -1LL;
	int64_t x95 = -1LL;
	volatile int16_t x96 = INT16_MAX;
	static int64_t t21 = -252242168LL;

	t21 = (((x93|x94)+x95)-x96);

	if (t21 != -32769LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x97 = 1U;
	volatile int16_t x98 = INT16_MIN;
	uint32_t x99 = 48247693U;
	uint16_t x100 = 1U;
	volatile uint32_t t22 = 560151U;

	t22 = (((x97|x98)+x99)-x100);

	if (t22 != 48214925U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x102 = UINT8_MAX;
	volatile uint8_t x103 = 56U;
	uint32_t x104 = 3U;
	volatile uint64_t t23 = 169669427769901491LLU;

	t23 = (((x101|x102)+x103)-x104);

	if (t23 != 9659013415732LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MIN;
	int32_t x106 = 111465;
	uint8_t x107 = UINT8_MAX;
	int8_t x108 = INT8_MIN;
	volatile int64_t t24 = 0LL;

	t24 = (((x105|x106)+x107)-x108);

	if (t24 != -9223372036854663960LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x109 = -112674406824LL;
	volatile int64_t x110 = -1LL;
	uint16_t x111 = UINT16_MAX;
	static uint8_t x112 = 20U;
	static volatile int64_t t25 = 63794795848LL;

	t25 = (((x109|x110)+x111)-x112);

	if (t25 != 65514LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x114 = 215;
	volatile int32_t x115 = INT32_MIN;
	int32_t x116 = -1;
	volatile int32_t t26 = 9648;

	t26 = (((x113|x114)+x115)-x116);

	if (t26 != -2147483424) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x125 = 1905U;
	volatile int64_t x126 = INT64_MIN;
	static uint16_t x128 = 16320U;

	t27 = (((x125|x126)+x127)-x128);

	if (t27 != -9223372036854757456LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = -1;
	int64_t x131 = -1LL;
	uint8_t x132 = 0U;

	t28 = (((x129|x130)+x131)-x132);

	if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x134 = INT16_MIN;
	uint16_t x135 = 22U;

	t29 = (((x133|x134)+x135)-x136);

	if (t29 != 2147450908) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x137 = 0U;
	volatile int8_t x138 = INT8_MIN;
	uint64_t x139 = 457687286LLU;
	uint32_t x140 = UINT32_MAX;
	uint64_t t30 = 11318415LLU;

	t30 = (((x137|x138)+x139)-x140);

	if (t30 != 18446744069872271479LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = -1;
	int32_t x142 = 13;
	static uint16_t x143 = 1657U;
	volatile int32_t x144 = INT32_MAX;
	int32_t t31 = 131623129;

	t31 = (((x141|x142)+x143)-x144);

	if (t31 != -2147481991) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x149 = INT32_MAX;
	static int8_t x151 = -1;
	volatile int32_t x152 = 1;
	static int64_t t32 = -603LL;

	t32 = (((x149|x150)+x151)-x152);

	if (t32 != -3LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x154 = INT64_MIN;
	int8_t x156 = INT8_MAX;
	volatile int64_t t33 = -3218588755458004LL;

	t33 = (((x153|x154)+x155)-x156);

	if (t33 != -32896LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x157 = UINT64_MAX;
	static int8_t x158 = 26;
	static volatile int16_t x159 = INT16_MIN;
	uint8_t x160 = 58U;
	static volatile uint64_t t34 = 4698LLU;

	t34 = (((x157|x158)+x159)-x160);

	if (t34 != 18446744073709518789LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = -25;
	int8_t x162 = -31;
	int64_t x163 = INT64_MAX;
	int32_t x164 = -1;
	int64_t t35 = 128700407264127LL;

	t35 = (((x161|x162)+x163)-x164);

	if (t35 != 9223372036854775783LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x173 = 10630963601073LLU;
	uint16_t x174 = UINT16_MAX;
	int8_t x175 = -1;
	int32_t x176 = INT32_MIN;
	uint64_t t36 = 73714867694LLU;

	t36 = (((x173|x174)+x175)-x176);

	if (t36 != 10633111142398LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x177 = 8;
	volatile int32_t x179 = INT32_MAX;
	int64_t x180 = 222491272763126244LL;
	static volatile int64_t t37 = 2700LL;

	t37 = (((x177|x178)+x179)-x180);

	if (t37 != -222491270615642598LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x181 = 1296U;
	volatile uint64_t x182 = 43576376725730LLU;
	int32_t x183 = -1;
	volatile int32_t x184 = -2;
	static uint64_t t38 = 20220228LLU;

	t38 = (((x181|x182)+x183)-x184);

	if (t38 != 43576376727027LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x185 = INT32_MIN;
	volatile int32_t x186 = 71;
	static int16_t x187 = 6;
	int32_t x188 = -1;
	volatile int32_t t39 = 226169;

	t39 = (((x185|x186)+x187)-x188);

	if (t39 != -2147483570) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = INT16_MIN;
	int64_t x190 = -1LL;
	static uint8_t x191 = UINT8_MAX;
	volatile int64_t t40 = 12LL;

	t40 = (((x189|x190)+x191)-x192);

	if (t40 != 347228LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x194 = INT32_MIN;
	static uint16_t x195 = UINT16_MAX;
	int32_t x196 = INT32_MAX;
	static uint32_t t41 = 1357933422U;

	t41 = (((x193|x194)+x195)-x196);

	if (t41 != 2147549183U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x198 = -1;
	int8_t x199 = -1;
	uint8_t x200 = 105U;

	t42 = (((x197|x198)+x199)-x200);

	if (t42 != -107) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x201 = 248858854593725LLU;
	static int64_t x202 = -2754736LL;
	static int8_t x203 = 0;
	int32_t x204 = INT32_MIN;
	volatile uint64_t t43 = 54519227185LLU;

	t43 = (((x201|x202)+x203)-x204);

	if (t43 != 2146826237LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x205 = -2;
	volatile int16_t x206 = -1;
	volatile int16_t x207 = INT16_MAX;
	int16_t x208 = 1635;
	int32_t t44 = 220;

	t44 = (((x205|x206)+x207)-x208);

	if (t44 != 31131) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x209 = UINT64_MAX;
	volatile int16_t x210 = -30;
	int32_t x211 = 0;
	int8_t x212 = -2;
	static volatile uint64_t t45 = 1401LLU;

	t45 = (((x209|x210)+x211)-x212);

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x214 = UINT8_MAX;
	int32_t x215 = 1;
	volatile int32_t t46 = 4;

	t46 = (((x213|x214)+x215)-x216);

	if (t46 != 9985) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x218 = 590875278U;
	uint32_t x219 = UINT32_MAX;
	volatile int16_t x220 = -1;
	static volatile uint32_t t47 = UINT32_MAX;

	t47 = (((x217|x218)+x219)-x220);

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x221 = UINT8_MAX;
	uint16_t x222 = 4U;
	volatile int32_t x223 = -15174631;
	volatile uint8_t x224 = 54U;
	volatile int32_t t48 = -212505;

	t48 = (((x221|x222)+x223)-x224);

	if (t48 != -15174430) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x225 = 2688U;
	int8_t x226 = 18;
	int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MIN;
	volatile int32_t t49 = -123323;

	t49 = (((x225|x226)+x227)-x228);

	if (t49 != -2147448174) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = -1;
	int16_t x230 = INT16_MIN;
	uint64_t x231 = UINT64_MAX;
	int16_t x232 = -1;

	t50 = (((x229|x230)+x231)-x232);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = 3;
	static int16_t x234 = -1;
	int32_t x235 = 2;
	static int8_t x236 = -1;
	static volatile int32_t t51 = -3;

	t51 = (((x233|x234)+x235)-x236);

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x249 = 20U;
	volatile uint16_t x250 = 0U;
	static int8_t x252 = -1;
	int32_t t52 = 143341;

	t52 = (((x249|x250)+x251)-x252);

	if (t52 != 275) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x253 = -262241LL;
	uint8_t x254 = UINT8_MAX;
	uint8_t x256 = 18U;

	t53 = (((x253|x254)+x255)-x256);

	if (t53 != -262123LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x257 = 133U;
	volatile int64_t x258 = 3056880LL;
	int16_t x259 = INT16_MAX;
	int8_t x260 = INT8_MIN;
	volatile int64_t t54 = -1682388691274LL;

	t54 = (((x257|x258)+x259)-x260);

	if (t54 != 3089780LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x261 = -1LL;
	static uint32_t x262 = UINT32_MAX;
	volatile int32_t x263 = -1;
	int16_t x264 = -1;
	volatile int64_t t55 = 2668021279LL;

	t55 = (((x261|x262)+x263)-x264);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x265 = UINT32_MAX;
	int64_t x266 = 924980295811478957LL;
	int8_t x268 = -1;
	int64_t t56 = 0LL;

	t56 = (((x265|x266)+x267)-x268);

	if (t56 != 924980297353625600LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x273 = 3U;
	int8_t x274 = 1;
	int64_t x275 = 1457LL;
	uint64_t x276 = 3291466785244868LLU;
	uint64_t t57 = 52323281474LLU;

	t57 = (((x273|x274)+x275)-x276);

	if (t57 != 18443452606924308208LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x277 = INT8_MIN;
	volatile int8_t x278 = -1;
	int64_t x279 = -46756241982538414LL;
	uint16_t x280 = 10U;
	volatile int64_t t58 = 7763845822983LL;

	t58 = (((x277|x278)+x279)-x280);

	if (t58 != -46756241982538425LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x281 = 61;
	uint64_t x282 = 440330900LLU;
	int8_t x284 = 10;
	static uint64_t t59 = 10678607LLU;

	t59 = (((x281|x282)+x283)-x284);

	if (t59 != 440330983LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x286 = 1U;
	int8_t x287 = -1;
	volatile int32_t x288 = INT32_MIN;
	static volatile int32_t t60 = -6451547;

	t60 = (((x285|x286)+x287)-x288);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x289 = 2043U;
	int32_t x290 = -221;
	static int64_t t61 = -1434389608074LL;

	t61 = (((x289|x290)+x291)-x292);

	if (t61 != 83217983938823LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x295 = INT16_MAX;

	t62 = (((x293|x294)+x295)-x296);

	if (t62 != 32895) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x297 = -884992;
	int16_t x298 = INT16_MAX;
	uint8_t x299 = 23U;
	uint64_t x300 = 910LLU;
	static uint64_t t63 = 151LLU;

	t63 = (((x297|x298)+x299)-x300);

	if (t63 != 18446744073708665992LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x301 = INT32_MIN;
	int64_t x302 = 2778LL;
	volatile uint64_t x303 = 17LLU;
	int64_t x304 = INT64_MIN;
	uint64_t t64 = 626742693450647889LLU;

	t64 = (((x301|x302)+x303)-x304);

	if (t64 != 9223372034707294955LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x307 = INT8_MIN;
	volatile uint64_t t65 = 479LLU;

	t65 = (((x305|x306)+x307)-x308);

	if (t65 != 29181163190LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x313 = UINT16_MAX;
	uint8_t x314 = 122U;
	int32_t x315 = INT32_MIN;
	static int32_t x316 = -10;
	int32_t t66 = -954828;

	t66 = (((x313|x314)+x315)-x316);

	if (t66 != -2147418103) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x317 = -1;
	int8_t x318 = 1;
	volatile int16_t x319 = INT16_MAX;
	static volatile int32_t t67 = -1321083;

	t67 = (((x317|x318)+x319)-x320);

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x321 = INT8_MIN;
	int8_t x322 = 0;
	int8_t x323 = INT8_MIN;
	volatile int32_t t68 = 3;

	t68 = (((x321|x322)+x323)-x324);

	if (t68 != 32512) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x327 = -1LL;

	t69 = (((x325|x326)+x327)-x328);

	if (t69 != 18446744073511562903LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x329 = 451411;
	int64_t x330 = 517000359LL;
	static int64_t x331 = INT64_MIN;
	int8_t x332 = -1;
	int64_t t70 = 1215329381823798LL;

	t70 = (((x329|x330)+x331)-x332);

	if (t70 != -9223372036337373192LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x333 = INT16_MAX;
	int64_t x334 = -1LL;
	static int32_t x335 = INT32_MAX;
	uint16_t x336 = 5396U;

	t71 = (((x333|x334)+x335)-x336);

	if (t71 != 2147478250LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x337 = UINT64_MAX;
	int64_t x339 = -3869258999573468249LL;
	static uint8_t x340 = 34U;

	t72 = (((x337|x338)+x339)-x340);

	if (t72 != 14577485074136083332LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x345 = -1;
	uint16_t x346 = 1169U;
	static int8_t x348 = INT8_MIN;

	t73 = (((x345|x346)+x347)-x348);

	if (t73 != 120) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x349 = INT32_MAX;
	int64_t x350 = 512192439LL;
	int16_t x352 = INT16_MIN;
	static volatile int64_t t74 = -2983261286860652LL;

	t74 = (((x349|x350)+x351)-x352);

	if (t74 != 2147483647LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x353 = INT64_MIN;
	static uint8_t x354 = 4U;
	uint16_t x355 = 2U;
	int32_t x356 = INT32_MIN;

	t75 = (((x353|x354)+x355)-x356);

	if (t75 != -9223372034707292154LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x357 = 1U;
	static volatile int64_t x358 = -786555745LL;
	int64_t x359 = INT64_MAX;
	volatile int16_t x360 = INT16_MIN;

	t76 = (((x357|x358)+x359)-x360);

	if (t76 != 9223372036068252830LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x361 = INT8_MIN;
	uint64_t x362 = UINT64_MAX;
	static int64_t x363 = INT64_MIN;
	uint32_t x364 = 51046U;

	t77 = (((x361|x362)+x363)-x364);

	if (t77 != 9223372036854724761LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x366 = -2307;
	int8_t x368 = INT8_MIN;
	int64_t t78 = 361871664546LL;

	t78 = (((x365|x366)+x367)-x368);

	if (t78 != 9223372036854773630LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x370 = 674431732245LLU;
	uint8_t x372 = 0U;
	uint64_t t79 = 398750880622828437LLU;

	t79 = (((x369|x370)+x371)-x372);

	if (t79 != 674431699479LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x374 = -1LL;
	int16_t x375 = -1;
	volatile int64_t x376 = -102602881LL;
	int64_t t80 = -37LL;

	t80 = (((x373|x374)+x375)-x376);

	if (t80 != 102602879LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x377 = INT64_MIN;
	int64_t x378 = INT64_MAX;
	volatile uint64_t x380 = 6465190867064932LLU;
	static uint64_t t81 = 15474LLU;

	t81 = (((x377|x378)+x379)-x380);

	if (t81 != 18440278880695003035LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x381 = -1;
	uint32_t x382 = 1690U;
	volatile int64_t t82 = -315968446LL;

	t82 = (((x381|x382)+x383)-x384);

	if (t82 != 2644346910LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x385 = -15;
	uint16_t x387 = 8479U;
	int64_t x388 = -1999938964471034LL;
	static volatile int64_t t83 = -86355560892324LL;

	t83 = (((x385|x386)+x387)-x388);

	if (t83 != 1999938964479504LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x389 = INT8_MAX;
	static int32_t x390 = -10313;
	int16_t x391 = INT16_MIN;
	volatile uint32_t x392 = UINT32_MAX;

	t84 = (((x389|x390)+x391)-x392);

	if (t84 != 4294924288U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x393 = -2;
	volatile uint8_t x394 = 11U;
	uint64_t x395 = UINT64_MAX;
	int8_t x396 = INT8_MAX;
	volatile uint64_t t85 = 961LLU;

	t85 = (((x393|x394)+x395)-x396);

	if (t85 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x398 = 741311LLU;
	int32_t x399 = -1;
	int8_t x400 = INT8_MIN;
	uint64_t t86 = 1401LLU;

	t86 = (((x397|x398)+x399)-x400);

	if (t86 != 62LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x406 = 465U;
	int64_t x407 = INT64_MIN;
	uint32_t x408 = 5U;

	t87 = (((x405|x406)+x407)-x408);

	if (t87 != -9223372036854775302LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x409 = INT8_MAX;
	int8_t x410 = -4;
	volatile uint64_t x411 = 130240889598LLU;
	volatile int8_t x412 = INT8_MIN;
	volatile uint64_t t88 = 58093209LLU;

	t88 = (((x409|x410)+x411)-x412);

	if (t88 != 130240889725LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x414 = -28;
	int64_t x415 = 2007LL;
	int32_t x416 = 119724;
	int64_t t89 = 478767LL;

	t89 = (((x413|x414)+x415)-x416);

	if (t89 != -117726LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x417 = 1U;
	volatile int64_t x418 = INT64_MIN;
	volatile int16_t x419 = INT16_MAX;
	volatile uint16_t x420 = 3U;
	static volatile int64_t t90 = -5112949088088324LL;

	t90 = (((x417|x418)+x419)-x420);

	if (t90 != -9223372036854743043LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x421 = INT64_MIN;
	int16_t x422 = -89;
	volatile uint64_t x423 = 1LLU;
	int32_t x424 = -608471;

	t91 = (((x421|x422)+x423)-x424);

	if (t91 != 608383LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x425 = 3U;
	volatile uint8_t x426 = 9U;
	uint64_t x427 = 654LLU;
	uint16_t x428 = 1U;
	volatile uint64_t t92 = 7641LLU;

	t92 = (((x425|x426)+x427)-x428);

	if (t92 != 664LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x432 = 7U;
	int64_t t93 = -146010817LL;

	t93 = (((x429|x430)+x431)-x432);

	if (t93 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x433 = UINT64_MAX;
	int16_t x434 = INT16_MIN;
	uint32_t x435 = 1367975U;
	uint64_t t94 = 1LLU;

	t94 = (((x433|x434)+x435)-x436);

	if (t94 != 1367847LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x438 = UINT32_MAX;
	uint8_t x439 = UINT8_MAX;
	int32_t x440 = -4672503;
	uint32_t t95 = 106518379U;

	t95 = (((x437|x438)+x439)-x440);

	if (t95 != 4672757U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x449 = 2446096755LLU;
	static volatile int32_t x450 = -36556;
	int32_t x451 = -1;

	t96 = (((x449|x450)+x451)-x452);

	if (t96 != 5430309LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x453 = 11348;
	uint16_t x454 = 0U;
	int64_t x455 = INT64_MIN;
	static volatile uint8_t x456 = UINT8_MAX;

	t97 = (((x453|x454)+x455)-x456);

	if (t97 != -9223372036854764715LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x457 = INT8_MAX;
	static int8_t x458 = INT8_MIN;
	uint16_t x459 = 1114U;
	int8_t x460 = INT8_MIN;

	t98 = (((x457|x458)+x459)-x460);

	if (t98 != 1241) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x465 = 2U;
	static uint8_t x466 = 18U;
	int32_t x467 = -412325;
	static volatile uint64_t x468 = 3LLU;
	volatile uint64_t t99 = 88875778LLU;

	t99 = (((x465|x466)+x467)-x468);

	if (t99 != 18446744073709139306LLU) { NG(); } else { ; }
	
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

