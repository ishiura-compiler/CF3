#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x6 = INT16_MAX;
int8_t x17 = 12;
int8_t x19 = INT8_MIN;
volatile int32_t x23 = INT32_MAX;
uint64_t x27 = 184549467LLU;
int32_t x32 = INT32_MIN;
static volatile uint64_t t7 = 48239673797066895LLU;
static uint8_t x33 = 21U;
int16_t x34 = -14;
static uint16_t x46 = 62U;
int16_t x47 = INT16_MAX;
int64_t x48 = INT64_MIN;
int64_t t11 = INT64_MIN;
int8_t x50 = -1;
volatile int64_t x52 = INT64_MAX;
int64_t t12 = INT64_MAX;
int8_t x53 = 1;
uint8_t x55 = 17U;
uint32_t x56 = 62U;
uint16_t x84 = 6U;
uint32_t x98 = 12110U;
volatile int64_t x107 = INT64_MAX;
volatile int64_t t26 = -1543049157LL;
volatile uint8_t x109 = UINT8_MAX;
int16_t x116 = 0;
volatile int8_t x120 = INT8_MIN;
int16_t x121 = INT16_MAX;
int16_t x122 = INT16_MAX;
int32_t x124 = INT32_MAX;
int16_t x125 = -529;
int16_t x127 = -15553;
int32_t x135 = INT32_MIN;
uint32_t x147 = 2U;
uint8_t x156 = 0U;
uint64_t t40 = 2650665LLU;
int64_t x168 = INT64_MIN;
uint8_t x169 = UINT8_MAX;
int64_t x170 = -24LL;
int8_t x171 = INT8_MAX;
volatile int32_t t42 = -6605;
int8_t x174 = 0;
uint32_t x181 = 1764091U;
uint64_t x188 = UINT64_MAX;
volatile uint64_t t46 = UINT64_MAX;
int64_t x192 = -424206451242LL;
static uint16_t x196 = 2U;
static uint16_t x208 = 976U;
int64_t x209 = -2LL;
int64_t x212 = INT64_MIN;
int64_t t52 = INT64_MIN;
uint8_t x213 = UINT8_MAX;
volatile int32_t t57 = -14443;
uint8_t x238 = 5U;
static int64_t x243 = -54526437395687LL;
uint64_t x245 = UINT64_MAX;
uint32_t x250 = 13689U;
static uint8_t x251 = UINT8_MAX;
int32_t x256 = -7796263;
uint8_t x257 = 0U;
volatile int64_t x260 = INT64_MIN;
int8_t x261 = INT8_MAX;
int64_t x263 = INT64_MIN;
int32_t x266 = -472;
uint64_t t67 = 5196228LLU;
uint32_t x275 = 12U;
volatile uint64_t t70 = 2LLU;
int8_t x289 = INT8_MIN;
int16_t x293 = -2887;
static int32_t t74 = -723306;
uint8_t x304 = 114U;
int16_t x306 = 3;
int16_t x307 = -88;
uint32_t x308 = UINT32_MAX;
int64_t x309 = -1LL;
volatile int32_t t78 = 734766;
volatile int32_t t80 = INT32_MIN;
int8_t x329 = 10;
static int8_t x338 = INT8_MIN;
uint16_t x340 = UINT16_MAX;
int32_t x348 = 0;
int64_t x349 = INT64_MAX;
int16_t x351 = -2824;
static volatile int32_t t87 = 1134;
int16_t x355 = -6540;
volatile uint32_t x362 = 40500214U;
int8_t x366 = INT8_MAX;
int64_t x372 = INT64_MIN;
static volatile uint32_t x390 = 3193201U;
int32_t t96 = -195;
int32_t x396 = INT32_MIN;
uint16_t x397 = UINT16_MAX;
int8_t x399 = -22;
int8_t x402 = INT8_MIN;
volatile uint16_t x404 = UINT16_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int16_t x2 = INT16_MIN;
	volatile int64_t x3 = INT64_MAX;
	volatile uint8_t x4 = UINT8_MAX;
	volatile int64_t t0 = -1LL;

	t0 = (((x1==x2)*x3)+x4);

	if (t0 != 255LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static int64_t x7 = 51184193664913LL;
	uint64_t x8 = UINT64_MAX;
	uint64_t t1 = UINT64_MAX;

	t1 = (((x5==x6)*x7)+x8);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	static uint16_t x10 = UINT16_MAX;
	uint64_t x11 = 6308147695700LLU;
	uint16_t x12 = UINT16_MAX;
	volatile uint64_t t2 = 44623539861966LLU;

	t2 = (((x9==x10)*x11)+x12);

	if (t2 != 65535LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x13 = 3U;
	volatile int32_t x14 = -1;
	volatile int16_t x15 = INT16_MIN;
	static int64_t x16 = -496741LL;
	volatile int64_t t3 = -8491080LL;

	t3 = (((x13==x14)*x15)+x16);

	if (t3 != -496741LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = -3040519;

	t4 = (((x17==x18)*x19)+x20);

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 468U;
	int64_t x22 = INT64_MIN;
	static int32_t x24 = -1;
	int32_t t5 = 1;

	t5 = (((x21==x22)*x23)+x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 3501U;
	static int32_t x26 = INT32_MAX;
	uint8_t x28 = UINT8_MAX;
	uint64_t t6 = 54772LLU;

	t6 = (((x25==x26)*x27)+x28);

	if (t6 != 255LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 208336;
	uint64_t x30 = 905627874695133969LLU;
	uint64_t x31 = 239050764087858088LLU;

	t7 = (((x29==x30)*x31)+x32);

	if (t7 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x35 = UINT16_MAX;
	static int16_t x36 = -649;
	volatile int32_t t8 = -615835678;

	t8 = (((x33==x34)*x35)+x36);

	if (t8 != -649) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 50680LLU;
	int8_t x38 = -57;
	uint64_t x39 = UINT64_MAX;
	volatile int8_t x40 = INT8_MAX;
	volatile uint64_t t9 = 2334847LLU;

	t9 = (((x37==x38)*x39)+x40);

	if (t9 != 127LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	uint16_t x42 = UINT16_MAX;
	uint64_t x43 = 101688175938LLU;
	int32_t x44 = INT32_MIN;
	static uint64_t t10 = 109LLU;

	t10 = (((x41==x42)*x43)+x44);

	if (t10 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = 2;

	t11 = (((x45==x46)*x47)+x48);

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	static uint32_t x51 = 5U;

	t12 = (((x49==x50)*x51)+x52);

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = INT8_MIN;
	uint32_t t13 = 5357U;

	t13 = (((x53==x54)*x55)+x56);

	if (t13 != 62U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -50278425;
	volatile uint16_t x58 = UINT16_MAX;
	static int32_t x59 = -1;
	volatile int16_t x60 = -1;
	int32_t t14 = -60240733;

	t14 = (((x57==x58)*x59)+x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	uint64_t x62 = 2688868879LLU;
	uint8_t x63 = 126U;
	int64_t x64 = INT64_MIN;
	int64_t t15 = INT64_MIN;

	t15 = (((x61==x62)*x63)+x64);

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = -1;
	static int32_t x66 = INT32_MAX;
	volatile int32_t x67 = -1;
	uint32_t x68 = UINT32_MAX;
	static uint32_t t16 = UINT32_MAX;

	t16 = (((x65==x66)*x67)+x68);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	int16_t x70 = -1;
	uint32_t x71 = 881U;
	volatile int16_t x72 = INT16_MAX;
	uint32_t t17 = 3U;

	t17 = (((x69==x70)*x71)+x72);

	if (t17 != 32767U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = 26946U;
	int16_t x74 = INT16_MAX;
	int8_t x75 = -1;
	int8_t x76 = INT8_MIN;
	int32_t t18 = 1;

	t18 = (((x73==x74)*x75)+x76);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MIN;
	uint32_t x78 = UINT32_MAX;
	uint32_t x79 = 72U;
	uint16_t x80 = 444U;
	uint32_t t19 = 14632U;

	t19 = (((x77==x78)*x79)+x80);

	if (t19 != 444U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int16_t x82 = INT16_MIN;
	static int8_t x83 = -12;
	volatile int32_t t20 = -63096985;

	t20 = (((x81==x82)*x83)+x84);

	if (t20 != 6) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x85 = -1152919766215LL;
	int8_t x86 = INT8_MAX;
	int8_t x87 = INT8_MIN;
	static uint32_t x88 = 355961U;
	uint32_t t21 = 1390U;

	t21 = (((x85==x86)*x87)+x88);

	if (t21 != 355961U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	int16_t x90 = 0;
	volatile int64_t x91 = INT64_MIN;
	volatile int32_t x92 = -115;
	volatile int64_t t22 = -2661696412542812308LL;

	t22 = (((x89==x90)*x91)+x92);

	if (t22 != -115LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 2086321281U;
	int64_t x94 = -19LL;
	volatile uint8_t x95 = 1U;
	int8_t x96 = -21;
	volatile int32_t t23 = -787;

	t23 = (((x93==x94)*x95)+x96);

	if (t23 != -21) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = INT8_MIN;
	uint16_t x99 = UINT16_MAX;
	static int16_t x100 = INT16_MIN;
	volatile int32_t t24 = -949705541;

	t24 = (((x97==x98)*x99)+x100);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 3748U;
	uint32_t x102 = 495761U;
	int8_t x103 = INT8_MIN;
	int8_t x104 = 18;
	volatile int32_t t25 = -1;

	t25 = (((x101==x102)*x103)+x104);

	if (t25 != 18) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	static uint16_t x106 = 386U;
	uint8_t x108 = 2U;

	t26 = (((x105==x106)*x107)+x108);

	if (t26 != 2LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = INT16_MIN;
	uint8_t x111 = 0U;
	int8_t x112 = 0;
	static int32_t t27 = -471558;

	t27 = (((x109==x110)*x111)+x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 125LLU;
	uint8_t x114 = 2U;
	int64_t x115 = -221321414LL;
	static volatile int64_t t28 = -5009474280692012LL;

	t28 = (((x113==x114)*x115)+x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x117 = 1507266378089292039LLU;
	static int8_t x118 = INT8_MIN;
	volatile int32_t x119 = INT32_MAX;
	int32_t t29 = -441;

	t29 = (((x117==x118)*x119)+x120);

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x123 = 10106390008315LLU;
	volatile uint64_t t30 = 739LLU;

	t30 = (((x121==x122)*x123)+x124);

	if (t30 != 10108537491962LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = 89900416;
	volatile uint8_t x128 = 27U;
	int32_t t31 = 7355164;

	t31 = (((x125==x126)*x127)+x128);

	if (t31 != 27) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = -1LL;
	volatile int32_t x130 = INT32_MIN;
	uint16_t x131 = 1U;
	volatile uint8_t x132 = 0U;
	int32_t t32 = 114160650;

	t32 = (((x129==x130)*x131)+x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = INT64_MIN;
	int64_t x134 = INT64_MAX;
	uint32_t x136 = 600U;
	uint32_t t33 = 2U;

	t33 = (((x133==x134)*x135)+x136);

	if (t33 != 600U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 6844135;
	static volatile uint32_t x138 = 963108U;
	int32_t x139 = INT32_MAX;
	volatile uint16_t x140 = 11U;
	volatile int32_t t34 = 5;

	t34 = (((x137==x138)*x139)+x140);

	if (t34 != 11) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -9LL;
	int16_t x142 = 4239;
	int16_t x143 = INT16_MAX;
	int16_t x144 = -1;
	volatile int32_t t35 = 105640;

	t35 = (((x141==x142)*x143)+x144);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = -1;
	uint64_t x146 = 465316LLU;
	static int32_t x148 = INT32_MAX;
	uint32_t t36 = 384260249U;

	t36 = (((x145==x146)*x147)+x148);

	if (t36 != 2147483647U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 74U;
	int16_t x150 = INT16_MAX;
	volatile int8_t x151 = INT8_MAX;
	int8_t x152 = INT8_MAX;
	int32_t t37 = 4081;

	t37 = (((x149==x150)*x151)+x152);

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	uint16_t x154 = 117U;
	volatile int16_t x155 = INT16_MAX;
	volatile int32_t t38 = 480435418;

	t38 = (((x153==x154)*x155)+x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	static uint16_t x158 = 58U;
	volatile int32_t x159 = INT32_MIN;
	int32_t x160 = INT32_MIN;
	int32_t t39 = INT32_MIN;

	t39 = (((x157==x158)*x159)+x160);

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 107477962515LLU;
	int16_t x162 = INT16_MAX;
	volatile uint64_t x163 = 0LLU;
	uint16_t x164 = 394U;

	t40 = (((x161==x162)*x163)+x164);

	if (t40 != 394LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1428122709802243LL;
	uint64_t x166 = UINT64_MAX;
	int32_t x167 = INT32_MIN;
	volatile int64_t t41 = INT64_MIN;

	t41 = (((x165==x166)*x167)+x168);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x172 = 109U;

	t42 = (((x169==x170)*x171)+x172);

	if (t42 != 109) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	uint8_t x175 = UINT8_MAX;
	int64_t x176 = INT64_MIN;
	int64_t t43 = INT64_MIN;

	t43 = (((x173==x174)*x175)+x176);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	int64_t x178 = -1LL;
	static volatile uint16_t x179 = UINT16_MAX;
	static volatile int8_t x180 = -5;
	int32_t t44 = 709;

	t44 = (((x177==x178)*x179)+x180);

	if (t44 != 65530) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = -1;
	volatile int64_t x183 = INT64_MIN;
	int16_t x184 = 3921;
	int64_t t45 = -42781LL;

	t45 = (((x181==x182)*x183)+x184);

	if (t45 != 3921LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	volatile uint16_t x186 = UINT16_MAX;
	int32_t x187 = 49172028;

	t46 = (((x185==x186)*x187)+x188);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int64_t x190 = INT64_MAX;
	uint32_t x191 = UINT32_MAX;
	int64_t t47 = -1458722265969039149LL;

	t47 = (((x189==x190)*x191)+x192);

	if (t47 != -424206451242LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 0;
	int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MAX;
	int32_t t48 = -6305;

	t48 = (((x193==x194)*x195)+x196);

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	int8_t x198 = INT8_MIN;
	int16_t x199 = INT16_MIN;
	int16_t x200 = 13848;
	static volatile int32_t t49 = -40210543;

	t49 = (((x197==x198)*x199)+x200);

	if (t49 != 13848) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 24379680U;
	int16_t x202 = INT16_MAX;
	static uint64_t x203 = 3596LLU;
	static volatile int64_t x204 = 618789525LL;
	static volatile uint64_t t50 = 7706282079LLU;

	t50 = (((x201==x202)*x203)+x204);

	if (t50 != 618789525LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x205 = 75070281LLU;
	int32_t x206 = INT32_MIN;
	int64_t x207 = -1LL;
	volatile int64_t t51 = -1367427051386LL;

	t51 = (((x205==x206)*x207)+x208);

	if (t51 != 976LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x210 = INT32_MIN;
	uint16_t x211 = UINT16_MAX;

	t52 = (((x209==x210)*x211)+x212);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x214 = INT16_MIN;
	uint64_t x215 = 9LLU;
	uint32_t x216 = 7U;
	volatile uint64_t t53 = 7863585735868LLU;

	t53 = (((x213==x214)*x215)+x216);

	if (t53 != 7LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MIN;
	uint8_t x218 = UINT8_MAX;
	int8_t x219 = INT8_MIN;
	volatile int16_t x220 = INT16_MAX;
	int32_t t54 = -469;

	t54 = (((x217==x218)*x219)+x220);

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MAX;
	int16_t x222 = -1;
	uint16_t x223 = 70U;
	static volatile int8_t x224 = -1;
	int32_t t55 = -1427;

	t55 = (((x221==x222)*x223)+x224);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 1642212155508462LL;
	int64_t x226 = INT64_MIN;
	int32_t x227 = 1732;
	uint32_t x228 = 85U;
	volatile uint32_t t56 = 213253U;

	t56 = (((x225==x226)*x227)+x228);

	if (t56 != 85U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 30523LLU;
	volatile uint16_t x230 = UINT16_MAX;
	uint8_t x231 = 6U;
	int8_t x232 = 0;

	t57 = (((x229==x230)*x231)+x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	int64_t x234 = INT64_MAX;
	int64_t x235 = -1LL;
	uint8_t x236 = 61U;
	int64_t t58 = 3LL;

	t58 = (((x233==x234)*x235)+x236);

	if (t58 != 61LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = 2;
	static int32_t x239 = -1;
	uint16_t x240 = 8U;
	static int32_t t59 = 1;

	t59 = (((x237==x238)*x239)+x240);

	if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	static int32_t x242 = INT32_MAX;
	uint16_t x244 = 11U;
	int64_t t60 = -1295363544636LL;

	t60 = (((x241==x242)*x243)+x244);

	if (t60 != 11LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = -1;
	static volatile uint8_t x247 = 6U;
	uint32_t x248 = 39613U;
	uint32_t t61 = 1U;

	t61 = (((x245==x246)*x247)+x248);

	if (t61 != 39619U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	volatile int32_t x252 = -1;
	volatile int32_t t62 = 1;

	t62 = (((x249==x250)*x251)+x252);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 1005246640LLU;
	volatile int8_t x254 = 1;
	uint16_t x255 = 57U;
	int32_t t63 = 12502;

	t63 = (((x253==x254)*x255)+x256);

	if (t63 != -7796263) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x258 = 117070413417296LLU;
	int8_t x259 = 3;
	int64_t t64 = INT64_MIN;

	t64 = (((x257==x258)*x259)+x260);

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x262 = -1LL;
	volatile uint64_t x264 = UINT64_MAX;
	uint64_t t65 = UINT64_MAX;

	t65 = (((x261==x262)*x263)+x264);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x265 = 6U;
	volatile int64_t x267 = -509960754947270542LL;
	int16_t x268 = INT16_MAX;
	int64_t t66 = 340871LL;

	t66 = (((x265==x266)*x267)+x268);

	if (t66 != 32767LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int8_t x270 = 63;
	int16_t x271 = INT16_MAX;
	static uint64_t x272 = 2186950850265LLU;

	t67 = (((x269==x270)*x271)+x272);

	if (t67 != 2186950850265LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = 3;
	static volatile int8_t x274 = INT8_MAX;
	static int16_t x276 = -23;
	volatile uint32_t t68 = 0U;

	t68 = (((x273==x274)*x275)+x276);

	if (t68 != 4294967273U) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = -1;
	int8_t x278 = INT8_MIN;
	int64_t x279 = INT64_MIN;
	uint64_t x280 = UINT64_MAX;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (((x277==x278)*x279)+x280);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 1LL;
	int64_t x282 = INT64_MIN;
	volatile uint8_t x283 = 0U;
	static uint64_t x284 = 2LLU;

	t70 = (((x281==x282)*x283)+x284);

	if (t70 != 2LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -277LL;
	int8_t x286 = -1;
	int32_t x287 = INT32_MIN;
	uint64_t x288 = 2934189100573981LLU;
	volatile uint64_t t71 = 1136323LLU;

	t71 = (((x285==x286)*x287)+x288);

	if (t71 != 2934189100573981LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x290 = -1;
	int32_t x291 = -1;
	int8_t x292 = -7;
	int32_t t72 = 7779482;

	t72 = (((x289==x290)*x291)+x292);

	if (t72 != -7) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = INT16_MAX;
	static int16_t x295 = -6713;
	volatile uint64_t x296 = 110285LLU;
	uint64_t t73 = 245506933398LLU;

	t73 = (((x293==x294)*x295)+x296);

	if (t73 != 110285LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = 1927793286177LL;
	int32_t x298 = INT32_MAX;
	static int8_t x299 = INT8_MAX;
	volatile int8_t x300 = -1;

	t74 = (((x297==x298)*x299)+x300);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = 1;
	volatile int16_t x302 = -1;
	static int32_t x303 = INT32_MIN;
	volatile int32_t t75 = -1352579;

	t75 = (((x301==x302)*x303)+x304);

	if (t75 != 114) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 181769222U;
	volatile uint32_t t76 = UINT32_MAX;

	t76 = (((x305==x306)*x307)+x308);

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x310 = 51468710U;
	int16_t x311 = 1;
	int32_t x312 = INT32_MIN;
	static volatile int32_t t77 = INT32_MIN;

	t77 = (((x309==x310)*x311)+x312);

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 0U;
	static int64_t x314 = -1056LL;
	uint8_t x315 = 0U;
	int8_t x316 = INT8_MAX;

	t78 = (((x313==x314)*x315)+x316);

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 1002LLU;
	int32_t x318 = INT32_MIN;
	int64_t x319 = 1965492125LL;
	int8_t x320 = INT8_MIN;
	static int64_t t79 = 3140LL;

	t79 = (((x317==x318)*x319)+x320);

	if (t79 != -128LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 1591U;
	static uint64_t x322 = 272062LLU;
	int32_t x323 = 405884;
	int32_t x324 = INT32_MIN;

	t80 = (((x321==x322)*x323)+x324);

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 4943576U;
	int16_t x326 = -369;
	int8_t x327 = 1;
	static int32_t x328 = -1;
	volatile int32_t t81 = 5963358;

	t81 = (((x325==x326)*x327)+x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = INT8_MAX;
	int8_t x331 = -2;
	int32_t x332 = 781767368;
	volatile int32_t t82 = -37840065;

	t82 = (((x329==x330)*x331)+x332);

	if (t82 != 781767368) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 162U;
	uint8_t x334 = 5U;
	uint8_t x335 = 28U;
	int8_t x336 = INT8_MIN;
	volatile int32_t t83 = 1;

	t83 = (((x333==x334)*x335)+x336);

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = UINT32_MAX;
	int32_t x339 = -954624;
	int32_t t84 = 424417993;

	t84 = (((x337==x338)*x339)+x340);

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = INT32_MAX;
	volatile int8_t x342 = 3;
	static int8_t x343 = INT8_MAX;
	static int64_t x344 = INT64_MAX;
	volatile int64_t t85 = INT64_MAX;

	t85 = (((x341==x342)*x343)+x344);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	static volatile uint32_t x346 = 1791472U;
	volatile int16_t x347 = INT16_MIN;
	volatile int32_t t86 = 175343730;

	t86 = (((x345==x346)*x347)+x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x350 = INT16_MIN;
	int16_t x352 = INT16_MIN;

	t87 = (((x349==x350)*x351)+x352);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = INT64_MIN;
	int64_t x354 = 4601063861777LL;
	volatile uint32_t x356 = 1888U;
	uint32_t t88 = 771U;

	t88 = (((x353==x354)*x355)+x356);

	if (t88 != 1888U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	int32_t x358 = -1;
	int8_t x359 = INT8_MAX;
	uint32_t x360 = 783304U;
	volatile uint32_t t89 = 948U;

	t89 = (((x357==x358)*x359)+x360);

	if (t89 != 783431U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	static uint16_t x363 = 30U;
	volatile int16_t x364 = INT16_MAX;
	volatile int32_t t90 = 24;

	t90 = (((x361==x362)*x363)+x364);

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = INT32_MAX;
	int8_t x367 = INT8_MAX;
	int8_t x368 = INT8_MAX;
	int32_t t91 = -729;

	t91 = (((x365==x366)*x367)+x368);

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	int16_t x370 = 18;
	static uint32_t x371 = 95176U;
	volatile int64_t t92 = INT64_MIN;

	t92 = (((x369==x370)*x371)+x372);

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x377 = INT16_MIN;
	uint8_t x378 = 89U;
	static int8_t x379 = -1;
	uint64_t x380 = UINT64_MAX;
	uint64_t t93 = UINT64_MAX;

	t93 = (((x377==x378)*x379)+x380);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x381 = 3945403746851300LLU;
	int32_t x382 = -1;
	int16_t x383 = 0;
	static int64_t x384 = 104450LL;
	volatile int64_t t94 = 25034981LL;

	t94 = (((x381==x382)*x383)+x384);

	if (t94 != 104450LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x385 = 465154396132124LL;
	static int16_t x386 = INT16_MIN;
	uint16_t x387 = 9511U;
	int32_t x388 = INT32_MIN;
	static int32_t t95 = INT32_MIN;

	t95 = (((x385==x386)*x387)+x388);

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x389 = 10669;
	int16_t x391 = -8287;
	int8_t x392 = INT8_MIN;

	t96 = (((x389==x390)*x391)+x392);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x393 = UINT64_MAX;
	volatile int16_t x394 = INT16_MAX;
	uint8_t x395 = 1U;
	volatile int32_t t97 = INT32_MIN;

	t97 = (((x393==x394)*x395)+x396);

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x398 = 24;
	volatile uint8_t x400 = 123U;
	int32_t t98 = 0;

	t98 = (((x397==x398)*x399)+x400);

	if (t98 != 123) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x401 = 337822;
	int8_t x403 = INT8_MIN;
	int32_t t99 = -13006;

	t99 = (((x401==x402)*x403)+x404);

	if (t99 != 65535) { NG(); } else { ; }
	
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

