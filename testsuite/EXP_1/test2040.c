#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 6712301U;
static uint32_t x3 = UINT32_MAX;
uint32_t x13 = 437329425U;
uint16_t x15 = UINT16_MAX;
static volatile uint16_t x19 = UINT16_MAX;
static uint64_t t4 = 218859LLU;
volatile uint32_t x24 = UINT32_MAX;
int8_t x26 = INT8_MAX;
uint64_t t7 = 2401165179367413LLU;
volatile int64_t t8 = -534077697162LL;
uint64_t x39 = 1155LLU;
volatile uint16_t x40 = 6U;
int16_t x41 = INT16_MAX;
static int32_t x42 = INT32_MAX;
int64_t t11 = -2125280339897LL;
int8_t x52 = INT8_MAX;
uint64_t t12 = 1041059942LLU;
volatile uint64_t t13 = 4387544LLU;
static volatile uint64_t t14 = 3LLU;
uint8_t x64 = UINT8_MAX;
int64_t t15 = -185362806702475LL;
static volatile int32_t t16 = 84611311;
uint16_t x73 = 7U;
int64_t x75 = INT64_MIN;
static volatile int16_t x76 = INT16_MIN;
volatile int64_t t17 = 8801593327711LL;
volatile uint64_t t19 = UINT64_MAX;
int32_t x88 = INT32_MIN;
int64_t t21 = 2285590851LL;
int16_t x99 = INT16_MIN;
int16_t x108 = -1;
int64_t t25 = 3799971069759619LL;
int16_t x109 = -1;
int64_t x111 = 14LL;
int8_t x113 = -1;
uint64_t x121 = 1467539277364250450LLU;
int64_t x124 = -1LL;
volatile uint64_t t29 = UINT64_MAX;
uint32_t x126 = 15617266U;
uint8_t x132 = UINT8_MAX;
static volatile int32_t x134 = -1;
int64_t t32 = 2154LL;
volatile int64_t t33 = 45588705LL;
uint8_t x142 = UINT8_MAX;
static int32_t x144 = INT32_MIN;
uint8_t x147 = 126U;
uint32_t x156 = 789U;
int16_t x157 = 721;
static volatile uint8_t x161 = 8U;
volatile int32_t x178 = -1;
uint16_t x187 = UINT16_MAX;
uint16_t x199 = 1U;
volatile int8_t x201 = INT8_MIN;
static int16_t x206 = INT16_MAX;
int32_t x208 = -879;
uint16_t x210 = 1U;
uint64_t t50 = UINT64_MAX;
int64_t x224 = -1LL;
int16_t x241 = -1;
int32_t t55 = 1;
volatile int64_t x246 = 3LL;
int64_t t57 = -93592251351LL;
volatile int32_t t58 = -1178403;
uint16_t x258 = 6U;
volatile uint32_t t59 = 17899U;
volatile int16_t x261 = -1;
static int64_t x262 = INT64_MIN;
static uint16_t x266 = 1744U;
uint32_t x267 = 8706U;
uint32_t x268 = UINT32_MAX;
uint32_t x270 = 10U;
int8_t x271 = 1;
int64_t t64 = 79677597972LL;
uint16_t x292 = 54U;
int64_t x297 = -915680156438LL;
uint64_t x303 = UINT64_MAX;
uint64_t x305 = UINT64_MAX;
int32_t x309 = INT32_MIN;
volatile int8_t x313 = INT8_MIN;
uint8_t x318 = 1U;
static volatile int16_t x322 = INT16_MAX;
int32_t x323 = 208;
uint64_t t76 = UINT64_MAX;
static int16_t x334 = INT16_MIN;
int32_t t78 = -4954974;
int32_t x338 = -1;
volatile uint32_t x340 = 628994U;
int64_t x348 = INT64_MIN;
int64_t t81 = 4715LL;
int16_t x359 = -1;
volatile int32_t x360 = 778576;
volatile uint64_t t83 = 2189543271317219LLU;
static volatile uint16_t x365 = 106U;
int8_t x373 = -1;
static int8_t x376 = 0;
uint32_t x391 = 2736U;
int8_t x392 = -1;
static uint16_t x394 = 308U;
static uint32_t x402 = 0U;
int64_t t93 = -519LL;
static uint32_t x409 = 45522771U;
int64_t t94 = -88LL;
uint64_t x415 = UINT64_MAX;
uint64_t x423 = UINT64_MAX;
int8_t x427 = INT8_MIN;
static volatile uint32_t t99 = 4U;


void f0(void) {
	static int32_t x1 = 689509;
	int64_t x4 = 458472211335063006LL;
	int64_t t0 = -51412766LL;

	t0 = (((x1^x2)+x3)|x4);

	if (t0 != 458472211342159839LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static int16_t x6 = INT16_MIN;
	int8_t x7 = -1;
	int8_t x8 = -57;
	int32_t t1 = -439981974;

	t1 = (((x5^x6)+x7)|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	uint64_t x10 = UINT64_MAX;
	uint8_t x11 = UINT8_MAX;
	int32_t x12 = INT32_MIN;
	volatile uint64_t t2 = 1837913193914759LLU;

	t2 = (((x9^x10)+x11)|x12);

	if (t2 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = UINT64_MAX;
	static int32_t x16 = -1;
	uint64_t t3 = UINT64_MAX;

	t3 = (((x13^x14)+x15)|x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 7131818387651870LLU;
	static int8_t x18 = 1;
	uint32_t x20 = 61187465U;

	t4 = (((x17^x18)+x19)|x20);

	if (t4 != 7131818423729567LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = UINT16_MAX;
	int64_t x22 = INT64_MIN;
	static int32_t x23 = INT32_MAX;
	volatile int64_t t5 = 220097038LL;

	t5 = (((x21^x22)+x23)|x24);

	if (t5 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	uint64_t x27 = UINT64_MAX;
	static int32_t x28 = -805;
	uint64_t t6 = UINT64_MAX;

	t6 = (((x25^x26)+x27)|x28);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = -1;
	uint64_t x30 = 487549071LLU;
	uint32_t x31 = UINT32_MAX;
	uint64_t x32 = 51527376902933LLU;

	t7 = (((x29^x30)+x31)|x32);

	if (t7 != 51530598162303LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MAX;
	int64_t x34 = INT64_MIN;
	static volatile int32_t x35 = -5;
	int8_t x36 = -1;

	t8 = (((x33^x34)+x35)|x36);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -93LL;
	int8_t x38 = INT8_MIN;
	volatile uint64_t t9 = 41LLU;

	t9 = (((x37^x38)+x39)|x40);

	if (t9 != 1190LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x43 = 231U;
	int8_t x44 = INT8_MAX;
	volatile int32_t t10 = 58963443;

	t10 = (((x41^x42)+x43)|x44);

	if (t10 != 2147451135) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x45 = INT16_MIN;
	volatile int8_t x46 = 1;
	int64_t x47 = -1632165LL;
	int8_t x48 = INT8_MIN;

	t11 = (((x45^x46)+x47)|x48);

	if (t11 != -36LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x49 = INT32_MIN;
	int16_t x50 = -61;
	uint64_t x51 = 2292905LLU;

	t12 = (((x49^x50)+x51)|x52);

	if (t12 != 2149776511LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	uint32_t x54 = 11U;
	volatile uint64_t x55 = 11582273857693424LLU;
	int16_t x56 = 3;

	t13 = (((x53^x54)+x55)|x56);

	if (t13 != 11582276005177063LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 1009376392LLU;
	uint64_t x58 = 5738400619199LLU;
	volatile uint64_t x59 = UINT64_MAX;
	uint64_t x60 = 14691656459788LLU;

	t14 = (((x57^x58)+x59)|x60);

	if (t14 != 14829179889214LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -363424543592338LL;
	static volatile int16_t x62 = 7;
	volatile int64_t x63 = -1LL;

	t15 = (((x61^x62)+x63)|x64);

	if (t15 != -363424543592193LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = 342;
	static uint8_t x70 = 0U;
	int32_t x71 = INT32_MIN;
	volatile int32_t x72 = 10;

	t16 = (((x69^x70)+x71)|x72);

	if (t16 != -2147483298) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x74 = INT8_MAX;

	t17 = (((x73^x74)+x75)|x76);

	if (t17 != -32648LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MAX;
	static int16_t x78 = 610;
	static int64_t x79 = -1LL;
	int8_t x80 = INT8_MIN;
	volatile int64_t t18 = 82LL;

	t18 = (((x77^x78)+x79)|x80);

	if (t18 != -100LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MIN;
	static volatile uint64_t x82 = 2555LLU;
	uint8_t x83 = 3U;
	int64_t x84 = INT64_MAX;

	t19 = (((x81^x82)+x83)|x84);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MAX;
	static int16_t x86 = 29;
	uint64_t x87 = 4263733678261742LLU;
	volatile uint64_t t20 = 335967LLU;

	t20 = (((x85^x86)+x87)|x88);

	if (t20 != 18446744073093989840LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 3064U;
	int64_t x90 = 4384983236285901LL;
	uint16_t x91 = 100U;
	static uint8_t x92 = 1U;

	t21 = (((x89^x90)+x91)|x92);

	if (t21 != 4384983236288153LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x93 = UINT64_MAX;
	volatile int32_t x94 = INT32_MIN;
	uint64_t x95 = 241LLU;
	int64_t x96 = 2488240750858LL;
	volatile uint64_t t22 = 37313649346807LLU;

	t22 = (((x93^x94)+x95)|x96);

	if (t22 != 2490388234746LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = -1;
	uint16_t x98 = UINT16_MAX;
	int16_t x100 = -1;
	int32_t t23 = -14;

	t23 = (((x97^x98)+x99)|x100);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -26LL;
	uint8_t x102 = 104U;
	int8_t x103 = -1;
	uint8_t x104 = 2U;
	int64_t t24 = 169345218521300465LL;

	t24 = (((x101^x102)+x103)|x104);

	if (t24 != -113LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = -1LL;
	static int8_t x106 = INT8_MIN;
	uint16_t x107 = 60U;

	t25 = (((x105^x106)+x107)|x108);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x110 = INT8_MAX;
	int8_t x112 = -1;
	volatile int64_t t26 = 6367881609673069LL;

	t26 = (((x109^x110)+x111)|x112);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x114 = 1U;
	uint64_t x115 = 987LLU;
	volatile int64_t x116 = INT64_MIN;
	volatile uint64_t t27 = 820LLU;

	t27 = (((x113^x114)+x115)|x116);

	if (t27 != 9223372036854776793LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = 6583U;
	uint64_t x118 = 219318275LLU;
	int8_t x119 = 58;
	static uint8_t x120 = 0U;
	uint64_t t28 = 722909917043611940LLU;

	t28 = (((x117^x118)+x119)|x120);

	if (t28 != 219320814LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x122 = 2;
	uint32_t x123 = 5170U;

	t29 = (((x121^x122)+x123)|x124);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = UINT8_MAX;
	int32_t x127 = INT32_MAX;
	uint8_t x128 = 58U;
	uint32_t t30 = 960U;

	t30 = (((x125^x126)+x127)|x128);

	if (t30 != 2163100734U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = 852;
	volatile uint8_t x130 = 95U;
	volatile uint32_t x131 = UINT32_MAX;
	volatile uint32_t t31 = 254245610U;

	t31 = (((x129^x130)+x131)|x132);

	if (t31 != 1023U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x133 = INT8_MIN;
	int64_t x135 = 0LL;
	int8_t x136 = INT8_MAX;

	t32 = (((x133^x134)+x135)|x136);

	if (t32 != 127LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x137 = INT64_MIN;
	int16_t x138 = 1;
	uint8_t x139 = UINT8_MAX;
	uint32_t x140 = UINT32_MAX;

	t33 = (((x137^x138)+x139)|x140);

	if (t33 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x141 = INT64_MAX;
	int8_t x143 = -1;
	int64_t t34 = 8186772301495LL;

	t34 = (((x141^x142)+x143)|x144);

	if (t34 != -257LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 10707235U;
	int32_t x146 = -1;
	static int64_t x148 = -374304LL;
	volatile int64_t t35 = -204933LL;

	t35 = (((x145^x146)+x147)|x148);

	if (t35 != -73734LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = 3026U;
	uint8_t x150 = 24U;
	uint16_t x151 = 9U;
	static int8_t x152 = INT8_MIN;
	int32_t t36 = 333698;

	t36 = (((x149^x150)+x151)|x152);

	if (t36 != -45) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MIN;
	int64_t x154 = INT64_MAX;
	volatile uint8_t x155 = 80U;
	volatile int64_t t37 = 90111065476790LL;

	t37 = (((x153^x154)+x155)|x156);

	if (t37 != -9223372036854742177LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x158 = 6U;
	int16_t x159 = -1;
	volatile int16_t x160 = 16346;
	static int32_t t38 = 1066514198;

	t38 = (((x157^x158)+x159)|x160);

	if (t38 != 16350) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x162 = INT8_MAX;
	int64_t x163 = -1LL;
	static volatile int64_t x164 = INT64_MIN;
	static volatile int64_t t39 = -13732LL;

	t39 = (((x161^x162)+x163)|x164);

	if (t39 != -9223372036854775690LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = 57U;
	volatile int32_t x166 = -80749331;
	static uint16_t x167 = 0U;
	static int32_t x168 = INT32_MAX;
	int32_t t40 = -6155470;

	t40 = (((x165^x166)+x167)|x168);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = 4322LL;
	uint64_t x170 = UINT64_MAX;
	int64_t x171 = INT64_MIN;
	int8_t x172 = INT8_MAX;
	volatile uint64_t t41 = 213037461521191LLU;

	t41 = (((x169^x170)+x171)|x172);

	if (t41 != 9223372036854771583LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = 1312;
	uint16_t x174 = UINT16_MAX;
	int64_t x175 = -13781LL;
	static uint16_t x176 = 1U;
	int64_t t42 = 133877215316LL;

	t42 = (((x173^x174)+x175)|x176);

	if (t42 != 50443LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x177 = UINT64_MAX;
	int32_t x179 = -1;
	int32_t x180 = INT32_MIN;
	static volatile uint64_t t43 = UINT64_MAX;

	t43 = (((x177^x178)+x179)|x180);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x185 = 12U;
	static int64_t x186 = 41795905931LL;
	static int16_t x188 = INT16_MIN;
	int64_t t44 = -50156LL;

	t44 = (((x185^x186)+x187)|x188);

	if (t44 != -5754LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x189 = -2;
	uint32_t x190 = 384U;
	uint32_t x191 = UINT32_MAX;
	volatile int64_t x192 = -1LL;
	static int64_t t45 = 51LL;

	t45 = (((x189^x190)+x191)|x192);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x197 = 64612916308698140LLU;
	static uint8_t x198 = 6U;
	int32_t x200 = INT32_MIN;
	static volatile uint64_t t46 = 4214412809852249015LLU;

	t46 = (((x197^x198)+x199)|x200);

	if (t46 != 18446744073247876123LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x202 = 5;
	static int32_t x203 = -1;
	int64_t x204 = -1LL;
	volatile int64_t t47 = 7994LL;

	t47 = (((x201^x202)+x203)|x204);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x205 = 13523741U;
	int16_t x207 = INT16_MAX;
	static volatile uint32_t t48 = 429U;

	t48 = (((x205^x206)+x207)|x208);

	if (t48 != 4294966513U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = INT8_MAX;
	static int8_t x211 = 37;
	int8_t x212 = 0;
	int32_t t49 = -374771551;

	t49 = (((x209^x210)+x211)|x212);

	if (t49 != 163) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = INT8_MIN;
	static uint64_t x214 = 258600400700293655LLU;
	int8_t x215 = -26;
	volatile int8_t x216 = -1;

	t50 = (((x213^x214)+x215)|x216);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = 5024682014285374LL;
	uint16_t x218 = 33U;
	volatile int16_t x219 = 5;
	volatile uint32_t x220 = 639954076U;
	int64_t t51 = -48943273514LL;

	t51 = (((x217^x218)+x219)|x220);

	if (t51 != 5024682083811004LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x221 = 5173046U;
	static int32_t x222 = INT32_MIN;
	int8_t x223 = INT8_MIN;
	int64_t t52 = -974799538108176048LL;

	t52 = (((x221^x222)+x223)|x224);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = 0;
	int8_t x230 = INT8_MIN;
	volatile uint64_t x231 = 2LLU;
	int8_t x232 = INT8_MIN;
	static uint64_t t53 = 3407560027LLU;

	t53 = (((x229^x230)+x231)|x232);

	if (t53 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x233 = INT8_MAX;
	uint32_t x234 = UINT32_MAX;
	static volatile int8_t x235 = INT8_MIN;
	int16_t x236 = -3438;
	volatile uint32_t t54 = 95503U;

	t54 = (((x233^x234)+x235)|x236);

	if (t54 != 4294967186U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x242 = INT8_MAX;
	int16_t x243 = -503;
	volatile int32_t x244 = INT32_MIN;

	t55 = (((x241^x242)+x243)|x244);

	if (t55 != -631) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x245 = 4U;
	uint16_t x247 = 1U;
	int32_t x248 = INT32_MIN;
	static volatile int64_t t56 = -77767830214313LL;

	t56 = (((x245^x246)+x247)|x248);

	if (t56 != -2147483640LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x249 = INT8_MIN;
	int64_t x250 = INT64_MIN;
	static int8_t x251 = 1;
	int64_t x252 = -372264LL;

	t57 = (((x249^x250)+x251)|x252);

	if (t57 != -39LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = INT32_MAX;
	uint16_t x254 = UINT16_MAX;
	int16_t x255 = INT16_MIN;
	static int8_t x256 = INT8_MAX;

	t58 = (((x253^x254)+x255)|x256);

	if (t58 != 2147385471) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x257 = 21650U;
	static uint32_t x259 = 2U;
	volatile uint16_t x260 = 2670U;

	t59 = (((x257^x258)+x259)|x260);

	if (t59 != 24318U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x263 = 234LLU;
	uint32_t x264 = UINT32_MAX;
	uint64_t t60 = 69LLU;

	t60 = (((x261^x262)+x263)|x264);

	if (t60 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = -14458;
	uint32_t t61 = UINT32_MAX;

	t61 = (((x265^x266)+x267)|x268);

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = INT32_MIN;
	volatile int32_t x272 = -1;
	volatile uint32_t t62 = UINT32_MAX;

	t62 = (((x269^x270)+x271)|x272);

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = -1;
	int64_t x274 = -1LL;
	int64_t x275 = INT64_MIN;
	uint64_t x276 = 21515298589LLU;
	volatile uint64_t t63 = 3694426LLU;

	t63 = (((x273^x274)+x275)|x276);

	if (t63 != 9223372058370074397LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x277 = INT64_MIN;
	volatile int64_t x278 = 500909155LL;
	uint16_t x279 = 51U;
	static volatile int16_t x280 = -746;

	t64 = (((x277^x278)+x279)|x280);

	if (t64 != -618LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x281 = UINT16_MAX;
	int32_t x282 = INT32_MAX;
	static int16_t x283 = 943;
	uint32_t x284 = UINT32_MAX;
	uint32_t t65 = UINT32_MAX;

	t65 = (((x281^x282)+x283)|x284);

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x285 = 116U;
	int16_t x286 = -805;
	uint8_t x287 = 0U;
	uint64_t x288 = 3538407LLU;
	static uint64_t t66 = 6415LLU;

	t66 = (((x285^x286)+x287)|x288);

	if (t66 != 18446744073709551087LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x289 = INT16_MIN;
	int32_t x290 = 525427487;
	int64_t x291 = 15018LL;
	volatile int64_t t67 = -2411438156176678LL;

	t67 = (((x289^x290)+x291)|x292);

	if (t67 != -525394433LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x293 = 21332599330048140LL;
	uint64_t x294 = 24483659LLU;
	int8_t x295 = -27;
	uint64_t x296 = UINT64_MAX;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (((x293^x294)+x295)|x296);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x298 = 569;
	static int16_t x299 = -2810;
	int16_t x300 = -578;
	volatile int64_t t69 = 208525509136596545LL;

	t69 = (((x297^x298)+x299)|x300);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x301 = UINT64_MAX;
	uint32_t x302 = 3666721U;
	volatile int8_t x304 = 7;
	volatile uint64_t t70 = 6783LLU;

	t70 = (((x301^x302)+x303)|x304);

	if (t70 != 18446744073705884895LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x306 = -1;
	uint8_t x307 = 19U;
	volatile uint32_t x308 = UINT32_MAX;
	uint64_t t71 = 34LLU;

	t71 = (((x305^x306)+x307)|x308);

	if (t71 != 4294967295LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x310 = -1;
	uint32_t x311 = UINT32_MAX;
	volatile int16_t x312 = 0;
	static uint32_t t72 = 7U;

	t72 = (((x309^x310)+x311)|x312);

	if (t72 != 2147483646U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x314 = INT8_MIN;
	uint16_t x315 = 143U;
	static uint64_t x316 = 2051999732352299LLU;
	uint64_t t73 = 3927596465130132221LLU;

	t73 = (((x313^x314)+x315)|x316);

	if (t73 != 2051999732352431LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = INT16_MIN;
	int16_t x319 = INT16_MIN;
	int16_t x320 = INT16_MAX;
	volatile int32_t t74 = 186175;

	t74 = (((x317^x318)+x319)|x320);

	if (t74 != -32769) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x321 = UINT16_MAX;
	int8_t x324 = 22;
	static volatile int32_t t75 = -177616472;

	t75 = (((x321^x322)+x323)|x324);

	if (t75 != 32982) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x325 = -1;
	uint64_t x326 = UINT64_MAX;
	int32_t x327 = INT32_MIN;
	int64_t x328 = INT64_MAX;

	t76 = (((x325^x326)+x327)|x328);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x329 = INT64_MAX;
	uint16_t x330 = UINT16_MAX;
	uint16_t x331 = 0U;
	int8_t x332 = -1;
	int64_t t77 = 561343LL;

	t77 = (((x329^x330)+x331)|x332);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x333 = INT8_MAX;
	static uint16_t x335 = 12U;
	int16_t x336 = -1;

	t78 = (((x333^x334)+x335)|x336);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x337 = -1;
	volatile uint16_t x339 = 7755U;
	volatile uint32_t t79 = 20689U;

	t79 = (((x337^x338)+x339)|x340);

	if (t79 != 630603U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x341 = 225U;
	int8_t x342 = INT8_MIN;
	uint8_t x343 = 1U;
	int8_t x344 = INT8_MAX;
	volatile int32_t t80 = 59;

	t80 = (((x341^x342)+x343)|x344);

	if (t80 != -129) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x345 = INT8_MIN;
	volatile uint16_t x346 = 24U;
	uint16_t x347 = 5U;

	t81 = (((x345^x346)+x347)|x348);

	if (t81 != -99LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x349 = -1;
	uint16_t x350 = UINT16_MAX;
	int8_t x351 = INT8_MIN;
	uint32_t x352 = UINT32_MAX;
	uint32_t t82 = UINT32_MAX;

	t82 = (((x349^x350)+x351)|x352);

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x357 = UINT16_MAX;
	uint64_t x358 = 404402LLU;

	t83 = (((x357^x358)+x359)|x360);

	if (t83 != 1045852LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x361 = INT32_MIN;
	int32_t x362 = INT32_MIN;
	int8_t x363 = INT8_MIN;
	int32_t x364 = INT32_MIN;
	static volatile int32_t t84 = 16401;

	t84 = (((x361^x362)+x363)|x364);

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x366 = INT64_MIN;
	uint16_t x367 = 169U;
	int32_t x368 = INT32_MIN;
	static volatile int64_t t85 = -14403982064494LL;

	t85 = (((x365^x366)+x367)|x368);

	if (t85 != -2147483373LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x369 = INT8_MIN;
	int32_t x370 = 20398157;
	uint16_t x371 = 11949U;
	int8_t x372 = 2;
	static volatile int32_t t86 = 0;

	t86 = (((x369^x370)+x371)|x372);

	if (t86 != -20386182) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x374 = 14936752;
	int16_t x375 = -1;
	static volatile int32_t t87 = -11;

	t87 = (((x373^x374)+x375)|x376);

	if (t87 != -14936754) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x381 = INT64_MAX;
	static int8_t x382 = 26;
	static int8_t x383 = INT8_MIN;
	int8_t x384 = -1;
	int64_t t88 = -1391LL;

	t88 = (((x381^x382)+x383)|x384);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x389 = 271452;
	volatile int32_t x390 = -1;
	volatile uint32_t t89 = UINT32_MAX;

	t89 = (((x389^x390)+x391)|x392);

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x393 = INT64_MIN;
	volatile int8_t x395 = INT8_MIN;
	static uint32_t x396 = UINT32_MAX;
	int64_t t90 = 105LL;

	t90 = (((x393^x394)+x395)|x396);

	if (t90 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x397 = INT64_MIN;
	int16_t x398 = INT16_MAX;
	uint8_t x399 = 2U;
	uint32_t x400 = 192250U;
	int64_t t91 = -1031470652311LL;

	t91 = (((x397^x398)+x399)|x400);

	if (t91 != -9223372036854583557LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x401 = 127U;
	int32_t x403 = INT32_MIN;
	int32_t x404 = -1;
	volatile uint32_t t92 = UINT32_MAX;

	t92 = (((x401^x402)+x403)|x404);

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x405 = 55U;
	uint32_t x406 = 815444U;
	static volatile int64_t x407 = -1422107660936217LL;
	uint8_t x408 = 53U;

	t93 = (((x405^x406)+x407)|x408);

	if (t93 != -1422107660120705LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x410 = UINT16_MAX;
	int64_t x411 = -1LL;
	static int64_t x412 = -161296273624627767LL;

	t94 = (((x409^x410)+x411)|x412);

	if (t94 != -161296273612806677LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x413 = UINT8_MAX;
	uint64_t x414 = 98LLU;
	int8_t x416 = 1;
	volatile uint64_t t95 = 289737LLU;

	t95 = (((x413^x414)+x415)|x416);

	if (t95 != 157LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x417 = UINT64_MAX;
	int64_t x418 = -4108902590434LL;
	int64_t x419 = -1LL;
	volatile int64_t x420 = -1LL;
	static uint64_t t96 = UINT64_MAX;

	t96 = (((x417^x418)+x419)|x420);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x421 = 0LL;
	volatile int16_t x422 = INT16_MAX;
	uint64_t x424 = 11416169616LLU;
	volatile uint64_t t97 = 1297584LLU;

	t97 = (((x421^x422)+x423)|x424);

	if (t97 != 11416174590LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x425 = 527610987U;
	static int8_t x426 = INT8_MIN;
	int32_t x428 = -586862;
	volatile uint32_t t98 = 1102613U;

	t98 = (((x425^x426)+x427)|x428);

	if (t98 != 4294921211U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x433 = 3028U;
	static volatile int32_t x434 = INT32_MAX;
	int16_t x435 = INT16_MIN;
	int8_t x436 = INT8_MAX;

	t99 = (((x433^x434)+x435)|x436);

	if (t99 != 2147447935U) { NG(); } else { ; }
	
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

