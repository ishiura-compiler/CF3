#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = 3;
int16_t x11 = INT16_MIN;
int16_t x16 = 0;
uint32_t x17 = UINT32_MAX;
static int8_t x18 = -1;
int32_t x20 = INT32_MIN;
int16_t x24 = INT16_MIN;
uint32_t x34 = UINT32_MAX;
static volatile int32_t t7 = -4008;
volatile int32_t x43 = 1;
uint16_t x46 = 6922U;
volatile uint16_t x48 = 2449U;
int32_t t9 = 158;
static int8_t x63 = -1;
uint32_t x64 = 397U;
static int32_t x79 = INT32_MIN;
volatile int16_t x81 = -537;
int64_t x82 = 9962LL;
int32_t x83 = INT32_MIN;
int32_t x90 = INT32_MIN;
uint8_t x91 = 11U;
uint16_t x100 = 1359U;
uint64_t x102 = UINT64_MAX;
uint8_t x107 = UINT8_MAX;
static int32_t t21 = -495906332;
int32_t t24 = -223418278;
uint8_t x131 = 15U;
int64_t x144 = -7624170092138724LL;
uint64_t x148 = 1067563799LLU;
static volatile int32_t t30 = 7759;
volatile int32_t t31 = 87046142;
volatile int16_t x172 = INT16_MIN;
int16_t x189 = 934;
int16_t x196 = INT16_MAX;
uint16_t x197 = 3911U;
volatile int16_t x199 = INT16_MAX;
static int16_t x210 = INT16_MAX;
volatile int16_t x211 = INT16_MIN;
uint32_t x216 = 6808430U;
uint64_t x219 = 7596521882504711622LLU;
static int8_t x221 = INT8_MAX;
static int16_t x225 = -9184;
volatile int8_t x237 = INT8_MIN;
int8_t x239 = -1;
int32_t x251 = 131078;
volatile int32_t x273 = INT32_MAX;
int64_t x275 = -1LL;
int32_t t55 = 259;
volatile int16_t x279 = INT16_MAX;
static int8_t x285 = -1;
static volatile uint32_t x288 = UINT32_MAX;
static int32_t x300 = INT32_MIN;
static int32_t t58 = 86342556;
int8_t x314 = INT8_MIN;
uint64_t x322 = 27571LLU;
uint32_t x323 = UINT32_MAX;
int64_t x326 = -3800975323798617LL;
volatile int32_t t65 = 8204996;
uint8_t x334 = 13U;
int32_t x336 = 1;
int64_t x341 = 233004680944LL;
int32_t x364 = -1;
int16_t x372 = -186;
int64_t x373 = -3LL;
int8_t x374 = 1;
int8_t x375 = 6;
int32_t x384 = INT32_MIN;
int64_t x387 = -116966LL;
uint64_t x400 = 16480120207751174LLU;
volatile int32_t t78 = -12;
int32_t t79 = -32;
int32_t x405 = INT32_MAX;
volatile int64_t x420 = INT64_MAX;
int8_t x423 = INT8_MIN;
static int32_t t86 = -917634;
uint8_t x436 = 1U;
int16_t x437 = 502;
int64_t x439 = 275253749LL;
static uint64_t x458 = 116817992747601LLU;
static int64_t x460 = -83888125938369605LL;
int32_t t90 = -6507;
int32_t x462 = -177284;
uint16_t x464 = UINT16_MAX;
int32_t t92 = -49;
volatile int32_t x477 = INT32_MIN;
static int16_t x484 = 1;
static uint32_t x489 = 7456U;
int64_t x501 = INT64_MIN;
int8_t x504 = 42;


void f0(void) {
	int16_t x1 = -1;
	int16_t x2 = -3601;
	uint64_t x3 = 0LLU;
	uint64_t x4 = UINT64_MAX;
	volatile int32_t t0 = -71;

	t0 = (((x1+x2)+x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x9 = 48U;
	int8_t x12 = INT8_MAX;
	volatile int32_t t1 = 7650;

	t1 = (((x9+x10)+x11)<x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = UINT16_MAX;
	volatile int64_t x14 = -2888759LL;
	int16_t x15 = INT16_MIN;
	static int32_t t2 = 447;

	t2 = (((x13+x14)+x15)<x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x19 = UINT16_MAX;
	volatile int32_t t3 = -111906393;

	t3 = (((x17+x18)+x19)<x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x21 = INT8_MIN;
	uint32_t x22 = 82887U;
	int16_t x23 = INT16_MAX;
	volatile int32_t t4 = 1016545;

	t4 = (((x21+x22)+x23)<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MAX;
	volatile int16_t x26 = -1;
	int32_t x27 = INT32_MIN;
	int32_t x28 = 158398636;
	int32_t t5 = 13880;

	t5 = (((x25+x26)+x27)<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = 51U;
	int32_t x35 = INT32_MIN;
	static int32_t x36 = INT32_MAX;
	volatile int32_t t6 = 6375173;

	t6 = (((x33+x34)+x35)<x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x37 = -16012;
	int32_t x38 = 734984700;
	int32_t x39 = -276940;
	volatile uint32_t x40 = 23513U;

	t7 = (((x37+x38)+x39)<x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x41 = UINT64_MAX;
	int32_t x42 = -1;
	volatile int64_t x44 = -101LL;
	volatile int32_t t8 = -59670;

	t8 = (((x41+x42)+x43)<x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x45 = INT16_MIN;
	int16_t x47 = INT16_MAX;

	t9 = (((x45+x46)+x47)<x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x49 = UINT8_MAX;
	uint64_t x50 = UINT64_MAX;
	int64_t x51 = -1LL;
	uint64_t x52 = 2LLU;
	volatile int32_t t10 = -11608308;

	t10 = (((x49+x50)+x51)<x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -46;
	int8_t x54 = INT8_MIN;
	int16_t x55 = 774;
	uint16_t x56 = 13U;
	int32_t t11 = 10681;

	t11 = (((x53+x54)+x55)<x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = -44;
	int32_t x62 = 737051;
	int32_t t12 = -19393932;

	t12 = (((x61+x62)+x63)<x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x69 = UINT32_MAX;
	int8_t x70 = 18;
	volatile uint32_t x71 = UINT32_MAX;
	volatile int64_t x72 = -1LL;
	int32_t t13 = 4678556;

	t13 = (((x69+x70)+x71)<x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x73 = UINT32_MAX;
	volatile int8_t x74 = INT8_MIN;
	int32_t x75 = INT32_MIN;
	uint64_t x76 = UINT64_MAX;
	static volatile int32_t t14 = 0;

	t14 = (((x73+x74)+x75)<x76);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x77 = UINT16_MAX;
	static volatile uint16_t x78 = 7U;
	static uint64_t x80 = UINT64_MAX;
	static volatile int32_t t15 = -188676690;

	t15 = (((x77+x78)+x79)<x80);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x84 = INT64_MIN;
	volatile int32_t t16 = 10919;

	t16 = (((x81+x82)+x83)<x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x85 = 134LLU;
	static int32_t x86 = 0;
	int64_t x87 = -1LL;
	int32_t x88 = 223924706;
	static volatile int32_t t17 = 480965037;

	t17 = (((x85+x86)+x87)<x88);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = -43289878783048LL;
	int16_t x92 = 16;
	int32_t t18 = -421940025;

	t18 = (((x89+x90)+x91)<x92);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = 659487836LL;
	uint32_t x98 = 935328856U;
	int32_t x99 = -751;
	int32_t t19 = -12;

	t19 = (((x97+x98)+x99)<x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = INT16_MIN;
	uint64_t x103 = 329501267856LLU;
	static int8_t x104 = INT8_MIN;
	static int32_t t20 = 927029;

	t20 = (((x101+x102)+x103)<x104);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x105 = UINT16_MAX;
	int16_t x106 = -1;
	volatile int64_t x108 = INT64_MIN;

	t21 = (((x105+x106)+x107)<x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = INT16_MIN;
	int16_t x110 = 8476;
	int32_t x111 = INT32_MAX;
	int8_t x112 = 1;
	volatile int32_t t22 = 30;

	t22 = (((x109+x110)+x111)<x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x113 = UINT8_MAX;
	int16_t x114 = INT16_MAX;
	static uint64_t x115 = UINT64_MAX;
	int32_t x116 = 1;
	volatile int32_t t23 = -323283320;

	t23 = (((x113+x114)+x115)<x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x121 = UINT16_MAX;
	static uint8_t x122 = UINT8_MAX;
	volatile uint16_t x123 = 50U;
	int64_t x124 = INT64_MAX;

	t24 = (((x121+x122)+x123)<x124);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x125 = UINT16_MAX;
	volatile int16_t x126 = -2423;
	static int64_t x127 = -11440021627395841LL;
	volatile uint16_t x128 = 1024U;
	int32_t t25 = -6916;

	t25 = (((x125+x126)+x127)<x128);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = 892700215655012284LL;
	static int64_t x130 = -1LL;
	int32_t x132 = INT32_MAX;
	volatile int32_t t26 = 1356;

	t26 = (((x129+x130)+x131)<x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x141 = -1;
	volatile uint32_t x142 = 9U;
	int8_t x143 = INT8_MIN;
	static int32_t t27 = -3844;

	t27 = (((x141+x142)+x143)<x144);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x145 = 1360746;
	int64_t x146 = -2426632941LL;
	int32_t x147 = INT32_MAX;
	volatile int32_t t28 = -11;

	t28 = (((x145+x146)+x147)<x148);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x149 = -186;
	static volatile int32_t x150 = 7867;
	int32_t x151 = INT32_MIN;
	volatile int16_t x152 = INT16_MIN;
	static int32_t t29 = -119793566;

	t29 = (((x149+x150)+x151)<x152);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x153 = -1;
	volatile int64_t x154 = 34314825903LL;
	int16_t x155 = 15;
	int32_t x156 = 12;

	t30 = (((x153+x154)+x155)<x156);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x157 = INT16_MIN;
	int16_t x158 = INT16_MAX;
	volatile int8_t x159 = INT8_MIN;
	int32_t x160 = -17587239;

	t31 = (((x157+x158)+x159)<x160);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x161 = 5;
	int16_t x162 = 15407;
	uint8_t x163 = 30U;
	uint64_t x164 = 0LLU;
	volatile int32_t t32 = -494135;

	t32 = (((x161+x162)+x163)<x164);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x169 = INT16_MIN;
	static uint32_t x170 = 21224512U;
	int32_t x171 = INT32_MAX;
	static volatile int32_t t33 = 74321271;

	t33 = (((x169+x170)+x171)<x172);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x173 = 11U;
	static volatile int8_t x174 = INT8_MIN;
	int32_t x175 = -122882;
	volatile uint64_t x176 = 11202762931986694LLU;
	volatile int32_t t34 = -15075;

	t34 = (((x173+x174)+x175)<x176);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = -1;
	volatile uint64_t x178 = 17060LLU;
	int16_t x179 = -1;
	int16_t x180 = -852;
	volatile int32_t t35 = 154383292;

	t35 = (((x177+x178)+x179)<x180);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x190 = 7U;
	int32_t x191 = -60185373;
	int16_t x192 = INT16_MIN;
	static volatile int32_t t36 = 0;

	t36 = (((x189+x190)+x191)<x192);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x193 = INT32_MIN;
	uint32_t x194 = 33901032U;
	int32_t x195 = INT32_MIN;
	volatile int32_t t37 = 486210;

	t37 = (((x193+x194)+x195)<x196);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x198 = UINT64_MAX;
	uint16_t x200 = 117U;
	volatile int32_t t38 = 7375;

	t38 = (((x197+x198)+x199)<x200);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x201 = INT8_MIN;
	uint8_t x202 = 7U;
	int64_t x203 = 3318LL;
	int8_t x204 = 49;
	int32_t t39 = 7;

	t39 = (((x201+x202)+x203)<x204);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x205 = INT8_MAX;
	int32_t x206 = -1;
	static int16_t x207 = -1;
	uint64_t x208 = 13282833568078710LLU;
	static int32_t t40 = -84;

	t40 = (((x205+x206)+x207)<x208);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x209 = UINT8_MAX;
	int8_t x212 = INT8_MIN;
	static volatile int32_t t41 = -1085852;

	t41 = (((x209+x210)+x211)<x212);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x213 = -787;
	static int64_t x214 = -3169551479908LL;
	volatile int64_t x215 = INT64_MAX;
	int32_t t42 = 32;

	t42 = (((x213+x214)+x215)<x216);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x217 = 11;
	int64_t x218 = 82106LL;
	uint64_t x220 = 7448236083LLU;
	static volatile int32_t t43 = -46016443;

	t43 = (((x217+x218)+x219)<x220);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x222 = -1;
	int8_t x223 = 2;
	int8_t x224 = INT8_MIN;
	volatile int32_t t44 = -38;

	t44 = (((x221+x222)+x223)<x224);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x226 = 2778780815447LL;
	volatile int8_t x227 = -1;
	volatile uint64_t x228 = 127580LLU;
	static volatile int32_t t45 = 0;

	t45 = (((x225+x226)+x227)<x228);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x233 = UINT64_MAX;
	int16_t x234 = -1;
	static int8_t x235 = INT8_MAX;
	uint32_t x236 = 361U;
	volatile int32_t t46 = 5386973;

	t46 = (((x233+x234)+x235)<x236);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x238 = -1;
	uint32_t x240 = 15U;
	volatile int32_t t47 = 10;

	t47 = (((x237+x238)+x239)<x240);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x241 = UINT16_MAX;
	int32_t x242 = -1;
	static int8_t x243 = INT8_MAX;
	volatile uint8_t x244 = 3U;
	volatile int32_t t48 = -52301;

	t48 = (((x241+x242)+x243)<x244);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x245 = INT16_MIN;
	int64_t x246 = -1685871957884LL;
	int16_t x247 = -1;
	volatile int8_t x248 = 1;
	static int32_t t49 = -255285;

	t49 = (((x245+x246)+x247)<x248);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x249 = 58LL;
	int8_t x250 = INT8_MIN;
	uint32_t x252 = 173U;
	volatile int32_t t50 = 1;

	t50 = (((x249+x250)+x251)<x252);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x253 = 126U;
	int8_t x254 = INT8_MAX;
	uint16_t x255 = 1734U;
	static volatile int16_t x256 = INT16_MAX;
	int32_t t51 = -676;

	t51 = (((x253+x254)+x255)<x256);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x257 = INT16_MAX;
	int8_t x258 = INT8_MAX;
	int32_t x259 = -1546;
	volatile int8_t x260 = -1;
	int32_t t52 = 4031;

	t52 = (((x257+x258)+x259)<x260);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x265 = UINT8_MAX;
	volatile int8_t x266 = INT8_MAX;
	static volatile int32_t x267 = INT32_MIN;
	int8_t x268 = -1;
	volatile int32_t t53 = -3390;

	t53 = (((x265+x266)+x267)<x268);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x269 = INT32_MIN;
	uint64_t x270 = 1LLU;
	uint64_t x271 = 115522700732553464LLU;
	int16_t x272 = 2;
	int32_t t54 = -158;

	t54 = (((x269+x270)+x271)<x272);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x274 = INT32_MIN;
	static uint8_t x276 = 2U;

	t55 = (((x273+x274)+x275)<x276);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x277 = UINT16_MAX;
	int32_t x278 = -1;
	int32_t x280 = INT32_MAX;
	int32_t t56 = -1103;

	t56 = (((x277+x278)+x279)<x280);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x286 = -523264353LL;
	uint32_t x287 = UINT32_MAX;
	static volatile int32_t t57 = 963460481;

	t57 = (((x285+x286)+x287)<x288);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x297 = INT8_MAX;
	int8_t x298 = -1;
	uint8_t x299 = 0U;

	t58 = (((x297+x298)+x299)<x300);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x301 = 636U;
	static int64_t x302 = INT64_MIN;
	static int16_t x303 = -6;
	volatile uint8_t x304 = UINT8_MAX;
	int32_t t59 = -1960315;

	t59 = (((x301+x302)+x303)<x304);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x309 = 0U;
	volatile int16_t x310 = 12420;
	int8_t x311 = INT8_MAX;
	int64_t x312 = INT64_MIN;
	int32_t t60 = 5413;

	t60 = (((x309+x310)+x311)<x312);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x313 = INT16_MIN;
	int32_t x315 = 426563574;
	uint64_t x316 = 547LLU;
	static int32_t t61 = 108065466;

	t61 = (((x313+x314)+x315)<x316);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x317 = -1;
	uint64_t x318 = 32334LLU;
	uint64_t x319 = 18LLU;
	volatile int64_t x320 = INT64_MAX;
	volatile int32_t t62 = 28;

	t62 = (((x317+x318)+x319)<x320);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x321 = INT64_MIN;
	int8_t x324 = INT8_MAX;
	volatile int32_t t63 = 7633732;

	t63 = (((x321+x322)+x323)<x324);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x325 = INT32_MIN;
	int32_t x327 = -261320421;
	volatile int64_t x328 = 412LL;
	volatile int32_t t64 = -504005;

	t64 = (((x325+x326)+x327)<x328);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x329 = INT16_MIN;
	int64_t x330 = 102751388LL;
	uint64_t x331 = 108LLU;
	uint16_t x332 = 40U;

	t65 = (((x329+x330)+x331)<x332);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x333 = UINT8_MAX;
	int8_t x335 = -1;
	volatile int32_t t66 = 718553;

	t66 = (((x333+x334)+x335)<x336);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x342 = 594;
	uint32_t x343 = UINT32_MAX;
	int64_t x344 = INT64_MIN;
	volatile int32_t t67 = -44086;

	t67 = (((x341+x342)+x343)<x344);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x349 = 168434864U;
	uint16_t x350 = 2U;
	int32_t x351 = INT32_MIN;
	uint64_t x352 = 15133LLU;
	volatile int32_t t68 = 369045;

	t68 = (((x349+x350)+x351)<x352);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x353 = 1;
	int16_t x354 = 1;
	int8_t x355 = -1;
	int8_t x356 = -7;
	volatile int32_t t69 = 11;

	t69 = (((x353+x354)+x355)<x356);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x357 = 2422971;
	uint32_t x358 = 574419774U;
	static int8_t x359 = INT8_MAX;
	volatile uint32_t x360 = 12U;
	volatile int32_t t70 = -710373;

	t70 = (((x357+x358)+x359)<x360);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x361 = 10964037U;
	volatile int32_t x362 = INT32_MIN;
	uint8_t x363 = 22U;
	static volatile int32_t t71 = 1754;

	t71 = (((x361+x362)+x363)<x364);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x365 = 368LL;
	static int16_t x366 = INT16_MIN;
	uint16_t x367 = 163U;
	uint64_t x368 = 3824LLU;
	int32_t t72 = -1;

	t72 = (((x365+x366)+x367)<x368);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x369 = 0U;
	int8_t x370 = INT8_MIN;
	int8_t x371 = INT8_MAX;
	static volatile int32_t t73 = -7165296;

	t73 = (((x369+x370)+x371)<x372);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x376 = 71918U;
	volatile int32_t t74 = -4490;

	t74 = (((x373+x374)+x375)<x376);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x377 = 43U;
	uint16_t x378 = 255U;
	int64_t x379 = -59625711LL;
	volatile int16_t x380 = INT16_MIN;
	static volatile int32_t t75 = 1;

	t75 = (((x377+x378)+x379)<x380);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x381 = 7U;
	uint64_t x382 = 1261971LLU;
	int64_t x383 = INT64_MIN;
	static int32_t t76 = -234019180;

	t76 = (((x381+x382)+x383)<x384);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x385 = 272U;
	volatile int16_t x386 = INT16_MIN;
	static int8_t x388 = INT8_MAX;
	volatile int32_t t77 = -1;

	t77 = (((x385+x386)+x387)<x388);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x397 = UINT8_MAX;
	static uint64_t x398 = 6737808LLU;
	uint64_t x399 = 0LLU;

	t78 = (((x397+x398)+x399)<x400);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x401 = UINT32_MAX;
	int8_t x402 = INT8_MIN;
	int64_t x403 = 23132110557LL;
	uint32_t x404 = 95822821U;

	t79 = (((x401+x402)+x403)<x404);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x406 = -1;
	static volatile uint32_t x407 = UINT32_MAX;
	volatile int32_t x408 = -1;
	int32_t t80 = 374745422;

	t80 = (((x405+x406)+x407)<x408);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x409 = UINT16_MAX;
	uint32_t x410 = 70120U;
	uint8_t x411 = 30U;
	uint64_t x412 = 163667LLU;
	int32_t t81 = 1373298;

	t81 = (((x409+x410)+x411)<x412);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x413 = 483924035192081013LLU;
	static volatile int16_t x414 = INT16_MIN;
	int16_t x415 = -1;
	int64_t x416 = -844LL;
	int32_t t82 = -1;

	t82 = (((x413+x414)+x415)<x416);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x417 = 1005915644U;
	uint8_t x418 = UINT8_MAX;
	int16_t x419 = -1;
	int32_t t83 = 6;

	t83 = (((x417+x418)+x419)<x420);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x421 = 1927680455U;
	int16_t x422 = -1;
	int16_t x424 = INT16_MAX;
	volatile int32_t t84 = -13697131;

	t84 = (((x421+x422)+x423)<x424);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x425 = 10297;
	uint64_t x426 = 25216388444726LLU;
	volatile int8_t x427 = 0;
	int8_t x428 = 11;
	volatile int32_t t85 = 1;

	t85 = (((x425+x426)+x427)<x428);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x429 = UINT8_MAX;
	uint16_t x430 = UINT16_MAX;
	int64_t x431 = -4625767LL;
	int32_t x432 = 615378627;

	t86 = (((x429+x430)+x431)<x432);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x433 = -874881711581152LL;
	int32_t x434 = INT32_MAX;
	int8_t x435 = 0;
	int32_t t87 = -3725;

	t87 = (((x433+x434)+x435)<x436);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x438 = 350791LL;
	uint16_t x440 = UINT16_MAX;
	volatile int32_t t88 = -1300607;

	t88 = (((x437+x438)+x439)<x440);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x445 = 269LLU;
	static int16_t x446 = 84;
	uint64_t x447 = UINT64_MAX;
	static uint8_t x448 = 31U;
	int32_t t89 = -124272431;

	t89 = (((x445+x446)+x447)<x448);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x457 = INT16_MAX;
	int16_t x459 = INT16_MIN;

	t90 = (((x457+x458)+x459)<x460);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x461 = -1;
	uint8_t x463 = UINT8_MAX;
	static int32_t t91 = -3;

	t91 = (((x461+x462)+x463)<x464);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x469 = 2650346036800433LLU;
	int64_t x470 = -165522207781LL;
	static int16_t x471 = INT16_MIN;
	volatile int8_t x472 = -1;

	t92 = (((x469+x470)+x471)<x472);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x473 = UINT64_MAX;
	int32_t x474 = INT32_MIN;
	int64_t x475 = INT64_MIN;
	static int64_t x476 = INT64_MIN;
	int32_t t93 = -234904234;

	t93 = (((x473+x474)+x475)<x476);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x478 = 1409406889356LLU;
	static int16_t x479 = INT16_MIN;
	uint64_t x480 = UINT64_MAX;
	volatile int32_t t94 = -13481906;

	t94 = (((x477+x478)+x479)<x480);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x481 = -101LL;
	static int32_t x482 = -166504;
	int32_t x483 = INT32_MAX;
	volatile int32_t t95 = -123;

	t95 = (((x481+x482)+x483)<x484);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x485 = UINT16_MAX;
	static int64_t x486 = -2135057046LL;
	int32_t x487 = -1;
	int32_t x488 = 38866316;
	static volatile int32_t t96 = 2;

	t96 = (((x485+x486)+x487)<x488);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x490 = INT8_MIN;
	static volatile uint32_t x491 = UINT32_MAX;
	int32_t x492 = INT32_MAX;
	int32_t t97 = 4;

	t97 = (((x489+x490)+x491)<x492);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x497 = 34382732158084615LLU;
	volatile int8_t x498 = -1;
	static uint64_t x499 = 358261LLU;
	int32_t x500 = INT32_MIN;
	volatile int32_t t98 = -7167;

	t98 = (((x497+x498)+x499)<x500);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x502 = 2002U;
	static uint64_t x503 = UINT64_MAX;
	static volatile int32_t t99 = 447;

	t99 = (((x501+x502)+x503)<x504);

	if (t99 != 0) { NG(); } else { ; }
	
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

