#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
static int8_t x3 = 25;
uint8_t x8 = 110U;
static volatile uint32_t x9 = UINT32_MAX;
uint8_t x16 = 12U;
int8_t x19 = INT8_MIN;
int64_t x20 = -627482170698LL;
volatile int8_t x23 = INT8_MAX;
int8_t x26 = INT8_MIN;
static volatile int32_t t6 = 7;
int64_t x29 = INT64_MIN;
volatile int64_t x31 = INT64_MIN;
int16_t x39 = -1;
int16_t x40 = INT16_MIN;
volatile int32_t t9 = 523574;
uint64_t x44 = 503569LLU;
volatile uint64_t t10 = 464559LLU;
static volatile int16_t x49 = INT16_MAX;
volatile int8_t x50 = 2;
int8_t x55 = INT8_MIN;
int64_t t15 = 25LL;
int64_t x66 = INT64_MIN;
uint16_t x69 = 42U;
int8_t x81 = 3;
int32_t t20 = 421;
uint64_t t21 = 370290LLU;
uint64_t x91 = UINT64_MAX;
volatile int32_t t23 = 141436310;
int32_t x102 = INT32_MIN;
uint16_t x103 = 11U;
static int64_t x117 = -62046LL;
static int8_t x118 = -1;
static int32_t x123 = -1;
uint16_t x126 = 1U;
int64_t x135 = INT64_MIN;
int32_t x140 = -19;
int32_t t34 = 622;
volatile int16_t x148 = INT16_MAX;
uint64_t t36 = 756759LLU;
static int16_t x153 = -1;
static uint64_t x154 = 89504214LLU;
uint8_t x156 = 3U;
static int32_t x163 = INT32_MIN;
int16_t x165 = INT16_MIN;
uint32_t x166 = 16686572U;
static uint16_t x171 = 34U;
int32_t x178 = INT32_MIN;
static uint8_t x179 = 1U;
static volatile uint32_t x182 = UINT32_MAX;
static volatile int64_t x183 = 57170213523426LL;
int64_t x185 = INT64_MIN;
int32_t x193 = -1863525;
static uint16_t x212 = 12U;
int8_t x218 = INT8_MIN;
int64_t x219 = INT64_MIN;
static volatile int32_t x225 = INT32_MIN;
int8_t x228 = 23;
volatile uint64_t t57 = 2LLU;
uint64_t x243 = 28609858615LLU;
int16_t x247 = INT16_MIN;
int32_t x253 = INT32_MAX;
static int64_t x258 = INT64_MIN;
volatile uint64_t t64 = 2087359444020LLU;
volatile int16_t x266 = INT16_MIN;
static int8_t x270 = -1;
static volatile int64_t x272 = INT64_MIN;
int64_t t67 = -15979307LL;
volatile int32_t x282 = INT32_MAX;
uint64_t x291 = 1LLU;
volatile uint8_t x293 = 14U;
static volatile uint64_t t73 = 398367967544900LLU;
int64_t x298 = 3566517738169458708LL;
uint64_t x300 = 185799013399143LLU;
volatile int32_t x301 = -283364808;
int32_t x308 = 87728;
volatile int32_t t76 = -1131863;
volatile int32_t t78 = -331669;
static int16_t x326 = -20;
int16_t x330 = INT16_MIN;
int64_t x332 = -1LL;
int16_t x345 = 800;
uint16_t x354 = 0U;
int16_t x357 = -1;
static uint16_t x359 = 1806U;
int8_t x363 = INT8_MIN;
int16_t x369 = -103;
static uint16_t x375 = 75U;
volatile int32_t t93 = 1;
int16_t x384 = -20;
int64_t x385 = INT64_MIN;
static uint64_t x387 = 54896LLU;
uint32_t x390 = 6869U;
uint64_t t96 = 1572687329LLU;
volatile int64_t x394 = -1LL;
static volatile int32_t x397 = INT32_MAX;
uint32_t x404 = 92U;


void f0(void) {
	int32_t x1 = 5388;
	uint32_t x4 = 381184U;
	uint32_t t0 = 12921242U;

	t0 = (((x1==x2)+x3)%x4);

	if (t0 != 25U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = 61;
	static volatile int16_t x7 = 1;
	volatile int32_t t1 = -100751947;

	t1 = (((x5==x6)+x7)%x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x10 = 81U;
	static int32_t x11 = 21;
	volatile int8_t x12 = INT8_MAX;
	int32_t t2 = 169135;

	t2 = (((x9==x10)+x11)%x12);

	if (t2 != 21) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 21;
	volatile int16_t x14 = 888;
	int16_t x15 = 13;
	static int32_t t3 = 341736130;

	t3 = (((x13==x14)+x15)%x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 182;
	int32_t x18 = -9815;
	volatile int64_t t4 = 9LL;

	t4 = (((x17==x18)+x19)%x20);

	if (t4 != -128LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 150855868264LLU;
	int16_t x22 = -9007;
	int64_t x24 = -1LL;
	static volatile int64_t t5 = -177LL;

	t5 = (((x21==x22)+x23)%x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint16_t x27 = 5559U;
	uint16_t x28 = UINT16_MAX;

	t6 = (((x25==x26)+x27)%x28);

	if (t6 != 5559) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x30 = UINT32_MAX;
	static int32_t x32 = -1;
	volatile int64_t t7 = 121364LL;

	t7 = (((x29==x30)+x31)%x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	uint8_t x34 = 1U;
	volatile int64_t x35 = -1LL;
	static uint16_t x36 = UINT16_MAX;
	int64_t t8 = -19434197208357828LL;

	t8 = (((x33==x34)+x35)%x36);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	int64_t x38 = 234900582584389LL;

	t9 = (((x37==x38)+x39)%x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int32_t x42 = INT32_MIN;
	volatile uint32_t x43 = UINT32_MAX;

	t10 = (((x41==x42)+x43)%x44);

	if (t10 != 27294LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 304585LL;
	static int64_t x46 = 9954440LL;
	static int32_t x47 = INT32_MIN;
	int16_t x48 = -8;
	int32_t t11 = 353676;

	t11 = (((x45==x46)+x47)%x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x51 = 64U;
	volatile int8_t x52 = -1;
	uint32_t t12 = 771531805U;

	t12 = (((x49==x50)+x51)%x52);

	if (t12 != 64U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	volatile int32_t x54 = -828;
	int8_t x56 = INT8_MAX;
	volatile int32_t t13 = 0;

	t13 = (((x53==x54)+x55)%x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = -1;
	uint64_t x58 = UINT64_MAX;
	int16_t x59 = 65;
	uint8_t x60 = UINT8_MAX;
	int32_t t14 = -125797287;

	t14 = (((x57==x58)+x59)%x60);

	if (t14 != 66) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 30193528056LLU;
	int64_t x62 = -1LL;
	volatile uint32_t x63 = 2014148032U;
	volatile int64_t x64 = -3400362694260768LL;

	t15 = (((x61==x62)+x63)%x64);

	if (t15 != 2014148032LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 47U;
	int32_t x67 = INT32_MAX;
	int64_t x68 = INT64_MIN;
	volatile int64_t t16 = 2361766565212LL;

	t16 = (((x65==x66)+x67)%x68);

	if (t16 != 2147483647LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x70 = -206024690;
	volatile int32_t x71 = INT32_MIN;
	volatile int16_t x72 = -15688;
	static int32_t t17 = -6;

	t17 = (((x69==x70)+x71)%x72);

	if (t17 != -392) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = 90U;
	uint32_t x74 = 9289482U;
	int8_t x75 = -1;
	static int64_t x76 = -1LL;
	volatile int64_t t18 = 44460668389LL;

	t18 = (((x73==x74)+x75)%x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int64_t x78 = INT64_MIN;
	int64_t x79 = -1LL;
	int8_t x80 = -1;
	int64_t t19 = 113821LL;

	t19 = (((x77==x78)+x79)%x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x82 = 4LLU;
	uint8_t x83 = UINT8_MAX;
	uint8_t x84 = UINT8_MAX;

	t20 = (((x81==x82)+x83)%x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MIN;
	uint16_t x86 = UINT16_MAX;
	uint64_t x87 = UINT64_MAX;
	int8_t x88 = INT8_MAX;

	t21 = (((x85==x86)+x87)%x88);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MAX;
	uint64_t x90 = 44265LLU;
	static int64_t x92 = 34607730LL;
	volatile uint64_t t22 = 78664838LLU;

	t22 = (((x89==x90)+x91)%x92);

	if (t22 != 29341875LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x93 = 5U;
	uint32_t x94 = 231704021U;
	static uint16_t x95 = 0U;
	int32_t x96 = -1;

	t23 = (((x93==x94)+x95)%x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = -5;
	static int64_t x98 = 568LL;
	static volatile int16_t x99 = INT16_MIN;
	int64_t x100 = 7590LL;
	int64_t t24 = -299900146872000LL;

	t24 = (((x97==x98)+x99)%x100);

	if (t24 != -2408LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -54497805666378060LL;
	static uint8_t x104 = 7U;
	static volatile int32_t t25 = -503319993;

	t25 = (((x101==x102)+x103)%x104);

	if (t25 != 4) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	static int8_t x106 = 14;
	static int16_t x107 = INT16_MIN;
	int64_t x108 = -1LL;
	int64_t t26 = -953810986LL;

	t26 = (((x105==x106)+x107)%x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = 379871958U;
	int32_t x110 = 7;
	int8_t x111 = INT8_MIN;
	uint8_t x112 = 25U;
	static int32_t t27 = 894233410;

	t27 = (((x109==x110)+x111)%x112);

	if (t27 != -3) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 1548107713060620999LLU;
	int32_t x114 = -1513949;
	int32_t x115 = 269861297;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = -1032799;

	t28 = (((x113==x114)+x115)%x116);

	if (t28 != 49) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x119 = 15155U;
	uint32_t x120 = 109U;
	uint32_t t29 = 1U;

	t29 = (((x117==x118)+x119)%x120);

	if (t29 != 4U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 344231490U;
	uint8_t x122 = UINT8_MAX;
	static int16_t x124 = -1;
	volatile int32_t t30 = 54184332;

	t30 = (((x121==x122)+x123)%x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	int32_t x127 = INT32_MIN;
	static uint32_t x128 = 1U;
	static volatile uint32_t t31 = 1567418U;

	t31 = (((x125==x126)+x127)%x128);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	int8_t x130 = INT8_MIN;
	static uint16_t x131 = 185U;
	int8_t x132 = -4;
	static int32_t t32 = -3268;

	t32 = (((x129==x130)+x131)%x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MAX;
	int16_t x134 = INT16_MAX;
	int16_t x136 = INT16_MIN;
	volatile int64_t t33 = -1LL;

	t33 = (((x133==x134)+x135)%x136);

	if (t33 != -32767LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	volatile int64_t x138 = INT64_MIN;
	static int16_t x139 = INT16_MIN;

	t34 = (((x137==x138)+x139)%x140);

	if (t34 != -12) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	uint8_t x142 = 3U;
	static int16_t x143 = -1351;
	uint64_t x144 = 7LLU;
	uint64_t t35 = 9640416LLU;

	t35 = (((x141==x142)+x143)%x144);

	if (t35 != 2LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 879484185664659579LL;
	static int64_t x146 = -1LL;
	uint64_t x147 = UINT64_MAX;

	t36 = (((x145==x146)+x147)%x148);

	if (t36 != 15LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MIN;
	int32_t x150 = INT32_MIN;
	static int64_t x151 = INT64_MIN;
	int8_t x152 = -1;
	volatile int64_t t37 = -7784LL;

	t37 = (((x149==x150)+x151)%x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x155 = 0U;
	volatile int32_t t38 = -3860;

	t38 = (((x153==x154)+x155)%x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	int32_t x158 = INT32_MAX;
	uint64_t x159 = 105645997763470LLU;
	static volatile int8_t x160 = -19;
	uint64_t t39 = 727345039593LLU;

	t39 = (((x157==x158)+x159)%x160);

	if (t39 != 105645997763470LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 389768039U;
	int8_t x162 = 1;
	volatile uint16_t x164 = 145U;
	volatile int32_t t40 = 1;

	t40 = (((x161==x162)+x163)%x164);

	if (t40 != -8) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x167 = 471824128;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = 4453738;

	t41 = (((x165==x166)+x167)%x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int8_t x170 = -1;
	uint32_t x172 = 7487335U;
	uint32_t t42 = 278289832U;

	t42 = (((x169==x170)+x171)%x172);

	if (t42 != 34U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	static uint16_t x174 = 964U;
	int8_t x175 = INT8_MAX;
	static int64_t x176 = INT64_MAX;
	volatile int64_t t43 = 13333405810LL;

	t43 = (((x173==x174)+x175)%x176);

	if (t43 != 127LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -3;
	static int8_t x180 = INT8_MIN;
	int32_t t44 = 2;

	t44 = (((x177==x178)+x179)%x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = UINT8_MAX;
	uint16_t x184 = UINT16_MAX;
	volatile int64_t t45 = 1740114103LL;

	t45 = (((x181==x182)+x183)%x184);

	if (t45 != 65061LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = 17841092316412439LL;
	static volatile int16_t x187 = 4706;
	static int8_t x188 = INT8_MAX;
	int32_t t46 = -5963577;

	t46 = (((x185==x186)+x187)%x188);

	if (t46 != 7) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	volatile int32_t x190 = INT32_MAX;
	int8_t x191 = INT8_MIN;
	volatile int32_t x192 = -1;
	volatile int32_t t47 = 802;

	t47 = (((x189==x190)+x191)%x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = INT16_MAX;
	int8_t x195 = -1;
	int64_t x196 = INT64_MAX;
	volatile int64_t t48 = 55LL;

	t48 = (((x193==x194)+x195)%x196);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 211072U;
	int16_t x198 = -1;
	int16_t x199 = -51;
	volatile int32_t x200 = INT32_MIN;
	static int32_t t49 = 444751;

	t49 = (((x197==x198)+x199)%x200);

	if (t49 != -51) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -2;
	int32_t x202 = -392753;
	uint8_t x203 = UINT8_MAX;
	int8_t x204 = -1;
	int32_t t50 = -208081;

	t50 = (((x201==x202)+x203)%x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = -459;
	volatile int32_t x206 = -1;
	static int32_t x207 = INT32_MIN;
	volatile uint32_t x208 = 179U;
	volatile uint32_t t51 = 12556U;

	t51 = (((x205==x206)+x207)%x208);

	if (t51 != 63U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 60481U;
	int8_t x210 = -12;
	int16_t x211 = INT16_MAX;
	int32_t t52 = 5;

	t52 = (((x209==x210)+x211)%x212);

	if (t52 != 7) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = INT16_MIN;
	static int32_t x214 = INT32_MAX;
	static int32_t x215 = 72260;
	static uint16_t x216 = 9U;
	volatile int32_t t53 = -979;

	t53 = (((x213==x214)+x215)%x216);

	if (t53 != 8) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x217 = 6LLU;
	volatile int64_t x220 = -1LL;
	volatile int64_t t54 = -533164265760LL;

	t54 = (((x217==x218)+x219)%x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 190811287LL;
	uint32_t x222 = 12681U;
	volatile int8_t x223 = INT8_MIN;
	int32_t x224 = -169036;
	int32_t t55 = -15;

	t55 = (((x221==x222)+x223)%x224);

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = -119;
	uint64_t x227 = 905684LLU;
	volatile uint64_t t56 = 71916852LLU;

	t56 = (((x225==x226)+x227)%x228);

	if (t56 != 13LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	int64_t x230 = -12272016922992465LL;
	int32_t x231 = -1;
	uint64_t x232 = 3544692740334253LLU;

	t57 = (((x229==x230)+x231)%x232);

	if (t57 != 163053010099003LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = INT8_MIN;
	static int8_t x234 = INT8_MIN;
	uint8_t x235 = UINT8_MAX;
	uint8_t x236 = UINT8_MAX;
	int32_t t58 = -2091826;

	t58 = (((x233==x234)+x235)%x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	uint16_t x238 = 659U;
	static uint16_t x239 = 1U;
	volatile int16_t x240 = INT16_MAX;
	volatile int32_t t59 = -18181385;

	t59 = (((x237==x238)+x239)%x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	uint64_t x242 = 808476065133939LLU;
	int64_t x244 = INT64_MAX;
	uint64_t t60 = 1460061427049033645LLU;

	t60 = (((x241==x242)+x243)%x244);

	if (t60 != 28609858615LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = -1;
	int16_t x246 = INT16_MAX;
	static uint16_t x248 = 6855U;
	static int32_t t61 = -31700715;

	t61 = (((x245==x246)+x247)%x248);

	if (t61 != -5348) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x249 = UINT32_MAX;
	volatile int64_t x250 = INT64_MAX;
	uint8_t x251 = 46U;
	static int16_t x252 = INT16_MIN;
	volatile int32_t t62 = -1289;

	t62 = (((x249==x250)+x251)%x252);

	if (t62 != 46) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x254 = 39375U;
	static int32_t x255 = INT32_MIN;
	int16_t x256 = INT16_MAX;
	int32_t t63 = 37251600;

	t63 = (((x253==x254)+x255)%x256);

	if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 60;
	uint16_t x259 = 22U;
	static uint64_t x260 = 94818LLU;

	t64 = (((x257==x258)+x259)%x260);

	if (t64 != 22LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x261 = UINT16_MAX;
	uint64_t x262 = 6433559351043152LLU;
	volatile uint64_t x263 = 24512028170LLU;
	int16_t x264 = INT16_MIN;
	uint64_t t65 = 584LLU;

	t65 = (((x261==x262)+x263)%x264);

	if (t65 != 24512028170LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x265 = 1;
	static volatile int8_t x267 = INT8_MIN;
	volatile uint16_t x268 = 12617U;
	volatile int32_t t66 = 850;

	t66 = (((x265==x266)+x267)%x268);

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = -1;
	int8_t x271 = INT8_MAX;

	t67 = (((x269==x270)+x271)%x272);

	if (t67 != 128LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	int8_t x274 = -1;
	volatile uint8_t x275 = UINT8_MAX;
	volatile int8_t x276 = INT8_MIN;
	volatile int32_t t68 = -848;

	t68 = (((x273==x274)+x275)%x276);

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 720083U;
	uint16_t x278 = 23U;
	int8_t x279 = -1;
	int16_t x280 = -1;
	int32_t t69 = 49873747;

	t69 = (((x277==x278)+x279)%x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	static volatile uint8_t x283 = 41U;
	int8_t x284 = 1;
	int32_t t70 = -24;

	t70 = (((x281==x282)+x283)%x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x285 = 5U;
	volatile int16_t x286 = 62;
	volatile uint64_t x287 = 373383LLU;
	int32_t x288 = -113270;
	volatile uint64_t t71 = 548876198977217LLU;

	t71 = (((x285==x286)+x287)%x288);

	if (t71 != 373383LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = 0;
	int8_t x290 = INT8_MAX;
	volatile int32_t x292 = -1996440;
	static uint64_t t72 = 8266629LLU;

	t72 = (((x289==x290)+x291)%x292);

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x294 = UINT8_MAX;
	int16_t x295 = 3;
	uint64_t x296 = UINT64_MAX;

	t73 = (((x293==x294)+x295)%x296);

	if (t73 != 3LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 2161657959903LLU;
	uint16_t x299 = 146U;
	uint64_t t74 = 64538LLU;

	t74 = (((x297==x298)+x299)%x300);

	if (t74 != 146LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x302 = -1LL;
	uint64_t x303 = 60501018257LLU;
	int64_t x304 = INT64_MIN;
	static uint64_t t75 = 96LLU;

	t75 = (((x301==x302)+x303)%x304);

	if (t75 != 60501018257LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = -1;
	static int32_t x306 = -1310598;
	volatile int16_t x307 = -114;

	t76 = (((x305==x306)+x307)%x308);

	if (t76 != -114) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -12;
	volatile uint32_t x310 = UINT32_MAX;
	static volatile uint16_t x311 = 6943U;
	int16_t x312 = INT16_MIN;
	int32_t t77 = -2652354;

	t77 = (((x309==x310)+x311)%x312);

	if (t77 != 6943) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	uint16_t x314 = UINT16_MAX;
	static uint8_t x315 = 1U;
	int32_t x316 = INT32_MAX;

	t78 = (((x313==x314)+x315)%x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -11233;
	static int16_t x318 = INT16_MIN;
	int16_t x319 = INT16_MAX;
	int8_t x320 = INT8_MIN;
	static volatile int32_t t79 = -16;

	t79 = (((x317==x318)+x319)%x320);

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x321 = 88203LLU;
	int8_t x322 = 50;
	int64_t x323 = 49209LL;
	volatile int8_t x324 = INT8_MAX;
	static int64_t t80 = -10317782594289LL;

	t80 = (((x321==x322)+x323)%x324);

	if (t80 != 60LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MAX;
	static int64_t x327 = INT64_MIN;
	int32_t x328 = INT32_MAX;
	static int64_t t81 = 9808260946368LL;

	t81 = (((x325==x326)+x327)%x328);

	if (t81 != -2LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = INT8_MIN;
	int64_t x331 = -1LL;
	static volatile int64_t t82 = -1059519011968LL;

	t82 = (((x329==x330)+x331)%x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 14322005291771LL;
	int64_t x334 = INT64_MIN;
	int32_t x335 = -1;
	static int8_t x336 = -30;
	volatile int32_t t83 = 34887;

	t83 = (((x333==x334)+x335)%x336);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = INT16_MIN;
	static volatile uint8_t x338 = 5U;
	static uint32_t x339 = UINT32_MAX;
	int8_t x340 = INT8_MAX;
	uint32_t t84 = 237545U;

	t84 = (((x337==x338)+x339)%x340);

	if (t84 != 15U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = 7;
	int32_t x342 = -1;
	uint32_t x343 = 5604772U;
	int16_t x344 = INT16_MAX;
	volatile uint32_t t85 = 6996922U;

	t85 = (((x341==x342)+x343)%x344);

	if (t85 != 1615U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x346 = UINT16_MAX;
	static volatile uint64_t x347 = 385467388LLU;
	uint16_t x348 = UINT16_MAX;
	uint64_t t86 = 395015179897LLU;

	t86 = (((x345==x346)+x347)%x348);

	if (t86 != 56053LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 6U;
	int32_t x350 = INT32_MAX;
	volatile int64_t x351 = -1LL;
	volatile int64_t x352 = INT64_MIN;
	volatile int64_t t87 = -230602243LL;

	t87 = (((x349==x350)+x351)%x352);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 399LLU;
	uint16_t x355 = UINT16_MAX;
	volatile int8_t x356 = -1;
	static volatile int32_t t88 = -16039;

	t88 = (((x353==x354)+x355)%x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x358 = 2256LLU;
	int8_t x360 = -1;
	volatile int32_t t89 = -100222;

	t89 = (((x357==x358)+x359)%x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x361 = UINT8_MAX;
	int8_t x362 = INT8_MIN;
	volatile uint8_t x364 = 41U;
	volatile int32_t t90 = -97;

	t90 = (((x361==x362)+x363)%x364);

	if (t90 != -5) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x365 = 12892203LLU;
	static uint8_t x366 = 22U;
	int32_t x367 = -1;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t91 = -112659;

	t91 = (((x365==x366)+x367)%x368);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x370 = 150161014374LLU;
	int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MIN;
	volatile int64_t t92 = 6146151513LL;

	t92 = (((x369==x370)+x371)%x372);

	if (t92 != -32768LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	uint16_t x374 = 2U;
	static uint16_t x376 = 1502U;

	t93 = (((x373==x374)+x375)%x376);

	if (t93 != 75) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x381 = -241490LL;
	uint64_t x382 = 12002438720806LLU;
	volatile int64_t x383 = INT64_MAX;
	int64_t t94 = 21LL;

	t94 = (((x381==x382)+x383)%x384);

	if (t94 != 7LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x386 = 828946776U;
	uint8_t x388 = UINT8_MAX;
	uint64_t t95 = 130907425LLU;

	t95 = (((x385==x386)+x387)%x388);

	if (t95 != 71LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x389 = -44;
	uint64_t x391 = UINT64_MAX;
	int16_t x392 = INT16_MAX;

	t96 = (((x389==x390)+x391)%x392);

	if (t96 != 15LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x393 = 557726698LL;
	static int32_t x395 = INT32_MAX;
	static volatile uint64_t x396 = 840524LLU;
	uint64_t t97 = 2834897222421LLU;

	t97 = (((x393==x394)+x395)%x396);

	if (t97 != 785351LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x398 = INT64_MAX;
	int32_t x399 = INT32_MIN;
	volatile int64_t x400 = INT64_MIN;
	volatile int64_t t98 = 315146171014193LL;

	t98 = (((x397==x398)+x399)%x400);

	if (t98 != -2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x401 = UINT8_MAX;
	uint8_t x402 = UINT8_MAX;
	static int16_t x403 = -4005;
	volatile uint32_t t99 = 1U;

	t99 = (((x401==x402)+x403)%x404);

	if (t99 != 56U) { NG(); } else { ; }
	
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
