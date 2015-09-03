#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x10 = 0U;
static int64_t x18 = INT64_MAX;
int8_t x20 = INT8_MIN;
int32_t t4 = -6263720;
int32_t x21 = INT32_MAX;
static uint32_t x23 = 53065196U;
int16_t x28 = INT16_MIN;
int16_t x29 = INT16_MAX;
volatile int8_t x34 = -1;
volatile int8_t x38 = INT8_MIN;
static volatile int32_t t10 = 3368;
volatile int8_t x45 = INT8_MIN;
uint16_t x48 = UINT16_MAX;
static volatile int16_t x51 = INT16_MAX;
static int32_t x56 = 0;
volatile int32_t t13 = 570672686;
uint32_t x59 = 15U;
int16_t x61 = INT16_MIN;
int8_t x72 = 0;
volatile int64_t x77 = 116017LL;
uint8_t x88 = 16U;
int32_t x89 = -1;
int32_t t22 = -978;
uint64_t x96 = 301595632565LLU;
static volatile int32_t x99 = -1;
uint64_t x100 = 24460018LLU;
static int64_t x108 = INT64_MIN;
static volatile uint32_t x116 = 1817009055U;
int16_t x123 = -1;
volatile int32_t t30 = 870020010;
static int32_t x125 = INT32_MAX;
volatile int8_t x128 = -1;
int16_t x137 = -1;
int8_t x140 = -2;
volatile int16_t x143 = 40;
int8_t x144 = INT8_MAX;
volatile int64_t x145 = 175731754880637902LL;
int16_t x148 = INT16_MAX;
int32_t x156 = -46;
int32_t t38 = 9;
uint32_t x158 = 3U;
int64_t x172 = 256804578722LL;
int32_t x173 = INT32_MIN;
uint16_t x177 = UINT16_MAX;
static volatile uint64_t x178 = 247004034LLU;
int8_t x181 = INT8_MAX;
static uint16_t x186 = UINT16_MAX;
volatile int16_t x192 = -1056;
volatile int64_t x196 = INT64_MAX;
int32_t t49 = -464;
uint64_t x202 = 722118759092LLU;
int64_t x208 = -1LL;
uint32_t x220 = UINT32_MAX;
uint32_t x224 = 8382U;
int32_t t55 = 1546;
volatile int8_t x226 = INT8_MIN;
volatile int16_t x228 = 0;
int16_t x230 = INT16_MIN;
volatile int32_t t57 = 479;
uint16_t x235 = 10649U;
static int16_t x237 = 0;
volatile uint32_t x240 = UINT32_MAX;
int16_t x242 = 41;
int32_t t60 = -7473;
uint16_t x254 = UINT16_MAX;
int8_t x258 = 4;
int8_t x259 = INT8_MAX;
uint16_t x261 = UINT16_MAX;
int32_t x262 = INT32_MIN;
volatile int32_t t66 = -15377;
int8_t x275 = INT8_MIN;
volatile uint8_t x281 = 0U;
volatile int32_t t70 = -53769;
volatile int16_t x288 = INT16_MIN;
static volatile uint16_t x292 = UINT16_MAX;
volatile int32_t t72 = 14287783;
int16_t x304 = 1377;
int32_t x307 = -80;
volatile uint32_t x308 = 105014627U;
int32_t t76 = -6540;
int64_t x310 = -1LL;
int32_t t78 = -97514554;
static uint8_t x318 = 11U;
int64_t x327 = -1LL;
volatile int32_t t81 = -1862;
volatile uint16_t x336 = 1294U;
uint32_t x341 = 89U;
static uint16_t x342 = 1U;
int32_t t85 = 46597;
int16_t x346 = -1;
uint8_t x347 = 47U;
int32_t x353 = -1556090;
int8_t x354 = INT8_MIN;
int64_t x355 = -1LL;
volatile int32_t t88 = -7080292;
volatile uint32_t x359 = 10U;
int64_t x361 = 3009542LL;
int32_t x362 = 10;
volatile int8_t x364 = -29;
uint16_t x372 = 1U;
uint32_t x375 = UINT32_MAX;
volatile uint8_t x380 = 1U;
static uint64_t x385 = UINT64_MAX;
int8_t x388 = INT8_MAX;
uint16_t x389 = 2U;
uint8_t x390 = 38U;
volatile int32_t x392 = -1;
int32_t t98 = 1561;
int32_t t99 = 2958838;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile int8_t x2 = INT8_MAX;
	volatile int8_t x3 = -1;
	int64_t x4 = -1LL;
	static int32_t t0 = 32;

	t0 = (((x1==x2)*x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	static int64_t x6 = INT64_MIN;
	static int64_t x7 = -1LL;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -18349157;

	t1 = (((x5==x6)*x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -32;
	int8_t x11 = INT8_MIN;
	int32_t x12 = -1;
	static int32_t t2 = -204;

	t2 = (((x9==x10)*x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int8_t x14 = 3;
	uint16_t x15 = UINT16_MAX;
	uint8_t x16 = 9U;
	volatile int32_t t3 = -1060827908;

	t3 = (((x13==x14)*x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MAX;
	volatile int8_t x19 = -1;

	t4 = (((x17==x18)*x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MIN;
	static int32_t x24 = -5;
	volatile int32_t t5 = -489018562;

	t5 = (((x21==x22)*x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 1;
	volatile uint64_t x26 = 304LLU;
	int32_t x27 = INT32_MIN;
	static int32_t t6 = -245818998;

	t6 = (((x25==x26)*x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = 3;
	int64_t x31 = INT64_MAX;
	uint8_t x32 = UINT8_MAX;
	volatile int32_t t7 = -5617;

	t7 = (((x29==x30)*x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 5U;
	int64_t x35 = 4400115479LL;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = -3;

	t8 = (((x33==x34)*x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 6U;
	int32_t x39 = INT32_MIN;
	int16_t x40 = -21;
	static volatile int32_t t9 = -370;

	t9 = (((x37==x38)*x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1840255300610843805LL;
	static uint8_t x42 = 0U;
	int64_t x43 = 27705029851248249LL;
	static volatile int64_t x44 = -1LL;

	t10 = (((x41==x42)*x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = 4065U;
	volatile uint16_t x47 = 23464U;
	volatile int32_t t11 = 25484650;

	t11 = (((x45==x46)*x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	static int32_t x50 = INT32_MIN;
	uint64_t x52 = 7039357684131474231LLU;
	static int32_t t12 = 7746273;

	t12 = (((x49==x50)*x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	uint16_t x54 = 126U;
	int16_t x55 = 60;

	t13 = (((x53==x54)*x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = -1;
	uint8_t x58 = 98U;
	uint32_t x60 = 28018744U;
	int32_t t14 = -53615;

	t14 = (((x57==x58)*x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x62 = INT16_MIN;
	uint32_t x63 = 35U;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = 1;

	t15 = (((x61==x62)*x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int16_t x66 = INT16_MIN;
	uint32_t x67 = 71U;
	int16_t x68 = -1;
	int32_t t16 = 14669;

	t16 = (((x65==x66)*x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MIN;
	int64_t x70 = -1LL;
	static uint8_t x71 = UINT8_MAX;
	int32_t t17 = 0;

	t17 = (((x69==x70)*x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x73 = 73892773256LLU;
	int8_t x74 = INT8_MAX;
	static volatile int16_t x75 = INT16_MIN;
	int64_t x76 = 105373238400904LL;
	volatile int32_t t18 = 7970513;

	t18 = (((x73==x74)*x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x78 = INT8_MAX;
	uint32_t x79 = 348833U;
	uint8_t x80 = UINT8_MAX;
	static volatile int32_t t19 = -257729;

	t19 = (((x77==x78)*x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	int16_t x82 = INT16_MAX;
	volatile uint8_t x83 = 5U;
	static uint16_t x84 = 1798U;
	static volatile int32_t t20 = 323;

	t20 = (((x81==x82)*x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	int64_t x86 = INT64_MIN;
	volatile int8_t x87 = -1;
	static volatile int32_t t21 = 10480075;

	t21 = (((x85==x86)*x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x90 = INT16_MIN;
	int8_t x91 = INT8_MAX;
	int16_t x92 = -11557;

	t22 = (((x89==x90)*x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int64_t x94 = -1LL;
	int8_t x95 = INT8_MIN;
	volatile int32_t t23 = -17;

	t23 = (((x93==x94)*x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 14758;
	uint8_t x98 = UINT8_MAX;
	int32_t t24 = 12845;

	t24 = (((x97==x98)*x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = -7916;
	static uint64_t x103 = 12962825821LLU;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = -137720800;

	t25 = (((x101==x102)*x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 7U;
	uint16_t x106 = 2755U;
	int16_t x107 = -1;
	int32_t t26 = -25325491;

	t26 = (((x105==x106)*x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = -1;
	static volatile uint8_t x110 = 7U;
	uint64_t x111 = 5794LLU;
	int32_t x112 = -56666;
	volatile int32_t t27 = 608069643;

	t27 = (((x109==x110)*x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	static int64_t x114 = INT64_MAX;
	int64_t x115 = INT64_MAX;
	int32_t t28 = 154;

	t28 = (((x113==x114)*x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = INT8_MIN;
	static volatile int64_t x118 = 9599LL;
	static int8_t x119 = -1;
	int32_t x120 = INT32_MIN;
	static volatile int32_t t29 = 335;

	t29 = (((x117==x118)*x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -3;
	volatile int8_t x122 = INT8_MAX;
	int8_t x124 = INT8_MAX;

	t30 = (((x121==x122)*x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = -2;
	volatile int16_t x127 = INT16_MAX;
	int32_t t31 = -4490917;

	t31 = (((x125==x126)*x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	int64_t x130 = -1LL;
	int16_t x131 = -1;
	int32_t x132 = INT32_MAX;
	static int32_t t32 = -187984;

	t32 = (((x129==x130)*x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 1690U;
	static int32_t x134 = -1;
	int32_t x135 = 1130537;
	volatile int16_t x136 = -1;
	volatile int32_t t33 = -7832;

	t33 = (((x133==x134)*x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x138 = UINT32_MAX;
	int8_t x139 = -3;
	volatile int32_t t34 = 16382;

	t34 = (((x137==x138)*x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	uint64_t x142 = 2367427086305952115LLU;
	int32_t t35 = 1986787;

	t35 = (((x141==x142)*x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MIN;
	int8_t x147 = 14;
	volatile int32_t t36 = 2;

	t36 = (((x145==x146)*x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x149 = UINT32_MAX;
	int64_t x150 = -1LL;
	uint16_t x151 = 7U;
	volatile uint32_t x152 = 573259278U;
	int32_t t37 = -189;

	t37 = (((x149==x150)*x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 39U;
	int16_t x154 = INT16_MAX;
	int32_t x155 = -1;

	t38 = (((x153==x154)*x155)<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = -167;
	uint8_t x159 = UINT8_MAX;
	static int32_t x160 = 9921463;
	volatile int32_t t39 = 26732131;

	t39 = (((x157==x158)*x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MAX;
	int64_t x162 = -1LL;
	volatile int64_t x163 = INT64_MAX;
	static uint32_t x164 = 1U;
	static int32_t t40 = 3975040;

	t40 = (((x161==x162)*x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	int32_t x166 = INT32_MIN;
	int64_t x167 = -208117060162639LL;
	volatile int32_t x168 = -516365896;
	volatile int32_t t41 = 1;

	t41 = (((x165==x166)*x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MIN;
	static volatile int8_t x171 = INT8_MAX;
	int32_t t42 = -73060773;

	t42 = (((x169==x170)*x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x174 = 52214617;
	int64_t x175 = INT64_MIN;
	int64_t x176 = INT64_MIN;
	volatile int32_t t43 = -98;

	t43 = (((x173==x174)*x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x179 = UINT64_MAX;
	int16_t x180 = -1;
	volatile int32_t t44 = -1570533;

	t44 = (((x177==x178)*x179)<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = UINT32_MAX;
	int16_t x183 = INT16_MIN;
	uint32_t x184 = UINT32_MAX;
	static volatile int32_t t45 = 19;

	t45 = (((x181==x182)*x183)<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 2U;
	uint16_t x187 = UINT16_MAX;
	int32_t x188 = INT32_MAX;
	static volatile int32_t t46 = -299;

	t46 = (((x185==x186)*x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = 997386;
	int64_t x190 = -6370702LL;
	volatile uint16_t x191 = 0U;
	volatile int32_t t47 = 11731905;

	t47 = (((x189==x190)*x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -66;
	int16_t x194 = INT16_MIN;
	uint16_t x195 = UINT16_MAX;
	int32_t t48 = 1;

	t48 = (((x193==x194)*x195)<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 2U;
	int16_t x198 = INT16_MIN;
	int16_t x199 = -117;
	int32_t x200 = INT32_MAX;

	t49 = (((x197==x198)*x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = 18307958792LL;
	volatile uint64_t x203 = 456LLU;
	static int16_t x204 = -1;
	int32_t t50 = 1;

	t50 = (((x201==x202)*x203)<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = 337;
	uint64_t x206 = 1604714225538LLU;
	int16_t x207 = -1;
	int32_t t51 = 146348;

	t51 = (((x205==x206)*x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 7362944015787704907LLU;
	static uint8_t x210 = 3U;
	int64_t x211 = INT64_MIN;
	static int16_t x212 = INT16_MIN;
	int32_t t52 = 1;

	t52 = (((x209==x210)*x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = INT8_MIN;
	uint16_t x214 = 7547U;
	uint32_t x215 = 618348959U;
	uint8_t x216 = 14U;
	volatile int32_t t53 = 2374;

	t53 = (((x213==x214)*x215)<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	int64_t x218 = -1LL;
	uint64_t x219 = 145949241LLU;
	int32_t t54 = -16832;

	t54 = (((x217==x218)*x219)<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -32;
	int64_t x222 = INT64_MIN;
	int64_t x223 = INT64_MIN;

	t55 = (((x221==x222)*x223)<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	uint32_t x227 = UINT32_MAX;
	volatile int32_t t56 = 32296;

	t56 = (((x225==x226)*x227)<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	uint8_t x231 = UINT8_MAX;
	int64_t x232 = -27674LL;

	t57 = (((x229==x230)*x231)<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	volatile int16_t x234 = INT16_MIN;
	volatile int32_t x236 = 1;
	volatile int32_t t58 = 243063365;

	t58 = (((x233==x234)*x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x238 = 1036U;
	static uint32_t x239 = 12673U;
	volatile int32_t t59 = 576517;

	t59 = (((x237==x238)*x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = -1;
	int16_t x243 = -1;
	int64_t x244 = 78959943546988LL;

	t60 = (((x241==x242)*x243)<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	int16_t x246 = -1;
	uint16_t x247 = UINT16_MAX;
	volatile int64_t x248 = INT64_MIN;
	volatile int32_t t61 = 173233;

	t61 = (((x245==x246)*x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x249 = UINT64_MAX;
	int32_t x250 = -2877056;
	uint64_t x251 = UINT64_MAX;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = -12;

	t62 = (((x249==x250)*x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	volatile uint8_t x255 = 10U;
	int32_t x256 = 70980;
	volatile int32_t t63 = -7;

	t63 = (((x253==x254)*x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	uint32_t x260 = 38322913U;
	volatile int32_t t64 = 34;

	t64 = (((x257==x258)*x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x263 = 2;
	static int64_t x264 = INT64_MAX;
	volatile int32_t t65 = 128241461;

	t65 = (((x261==x262)*x263)<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MAX;
	uint8_t x268 = UINT8_MAX;

	t66 = (((x265==x266)*x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = INT16_MAX;
	int32_t x271 = INT32_MIN;
	int16_t x272 = 177;
	int32_t t67 = -1697361;

	t67 = (((x269==x270)*x271)<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x273 = 18178U;
	uint32_t x274 = 374679U;
	volatile int64_t x276 = INT64_MIN;
	int32_t t68 = 69;

	t68 = (((x273==x274)*x275)<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	static int8_t x278 = INT8_MIN;
	int16_t x279 = -1;
	volatile uint16_t x280 = UINT16_MAX;
	static volatile int32_t t69 = -184;

	t69 = (((x277==x278)*x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x282 = INT64_MIN;
	static int64_t x283 = 5LL;
	int64_t x284 = 1330LL;

	t70 = (((x281==x282)*x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	int16_t x286 = -13;
	int8_t x287 = INT8_MIN;
	static volatile int32_t t71 = -255390470;

	t71 = (((x285==x286)*x287)<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = 0U;
	volatile int8_t x290 = 1;
	uint16_t x291 = UINT16_MAX;

	t72 = (((x289==x290)*x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x293 = UINT64_MAX;
	uint8_t x294 = 3U;
	int8_t x295 = -1;
	int8_t x296 = INT8_MIN;
	volatile int32_t t73 = 0;

	t73 = (((x293==x294)*x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = -1;
	volatile int64_t x298 = INT64_MAX;
	int16_t x299 = 668;
	uint64_t x300 = 3730958806370448048LLU;
	int32_t t74 = 11;

	t74 = (((x297==x298)*x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = -1;
	int16_t x302 = INT16_MIN;
	int32_t x303 = INT32_MAX;
	volatile int32_t t75 = 234929920;

	t75 = (((x301==x302)*x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	int8_t x306 = -2;

	t76 = (((x305==x306)*x307)<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	int64_t x311 = -1LL;
	int64_t x312 = -3LL;
	volatile int32_t t77 = -1191;

	t77 = (((x309==x310)*x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -74099283;
	uint16_t x314 = 579U;
	uint8_t x315 = 6U;
	int16_t x316 = 397;

	t78 = (((x313==x314)*x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	static int32_t x319 = -1;
	int8_t x320 = 0;
	int32_t t79 = -97;

	t79 = (((x317==x318)*x319)<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	uint32_t x322 = UINT32_MAX;
	int8_t x323 = INT8_MIN;
	int64_t x324 = -1LL;
	int32_t t80 = 49265927;

	t80 = (((x321==x322)*x323)<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MAX;
	int16_t x326 = 1;
	uint16_t x328 = 9U;

	t81 = (((x325==x326)*x327)<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 145125624U;
	static uint8_t x330 = UINT8_MAX;
	int8_t x331 = 1;
	volatile int32_t x332 = 1984070;
	volatile int32_t t82 = -426;

	t82 = (((x329==x330)*x331)<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 576U;
	uint8_t x334 = 0U;
	uint16_t x335 = UINT16_MAX;
	static volatile int32_t t83 = -5418277;

	t83 = (((x333==x334)*x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = INT64_MIN;
	int32_t x338 = -61;
	uint8_t x339 = UINT8_MAX;
	uint16_t x340 = UINT16_MAX;
	int32_t t84 = 93;

	t84 = (((x337==x338)*x339)<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x343 = 747975LL;
	uint8_t x344 = UINT8_MAX;

	t85 = (((x341==x342)*x343)<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	int8_t x348 = INT8_MAX;
	static volatile int32_t t86 = 367681831;

	t86 = (((x345==x346)*x347)<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = UINT8_MAX;
	uint64_t x350 = 81342LLU;
	int32_t x351 = INT32_MIN;
	int8_t x352 = -1;
	volatile int32_t t87 = -161933;

	t87 = (((x349==x350)*x351)<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x356 = INT16_MIN;

	t88 = (((x353==x354)*x355)<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = 0;
	static volatile uint16_t x358 = UINT16_MAX;
	int16_t x360 = INT16_MAX;
	volatile int32_t t89 = -70706140;

	t89 = (((x357==x358)*x359)<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x363 = INT8_MIN;
	volatile int32_t t90 = 22964686;

	t90 = (((x361==x362)*x363)<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	uint32_t x366 = 46U;
	static int16_t x367 = INT16_MAX;
	static int8_t x368 = 1;
	int32_t t91 = 0;

	t91 = (((x365==x366)*x367)<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	static int8_t x370 = INT8_MIN;
	static int32_t x371 = -56179;
	volatile int32_t t92 = -1;

	t92 = (((x369==x370)*x371)<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = -1LL;
	volatile int16_t x376 = 84;
	volatile int32_t t93 = -16373;

	t93 = (((x373==x374)*x375)<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = INT64_MIN;
	volatile int32_t x378 = INT32_MIN;
	static volatile uint64_t x379 = 535420544LLU;
	int32_t t94 = -56472;

	t94 = (((x377==x378)*x379)<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x381 = 33U;
	uint8_t x382 = 27U;
	static volatile uint64_t x383 = UINT64_MAX;
	static volatile int16_t x384 = -49;
	volatile int32_t t95 = -249115872;

	t95 = (((x381==x382)*x383)<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x386 = INT64_MIN;
	uint64_t x387 = UINT64_MAX;
	int32_t t96 = -7366880;

	t96 = (((x385==x386)*x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x391 = 20242297120090658LLU;
	int32_t t97 = 266098216;

	t97 = (((x389==x390)*x391)<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	volatile uint64_t x394 = 30164444681LLU;
	volatile int64_t x395 = -1LL;
	int16_t x396 = INT16_MAX;

	t98 = (((x393==x394)*x395)<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x397 = UINT64_MAX;
	uint8_t x398 = UINT8_MAX;
	uint32_t x399 = 2U;
	static int32_t x400 = INT32_MAX;

	t99 = (((x397==x398)*x399)<x400);

	if (t99 != 1) { NG(); } else { ; }
	
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

