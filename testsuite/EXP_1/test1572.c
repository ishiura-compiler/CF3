#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -957904748424696LL;
int8_t x3 = 62;
uint8_t x5 = UINT8_MAX;
static volatile int8_t x14 = -1;
volatile int32_t t6 = INT32_MIN;
static int16_t x31 = INT16_MIN;
int8_t x34 = INT8_MIN;
volatile int64_t x39 = INT64_MIN;
volatile int64_t x42 = -1LL;
uint16_t x43 = UINT16_MAX;
int64_t x44 = INT64_MIN;
int64_t x45 = 17200747066680LL;
int32_t x46 = -1;
volatile int64_t t11 = INT64_MIN;
uint32_t x51 = 1483953231U;
static int8_t x53 = -1;
volatile uint8_t x54 = 9U;
volatile int16_t x60 = 1;
volatile uint32_t t16 = 610883037U;
int16_t x71 = INT16_MAX;
static int64_t x72 = -1LL;
int32_t x76 = INT32_MIN;
volatile int64_t t18 = -359051159092288627LL;
int64_t t19 = -3718625600LL;
int8_t x84 = INT8_MIN;
volatile int32_t t21 = -4452;
int32_t x92 = 11340842;
volatile int32_t t22 = 3;
int8_t x96 = -1;
static int32_t x97 = -1;
int8_t x107 = -1;
static int32_t t28 = -50;
static int64_t x118 = -1LL;
int64_t t29 = INT64_MIN;
volatile uint16_t x121 = UINT16_MAX;
static int64_t x122 = -1LL;
static uint32_t x124 = 6U;
uint32_t t30 = 30732U;
int32_t x132 = INT32_MIN;
int32_t t32 = INT32_MIN;
static int8_t x133 = INT8_MIN;
volatile int64_t x137 = 1737LL;
uint16_t x141 = 12384U;
int16_t x143 = INT16_MAX;
int64_t x153 = INT64_MIN;
int16_t x155 = INT16_MIN;
uint8_t x181 = 3U;
volatile int32_t x182 = 924622;
volatile int32_t t45 = -1;
int16_t x185 = -1;
int16_t x193 = -1;
int8_t x195 = INT8_MIN;
uint8_t x197 = 26U;
static int64_t x198 = INT64_MIN;
int32_t x201 = -24739893;
static int32_t x203 = 10691256;
uint16_t x210 = UINT16_MAX;
static uint64_t x211 = 7972331LLU;
uint32_t x212 = UINT32_MAX;
volatile int64_t t53 = -190458366885LL;
int32_t x220 = -1;
int16_t x222 = INT16_MIN;
static int8_t x227 = INT8_MAX;
static volatile int16_t x245 = 2141;
uint8_t x248 = 25U;
int16_t x249 = 431;
int64_t x253 = 21LL;
int8_t x254 = INT8_MIN;
static int64_t x255 = INT64_MAX;
int16_t x257 = INT16_MIN;
int16_t x262 = INT16_MIN;
volatile int32_t x263 = -1;
volatile uint64_t t65 = 26864LLU;
int64_t t66 = INT64_MIN;
volatile int32_t t67 = 211;
static int8_t x273 = 1;
int64_t t68 = 274864943431942094LL;
static int64_t x279 = -1LL;
int64_t x280 = -1LL;
int32_t t71 = INT32_MIN;
volatile uint16_t x289 = UINT16_MAX;
int32_t t75 = -1249000;
static volatile uint16_t x311 = UINT16_MAX;
int8_t x320 = 1;
int64_t x328 = INT64_MIN;
int16_t x330 = INT16_MAX;
uint32_t x334 = UINT32_MAX;
uint8_t x335 = 2U;
volatile uint16_t x338 = UINT16_MAX;
int16_t x339 = INT16_MAX;
int64_t x348 = INT64_MIN;
uint8_t x355 = 2U;
int64_t t89 = 2635894074207487LL;
int32_t x368 = INT32_MAX;
int16_t x370 = -1;
static uint64_t x372 = UINT64_MAX;
static int64_t x380 = INT64_MIN;
int64_t x382 = INT64_MIN;
uint32_t x395 = 126650092U;
int8_t x398 = INT8_MAX;


void f0(void) {
	int8_t x1 = -1;
	static uint32_t x4 = UINT32_MAX;
	uint32_t t0 = UINT32_MAX;

	t0 = (((x1<=x2)/x3)|x4);

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 1U;
	int32_t x7 = 813296838;
	static int64_t x8 = INT64_MAX;
	volatile int64_t t1 = INT64_MAX;

	t1 = (((x5<=x6)/x7)|x8);

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 0U;
	int32_t x10 = INT32_MIN;
	uint64_t x11 = UINT64_MAX;
	int64_t x12 = INT64_MAX;
	volatile uint64_t t2 = 3341822906805671LLU;

	t2 = (((x9<=x10)/x11)|x12);

	if (t2 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int64_t x15 = INT64_MIN;
	int64_t x16 = INT64_MIN;
	volatile int64_t t3 = INT64_MIN;

	t3 = (((x13<=x14)/x15)|x16);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	uint8_t x18 = UINT8_MAX;
	int64_t x19 = INT64_MIN;
	static int16_t x20 = -1;
	int64_t t4 = 170697415250077670LL;

	t4 = (((x17<=x18)/x19)|x20);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 4U;
	int8_t x22 = INT8_MIN;
	int64_t x23 = -12578610050161LL;
	int64_t x24 = -1LL;
	volatile int64_t t5 = -8671956332083LL;

	t5 = (((x21<=x22)/x23)|x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	int8_t x26 = INT8_MAX;
	static int16_t x27 = 160;
	static int32_t x28 = INT32_MIN;

	t6 = (((x25<=x26)/x27)|x28);

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	static int64_t x30 = INT64_MIN;
	int32_t x32 = -1;
	static volatile int32_t t7 = -5525;

	t7 = (((x29<=x30)/x31)|x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -7;
	uint32_t x35 = 395U;
	int16_t x36 = INT16_MAX;
	uint32_t t8 = 365U;

	t8 = (((x33<=x34)/x35)|x36);

	if (t8 != 32767U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -15;
	int8_t x38 = -3;
	uint32_t x40 = 225668U;
	static int64_t t9 = -41LL;

	t9 = (((x37<=x38)/x39)|x40);

	if (t9 != 225668LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	volatile int64_t t10 = INT64_MIN;

	t10 = (((x41<=x42)/x43)|x44);

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x47 = -14LL;
	static volatile int64_t x48 = INT64_MIN;

	t11 = (((x45<=x46)/x47)|x48);

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	static int16_t x50 = 4;
	int64_t x52 = INT64_MIN;
	volatile int64_t t12 = INT64_MIN;

	t12 = (((x49<=x50)/x51)|x52);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x55 = -1;
	int32_t x56 = -1;
	int32_t t13 = -1483655;

	t13 = (((x53<=x54)/x55)|x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MIN;
	int16_t x58 = 1748;
	static uint64_t x59 = 333223LLU;
	uint64_t t14 = 2080310685935105LLU;

	t14 = (((x57<=x58)/x59)|x60);

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 29;
	uint16_t x62 = 400U;
	static uint16_t x63 = 7U;
	volatile int32_t x64 = 15978011;
	volatile int32_t t15 = 1069653;

	t15 = (((x61<=x62)/x63)|x64);

	if (t15 != 15978011) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 44;
	int32_t x66 = INT32_MAX;
	volatile uint32_t x67 = 80042826U;
	int16_t x68 = INT16_MIN;

	t16 = (((x65<=x66)/x67)|x68);

	if (t16 != 4294934528U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	uint64_t x70 = 1072794909330813LLU;
	volatile int64_t t17 = -2995220053008802805LL;

	t17 = (((x69<=x70)/x71)|x72);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -1;
	int16_t x74 = 10;
	int64_t x75 = -1504179627870526082LL;

	t18 = (((x73<=x74)/x75)|x76);

	if (t18 != -2147483648LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 3054U;
	int16_t x78 = -1;
	int64_t x79 = -9997LL;
	int64_t x80 = -58497733674191LL;

	t19 = (((x77<=x78)/x79)|x80);

	if (t19 != -58497733674191LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = 382774116LL;
	int16_t x82 = 5203;
	static int64_t x83 = 582LL;
	volatile int64_t t20 = -13950882647595LL;

	t20 = (((x81<=x82)/x83)|x84);

	if (t20 != -128LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 104U;
	static volatile uint64_t x86 = UINT64_MAX;
	uint8_t x87 = UINT8_MAX;
	static int8_t x88 = -1;

	t21 = (((x85<=x86)/x87)|x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = 0;
	int8_t x90 = -1;
	static volatile uint16_t x91 = 35U;

	t22 = (((x89<=x90)/x91)|x92);

	if (t22 != 11340842) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = -3;
	volatile uint8_t x94 = 55U;
	uint16_t x95 = 12U;
	static volatile int32_t t23 = 7;

	t23 = (((x93<=x94)/x95)|x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = -1;
	int8_t x99 = INT8_MIN;
	int64_t x100 = 116586LL;
	int64_t t24 = 240954486979LL;

	t24 = (((x97<=x98)/x99)|x100);

	if (t24 != 116586LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	int64_t x102 = -1313LL;
	int64_t x103 = -1LL;
	uint8_t x104 = 0U;
	volatile int64_t t25 = -1980979187311187684LL;

	t25 = (((x101<=x102)/x103)|x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = 0LL;
	static uint16_t x106 = UINT16_MAX;
	volatile int64_t x108 = 1080878300635772219LL;
	volatile int64_t t26 = 10LL;

	t26 = (((x105<=x106)/x107)|x108);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -3237208;
	volatile int16_t x110 = 0;
	static int8_t x111 = -1;
	int32_t x112 = INT32_MAX;
	int32_t t27 = 1173;

	t27 = (((x109<=x110)/x111)|x112);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = 33U;
	int8_t x114 = 14;
	static uint8_t x115 = 26U;
	int16_t x116 = INT16_MIN;

	t28 = (((x113<=x114)/x115)|x116);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = -750LL;
	uint8_t x119 = UINT8_MAX;
	int64_t x120 = INT64_MIN;

	t29 = (((x117<=x118)/x119)|x120);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x123 = 27U;

	t30 = (((x121<=x122)/x123)|x124);

	if (t30 != 6U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	volatile int64_t x126 = INT64_MAX;
	int16_t x127 = 42;
	int8_t x128 = INT8_MAX;
	int32_t t31 = -4;

	t31 = (((x125<=x126)/x127)|x128);

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = 12;
	int64_t x130 = INT64_MIN;
	int32_t x131 = INT32_MAX;

	t32 = (((x129<=x130)/x131)|x132);

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x134 = UINT64_MAX;
	uint8_t x135 = 14U;
	static int64_t x136 = -1LL;
	int64_t t33 = 9765849485965208LL;

	t33 = (((x133<=x134)/x135)|x136);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x138 = -1;
	uint8_t x139 = UINT8_MAX;
	int16_t x140 = INT16_MAX;
	static volatile int32_t t34 = -548;

	t34 = (((x137<=x138)/x139)|x140);

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x142 = -439;
	int32_t x144 = -1;
	volatile int32_t t35 = -69;

	t35 = (((x141<=x142)/x143)|x144);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MAX;
	volatile int64_t x147 = -43090LL;
	static uint8_t x148 = 60U;
	int64_t t36 = 139LL;

	t36 = (((x145<=x146)/x147)|x148);

	if (t36 != 60LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	static volatile uint16_t x150 = 16U;
	int16_t x151 = INT16_MIN;
	volatile int64_t x152 = 244084051691547496LL;
	int64_t t37 = -2450570155015LL;

	t37 = (((x149<=x150)/x151)|x152);

	if (t37 != 244084051691547496LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = -1;
	uint16_t x156 = 2238U;
	int32_t t38 = -1;

	t38 = (((x153<=x154)/x155)|x156);

	if (t38 != 2238) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 8116;
	static int8_t x158 = -1;
	uint16_t x159 = 3U;
	volatile uint8_t x160 = UINT8_MAX;
	int32_t t39 = 324;

	t39 = (((x157<=x158)/x159)|x160);

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = 11LL;
	volatile int8_t x162 = INT8_MIN;
	static int32_t x163 = INT32_MIN;
	uint32_t x164 = 10648397U;
	uint32_t t40 = 42U;

	t40 = (((x161<=x162)/x163)|x164);

	if (t40 != 10648397U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 5323;
	uint32_t x166 = 454551750U;
	int16_t x167 = -1;
	int64_t x168 = INT64_MIN;
	volatile int64_t t41 = -61LL;

	t41 = (((x165<=x166)/x167)|x168);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	volatile int64_t x170 = 1009422262545180LL;
	uint8_t x171 = 1U;
	static uint8_t x172 = 1U;
	int32_t t42 = 34;

	t42 = (((x169<=x170)/x171)|x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	uint8_t x174 = UINT8_MAX;
	static uint64_t x175 = 3060567772285629LLU;
	static int8_t x176 = -1;
	static volatile uint64_t t43 = UINT64_MAX;

	t43 = (((x173<=x174)/x175)|x176);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x177 = 16U;
	int8_t x178 = INT8_MIN;
	uint8_t x179 = UINT8_MAX;
	volatile uint8_t x180 = 5U;
	static int32_t t44 = -5;

	t44 = (((x177<=x178)/x179)|x180);

	if (t44 != 5) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x183 = 16U;
	int16_t x184 = INT16_MAX;

	t45 = (((x181<=x182)/x183)|x184);

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = -1LL;
	int8_t x187 = -1;
	int16_t x188 = INT16_MAX;
	volatile int32_t t46 = 766;

	t46 = (((x185<=x186)/x187)|x188);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -812;
	uint16_t x190 = 152U;
	int8_t x191 = INT8_MIN;
	int16_t x192 = INT16_MAX;
	static volatile int32_t t47 = 7;

	t47 = (((x189<=x190)/x191)|x192);

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x194 = 122U;
	volatile int8_t x196 = 40;
	static volatile int32_t t48 = -365133258;

	t48 = (((x193<=x194)/x195)|x196);

	if (t48 != 40) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x199 = -1;
	int8_t x200 = INT8_MAX;
	volatile int32_t t49 = -221089990;

	t49 = (((x197<=x198)/x199)|x200);

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x202 = INT8_MIN;
	uint64_t x204 = 7792125015LLU;
	volatile uint64_t t50 = 754449592603711316LLU;

	t50 = (((x201<=x202)/x203)|x204);

	if (t50 != 7792125015LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x205 = 112LLU;
	int16_t x206 = INT16_MAX;
	int16_t x207 = -1;
	static uint16_t x208 = UINT16_MAX;
	static volatile int32_t t51 = 2;

	t51 = (((x205<=x206)/x207)|x208);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x209 = 0U;
	uint64_t t52 = 30LLU;

	t52 = (((x209<=x210)/x211)|x212);

	if (t52 != 4294967295LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x213 = 3533U;
	int8_t x214 = INT8_MIN;
	int64_t x215 = -149529398496550775LL;
	uint8_t x216 = UINT8_MAX;

	t53 = (((x213<=x214)/x215)|x216);

	if (t53 != 255LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x217 = 230184953552402LLU;
	int16_t x218 = INT16_MAX;
	int8_t x219 = 1;
	static volatile int32_t t54 = 25;

	t54 = (((x217<=x218)/x219)|x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	static uint64_t x223 = UINT64_MAX;
	int8_t x224 = 25;
	static volatile uint64_t t55 = 0LLU;

	t55 = (((x221<=x222)/x223)|x224);

	if (t55 != 25LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	uint32_t x226 = 7573413U;
	static int16_t x228 = -1;
	int32_t t56 = 122521;

	t56 = (((x225<=x226)/x227)|x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	uint16_t x230 = UINT16_MAX;
	int16_t x231 = INT16_MAX;
	uint32_t x232 = UINT32_MAX;
	uint32_t t57 = UINT32_MAX;

	t57 = (((x229<=x230)/x231)|x232);

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int8_t x234 = INT8_MIN;
	int32_t x235 = -1;
	static volatile int8_t x236 = INT8_MIN;
	static volatile int32_t t58 = -13701;

	t58 = (((x233<=x234)/x235)|x236);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = UINT16_MAX;
	uint32_t x238 = 1016U;
	uint8_t x239 = UINT8_MAX;
	uint32_t x240 = UINT32_MAX;
	uint32_t t59 = UINT32_MAX;

	t59 = (((x237<=x238)/x239)|x240);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int64_t x242 = INT64_MIN;
	uint64_t x243 = UINT64_MAX;
	int8_t x244 = INT8_MIN;
	static uint64_t t60 = 17383731043446LLU;

	t60 = (((x241<=x242)/x243)|x244);

	if (t60 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x246 = UINT8_MAX;
	int16_t x247 = 1830;
	static int32_t t61 = -3;

	t61 = (((x245<=x246)/x247)|x248);

	if (t61 != 25) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x250 = -1;
	int16_t x251 = -9362;
	int32_t x252 = -1;
	volatile int32_t t62 = -13260704;

	t62 = (((x249<=x250)/x251)|x252);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x256 = INT8_MIN;
	int64_t t63 = 12752015LL;

	t63 = (((x253<=x254)/x255)|x256);

	if (t63 != -128LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x258 = 7177;
	int8_t x259 = INT8_MIN;
	int8_t x260 = -1;
	int32_t t64 = 75;

	t64 = (((x257<=x258)/x259)|x260);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = INT16_MAX;
	uint64_t x264 = 59238870LLU;

	t65 = (((x261<=x262)/x263)|x264);

	if (t65 != 59238870LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x265 = 79U;
	static int16_t x266 = INT16_MIN;
	int32_t x267 = INT32_MAX;
	int64_t x268 = INT64_MIN;

	t66 = (((x265<=x266)/x267)|x268);

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -668677296622LL;
	int16_t x270 = -7;
	int8_t x271 = INT8_MIN;
	volatile int8_t x272 = -1;

	t67 = (((x269<=x270)/x271)|x272);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x274 = UINT16_MAX;
	volatile uint8_t x275 = UINT8_MAX;
	static volatile int64_t x276 = -1LL;

	t68 = (((x273<=x274)/x275)|x276);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x277 = 3U;
	static uint64_t x278 = 235218870305807LLU;
	volatile int64_t t69 = -19747801397630LL;

	t69 = (((x277<=x278)/x279)|x280);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	volatile int8_t x282 = 1;
	static uint32_t x283 = 318589388U;
	int32_t x284 = INT32_MAX;
	volatile uint32_t t70 = 13U;

	t70 = (((x281<=x282)/x283)|x284);

	if (t70 != 2147483647U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	uint32_t x286 = UINT32_MAX;
	int32_t x287 = -3453594;
	int32_t x288 = INT32_MIN;

	t71 = (((x285<=x286)/x287)|x288);

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x290 = 1040110751U;
	volatile int32_t x291 = INT32_MAX;
	int8_t x292 = 2;
	int32_t t72 = 11313563;

	t72 = (((x289<=x290)/x291)|x292);

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	static int32_t x294 = INT32_MAX;
	volatile uint32_t x295 = UINT32_MAX;
	uint32_t x296 = 568097U;
	uint32_t t73 = 1217074043U;

	t73 = (((x293<=x294)/x295)|x296);

	if (t73 != 568097U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	int64_t x298 = -1LL;
	int64_t x299 = -24611127702926322LL;
	int16_t x300 = INT16_MAX;
	static int64_t t74 = -1225432808073278964LL;

	t74 = (((x297<=x298)/x299)|x300);

	if (t74 != 32767LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x301 = 11U;
	int8_t x302 = 3;
	int32_t x303 = INT32_MAX;
	uint16_t x304 = 373U;

	t75 = (((x301<=x302)/x303)|x304);

	if (t75 != 373) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	uint32_t x306 = UINT32_MAX;
	volatile int64_t x307 = -25522LL;
	uint8_t x308 = UINT8_MAX;
	int64_t t76 = 1LL;

	t76 = (((x305<=x306)/x307)|x308);

	if (t76 != 255LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = 248;
	int64_t x310 = INT64_MAX;
	int8_t x312 = 1;
	volatile int32_t t77 = -303053908;

	t77 = (((x309<=x310)/x311)|x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 471057353719209LLU;
	uint16_t x314 = UINT16_MAX;
	int8_t x315 = -1;
	volatile int16_t x316 = -1;
	volatile int32_t t78 = -99176;

	t78 = (((x313<=x314)/x315)|x316);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	int8_t x318 = 50;
	static int64_t x319 = INT64_MIN;
	int64_t t79 = 2LL;

	t79 = (((x317<=x318)/x319)|x320);

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x321 = UINT32_MAX;
	int64_t x322 = INT64_MAX;
	int64_t x323 = -123712555935460277LL;
	static int8_t x324 = 12;
	int64_t t80 = 11745249074868LL;

	t80 = (((x321<=x322)/x323)|x324);

	if (t80 != 12LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x325 = INT32_MIN;
	static int16_t x326 = -1;
	volatile int64_t x327 = INT64_MIN;
	int64_t t81 = INT64_MIN;

	t81 = (((x325<=x326)/x327)|x328);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 876U;
	static int64_t x331 = -1LL;
	int16_t x332 = 13;
	int64_t t82 = -4721302LL;

	t82 = (((x329<=x330)/x331)|x332);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	static int32_t x336 = INT32_MIN;
	volatile int32_t t83 = INT32_MIN;

	t83 = (((x333<=x334)/x335)|x336);

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x337 = 4U;
	int16_t x340 = INT16_MIN;
	static int32_t t84 = -2;

	t84 = (((x337<=x338)/x339)|x340);

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = INT64_MAX;
	static int64_t x342 = -1LL;
	int64_t x343 = -8377179193980LL;
	int64_t x344 = INT64_MAX;
	int64_t t85 = INT64_MAX;

	t85 = (((x341<=x342)/x343)|x344);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 2U;
	int32_t x346 = INT32_MIN;
	int16_t x347 = INT16_MIN;
	static volatile int64_t t86 = INT64_MIN;

	t86 = (((x345<=x346)/x347)|x348);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1120;
	int16_t x350 = INT16_MAX;
	int64_t x351 = INT64_MIN;
	volatile uint64_t x352 = 893389LLU;
	uint64_t t87 = 499028004433LLU;

	t87 = (((x349<=x350)/x351)|x352);

	if (t87 != 893389LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 25U;
	volatile int32_t x354 = -47580;
	int32_t x356 = -1;
	static volatile int32_t t88 = 2;

	t88 = (((x353<=x354)/x355)|x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 26U;
	volatile int32_t x358 = 114720837;
	int64_t x359 = -1215258391159165LL;
	int8_t x360 = -1;

	t89 = (((x357<=x358)/x359)|x360);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x361 = 998194LLU;
	int16_t x362 = -1;
	int32_t x363 = INT32_MIN;
	int32_t x364 = INT32_MIN;
	int32_t t90 = INT32_MIN;

	t90 = (((x361<=x362)/x363)|x364);

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = -49;
	int16_t x366 = 4;
	int8_t x367 = -1;
	volatile int32_t t91 = 632243;

	t91 = (((x365<=x366)/x367)|x368);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = INT32_MAX;
	int32_t x371 = -1;
	uint64_t t92 = UINT64_MAX;

	t92 = (((x369<=x370)/x371)|x372);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = INT64_MAX;
	uint64_t x374 = 1721155608965038LLU;
	int16_t x375 = INT16_MIN;
	static int8_t x376 = INT8_MAX;
	static int32_t t93 = 209931515;

	t93 = (((x373<=x374)/x375)|x376);

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = -1;
	int8_t x378 = -51;
	int16_t x379 = INT16_MIN;
	static volatile int64_t t94 = INT64_MIN;

	t94 = (((x377<=x378)/x379)|x380);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x381 = INT16_MIN;
	int64_t x383 = -16388676455LL;
	volatile uint16_t x384 = 11U;
	volatile int64_t t95 = -922LL;

	t95 = (((x381<=x382)/x383)|x384);

	if (t95 != 11LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = INT8_MIN;
	int8_t x386 = -1;
	uint32_t x387 = UINT32_MAX;
	uint32_t x388 = UINT32_MAX;
	volatile uint32_t t96 = UINT32_MAX;

	t96 = (((x385<=x386)/x387)|x388);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	int32_t x390 = -9608;
	int64_t x391 = INT64_MAX;
	uint8_t x392 = 1U;
	volatile int64_t t97 = 88354LL;

	t97 = (((x389<=x390)/x391)|x392);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = UINT16_MAX;
	int8_t x394 = 47;
	uint64_t x396 = 8377221982627LLU;
	uint64_t t98 = 404066LLU;

	t98 = (((x393<=x394)/x395)|x396);

	if (t98 != 8377221982627LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = 1357;
	uint64_t x399 = UINT64_MAX;
	volatile int64_t x400 = 6495LL;
	uint64_t t99 = 6096LLU;

	t99 = (((x397<=x398)/x399)|x400);

	if (t99 != 6495LLU) { NG(); } else { ; }
	
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

