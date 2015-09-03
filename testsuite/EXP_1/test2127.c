#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -66;
static int32_t t1 = -5409;
volatile uint8_t x16 = UINT8_MAX;
int32_t t4 = -864;
static int16_t x21 = 1494;
int64_t x27 = -257500145921036911LL;
uint8_t x30 = UINT8_MAX;
uint64_t x31 = 9142345817LLU;
uint8_t x35 = 13U;
volatile uint16_t x36 = 3922U;
volatile int32_t t9 = 0;
uint64_t x44 = 229945814565445LLU;
int32_t t10 = 418480974;
volatile uint32_t x45 = 113833014U;
int64_t x47 = INT64_MIN;
uint16_t x50 = 3U;
int8_t x53 = 1;
uint8_t x56 = 4U;
int32_t t13 = -3540;
int64_t x61 = -3078058738602649433LL;
volatile int32_t t15 = 0;
int32_t x65 = INT32_MIN;
volatile int8_t x69 = INT8_MIN;
int32_t x72 = INT32_MAX;
uint8_t x78 = 2U;
uint32_t x81 = 14U;
int8_t x82 = INT8_MAX;
uint16_t x83 = 4947U;
static uint16_t x88 = 2462U;
int16_t x91 = INT16_MAX;
volatile int32_t x95 = 0;
static uint16_t x96 = 11U;
int32_t t23 = 54722;
int8_t x99 = INT8_MIN;
volatile uint64_t x101 = 15598008485335972LLU;
int8_t x102 = 1;
uint16_t x103 = 100U;
uint32_t x105 = UINT32_MAX;
volatile int32_t t26 = 311855912;
static int8_t x112 = -1;
static int16_t x115 = INT16_MIN;
int16_t x116 = -1;
static int8_t x120 = INT8_MIN;
volatile uint64_t x124 = 456533LLU;
static int32_t x127 = INT32_MIN;
uint16_t x130 = 2402U;
volatile uint8_t x139 = 126U;
int32_t t34 = 181625826;
int32_t x144 = 7665985;
static int8_t x147 = INT8_MAX;
uint16_t x156 = 15U;
volatile int32_t t40 = -3280;
uint16_t x165 = UINT16_MAX;
volatile int16_t x171 = INT16_MAX;
int32_t t43 = -2;
uint8_t x177 = 5U;
int32_t x182 = INT32_MIN;
int64_t x183 = -27LL;
int64_t x187 = 1039442476LL;
int64_t x189 = INT64_MAX;
volatile int8_t x196 = 1;
volatile int32_t t48 = 345252592;
uint64_t x197 = UINT64_MAX;
static int32_t x200 = 21636089;
int32_t t49 = -15906;
volatile int8_t x201 = 1;
int16_t x205 = INT16_MIN;
int32_t x209 = INT32_MAX;
static uint32_t x210 = 60095U;
int8_t x211 = 25;
int32_t t54 = -1995;
uint64_t x226 = UINT64_MAX;
int32_t x227 = -1;
volatile int32_t t57 = -7500350;
uint64_t x247 = 2900LLU;
int32_t t63 = 158;
volatile int64_t x259 = INT64_MIN;
static volatile int32_t t64 = -84916831;
int32_t x263 = INT32_MAX;
static uint64_t x264 = UINT64_MAX;
uint32_t x278 = UINT32_MAX;
static int8_t x287 = -1;
volatile int16_t x289 = INT16_MIN;
uint16_t x290 = UINT16_MAX;
static volatile int32_t t72 = -180;
int32_t x295 = INT32_MIN;
volatile uint32_t x296 = UINT32_MAX;
int64_t x299 = -55LL;
int64_t x302 = -500961656202LL;
static volatile int64_t x308 = -64092LL;
int8_t x315 = INT8_MIN;
volatile int32_t t79 = 2;
volatile int32_t t80 = 59756;
int16_t x325 = INT16_MIN;
volatile int32_t t81 = -789;
uint64_t x331 = 39708387706117914LLU;
uint8_t x339 = 38U;
int32_t x341 = 3745349;
static int16_t x346 = INT16_MIN;
int16_t x350 = INT16_MAX;
int64_t x357 = INT64_MAX;
volatile int64_t x358 = INT64_MAX;
static int16_t x359 = INT16_MIN;
int64_t x360 = INT64_MIN;
static volatile int16_t x363 = INT16_MIN;
uint8_t x364 = UINT8_MAX;
volatile int32_t t91 = -3;
volatile int8_t x370 = 2;
uint64_t x374 = 15557700537584289LLU;
uint32_t x382 = UINT32_MAX;
static uint8_t x395 = 0U;
volatile int32_t t99 = 296;


void f0(void) {
	volatile int64_t x2 = INT64_MAX;
	int32_t x3 = INT32_MIN;
	volatile int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -7;

	t0 = (((x1^x2)==x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	int64_t x6 = INT64_MAX;
	static int8_t x7 = INT8_MAX;
	int16_t x8 = -1;

	t1 = (((x5^x6)==x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 78708538LL;
	static uint8_t x10 = UINT8_MAX;
	static uint32_t x11 = 1855268897U;
	volatile uint32_t x12 = UINT32_MAX;
	int32_t t2 = 0;

	t2 = (((x9^x10)==x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	uint64_t x14 = UINT64_MAX;
	int8_t x15 = -1;
	int32_t t3 = 99530;

	t3 = (((x13^x14)==x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 20U;
	int8_t x18 = INT8_MAX;
	uint8_t x19 = UINT8_MAX;
	static uint8_t x20 = UINT8_MAX;

	t4 = (((x17^x18)==x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x22 = INT32_MIN;
	int8_t x23 = INT8_MAX;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = 100477600;

	t5 = (((x21^x22)==x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -419878649664755LL;
	int16_t x26 = INT16_MIN;
	static volatile int16_t x28 = INT16_MAX;
	int32_t t6 = -13168283;

	t6 = (((x25^x26)==x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	uint64_t x32 = 4436LLU;
	int32_t t7 = -519024;

	t7 = (((x29^x30)==x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = UINT8_MAX;
	static int8_t x34 = INT8_MAX;
	int32_t t8 = 5907;

	t8 = (((x33^x34)==x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 166U;
	uint32_t x38 = 1691U;
	int16_t x39 = INT16_MAX;
	volatile uint16_t x40 = 5U;

	t9 = (((x37^x38)==x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 246326U;
	int8_t x42 = INT8_MIN;
	int8_t x43 = -1;

	t10 = (((x41^x42)==x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = -1;
	volatile uint32_t x48 = 683263U;
	int32_t t11 = 328701;

	t11 = (((x45^x46)==x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	uint64_t x51 = 259448879387243678LLU;
	int32_t x52 = INT32_MIN;
	static int32_t t12 = 20547847;

	t12 = (((x49^x50)==x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x54 = 235991U;
	static int16_t x55 = -5888;

	t13 = (((x53^x54)==x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	static int64_t x58 = 18561LL;
	uint8_t x59 = 48U;
	int32_t x60 = INT32_MIN;
	volatile int32_t t14 = -110694;

	t14 = (((x57^x58)==x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x62 = 0U;
	volatile int64_t x63 = -1LL;
	volatile int8_t x64 = INT8_MAX;

	t15 = (((x61^x62)==x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x66 = -1;
	int8_t x67 = -7;
	uint16_t x68 = 0U;
	volatile int32_t t16 = 7;

	t16 = (((x65^x66)==x67)==x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x70 = 27U;
	int64_t x71 = -1LL;
	static int32_t t17 = -1710043;

	t17 = (((x69^x70)==x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = UINT16_MAX;
	int32_t x74 = INT32_MAX;
	uint16_t x75 = UINT16_MAX;
	static int8_t x76 = INT8_MIN;
	volatile int32_t t18 = 7;

	t18 = (((x73^x74)==x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 0U;
	static uint8_t x79 = 10U;
	int32_t x80 = INT32_MIN;
	int32_t t19 = 115098216;

	t19 = (((x77^x78)==x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x84 = 377475895LL;
	volatile int32_t t20 = -4546;

	t20 = (((x81^x82)==x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 6449U;
	uint32_t x86 = 515788134U;
	int64_t x87 = INT64_MAX;
	volatile int32_t t21 = 54;

	t21 = (((x85^x86)==x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 98858U;
	static volatile int32_t x90 = 11584;
	volatile int64_t x92 = 1148110LL;
	volatile int32_t t22 = -253443196;

	t22 = (((x89^x90)==x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = 88767775;
	int8_t x94 = -1;

	t23 = (((x93^x94)==x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 3397U;
	int64_t x98 = 868306291LL;
	uint32_t x100 = 370U;
	int32_t t24 = -3430;

	t24 = (((x97^x98)==x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = 99;

	t25 = (((x101^x102)==x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x106 = 1;
	int64_t x107 = 1576860059326LL;
	uint64_t x108 = 4540271159347870322LLU;

	t26 = (((x105^x106)==x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	uint16_t x110 = 3756U;
	int32_t x111 = -17945858;
	int32_t t27 = -3460;

	t27 = (((x109^x110)==x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = INT16_MIN;
	uint32_t x114 = 21U;
	volatile int32_t t28 = -1288;

	t28 = (((x113^x114)==x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = -1;
	int64_t x118 = 2008500553421903677LL;
	volatile int8_t x119 = INT8_MIN;
	volatile int32_t t29 = -218775;

	t29 = (((x117^x118)==x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	uint64_t x122 = UINT64_MAX;
	uint8_t x123 = 28U;
	int32_t t30 = -13414;

	t30 = (((x121^x122)==x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = -1LL;
	int32_t x126 = INT32_MIN;
	static int64_t x128 = 1524853029742171125LL;
	volatile int32_t t31 = 55018;

	t31 = (((x125^x126)==x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	static int8_t x131 = -7;
	static int32_t x132 = INT32_MAX;
	int32_t t32 = -818;

	t32 = (((x129^x130)==x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	volatile int64_t x134 = -1LL;
	volatile int16_t x135 = -6;
	int8_t x136 = INT8_MAX;
	volatile int32_t t33 = 2650;

	t33 = (((x133^x134)==x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -7;
	int16_t x138 = -7;
	static volatile int32_t x140 = INT32_MIN;

	t34 = (((x137^x138)==x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	int64_t x142 = -1LL;
	uint16_t x143 = 36U;
	int32_t t35 = -7615;

	t35 = (((x141^x142)==x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int64_t x146 = INT64_MIN;
	int16_t x148 = 0;
	volatile int32_t t36 = 3;

	t36 = (((x145^x146)==x147)==x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 0;
	uint64_t x150 = UINT64_MAX;
	uint16_t x151 = 1U;
	static volatile int64_t x152 = INT64_MAX;
	static volatile int32_t t37 = -3994;

	t37 = (((x149^x150)==x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	int8_t x154 = -1;
	uint64_t x155 = 94586LLU;
	volatile int32_t t38 = -14;

	t38 = (((x153^x154)==x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	int8_t x158 = INT8_MAX;
	static int32_t x159 = INT32_MIN;
	static int16_t x160 = 2;
	int32_t t39 = -1;

	t39 = (((x157^x158)==x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	int32_t x162 = -397738;
	int32_t x163 = -1;
	int64_t x164 = INT64_MAX;

	t40 = (((x161^x162)==x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x166 = UINT64_MAX;
	int64_t x167 = INT64_MIN;
	int16_t x168 = -1;
	volatile int32_t t41 = 19;

	t41 = (((x165^x166)==x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MIN;
	int64_t x170 = INT64_MAX;
	int16_t x172 = INT16_MIN;
	volatile int32_t t42 = 156;

	t42 = (((x169^x170)==x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = 414971LLU;
	volatile int16_t x174 = -1;
	uint32_t x175 = UINT32_MAX;
	static int64_t x176 = -814675685690910030LL;

	t43 = (((x173^x174)==x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x178 = -5967220322LL;
	uint8_t x179 = 8U;
	uint16_t x180 = 6279U;
	volatile int32_t t44 = 0;

	t44 = (((x177^x178)==x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	static int8_t x184 = -1;
	volatile int32_t t45 = 2;

	t45 = (((x181^x182)==x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 525036770LLU;
	static volatile uint32_t x186 = 7808U;
	static int8_t x188 = INT8_MIN;
	volatile int32_t t46 = -1403127;

	t46 = (((x185^x186)==x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = -1;
	int32_t x191 = INT32_MIN;
	volatile uint8_t x192 = 1U;
	static int32_t t47 = 94819;

	t47 = (((x189^x190)==x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 472284009350LLU;
	int64_t x194 = INT64_MAX;
	uint16_t x195 = 13209U;

	t48 = (((x193^x194)==x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x198 = INT64_MIN;
	volatile int8_t x199 = INT8_MAX;

	t49 = (((x197^x198)==x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = -1;
	static volatile int32_t x203 = INT32_MIN;
	volatile uint16_t x204 = 378U;
	volatile int32_t t50 = 2;

	t50 = (((x201^x202)==x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x206 = 66906U;
	uint8_t x207 = 1U;
	int8_t x208 = INT8_MAX;
	volatile int32_t t51 = 16869993;

	t51 = (((x205^x206)==x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x212 = 42420LLU;
	volatile int32_t t52 = -8244585;

	t52 = (((x209^x210)==x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	uint64_t x214 = 5948LLU;
	static int8_t x215 = INT8_MIN;
	int16_t x216 = -7;
	int32_t t53 = 29;

	t53 = (((x213^x214)==x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = INT64_MAX;
	static int64_t x218 = INT64_MIN;
	static int8_t x219 = INT8_MIN;
	uint32_t x220 = 7U;

	t54 = (((x217^x218)==x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	static int16_t x222 = INT16_MIN;
	int16_t x223 = 1;
	int16_t x224 = INT16_MIN;
	volatile int32_t t55 = -23008;

	t55 = (((x221^x222)==x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	static volatile uint8_t x228 = 28U;
	int32_t t56 = -230547;

	t56 = (((x225^x226)==x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 2;
	static int8_t x230 = 10;
	uint16_t x231 = 742U;
	volatile uint8_t x232 = 2U;

	t57 = (((x229^x230)==x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MAX;
	volatile int64_t x234 = -1LL;
	uint8_t x235 = 6U;
	volatile uint8_t x236 = UINT8_MAX;
	int32_t t58 = -291;

	t58 = (((x233^x234)==x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -6812968876910LL;
	volatile int16_t x238 = 11943;
	int16_t x239 = -1;
	int64_t x240 = 1LL;
	int32_t t59 = 44;

	t59 = (((x237^x238)==x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 0;
	static uint8_t x242 = 1U;
	int16_t x243 = 30;
	int8_t x244 = INT8_MIN;
	volatile int32_t t60 = -574;

	t60 = (((x241^x242)==x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	int8_t x246 = INT8_MAX;
	volatile int8_t x248 = 1;
	volatile int32_t t61 = 246;

	t61 = (((x245^x246)==x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = -1;
	volatile int32_t x250 = INT32_MAX;
	static uint64_t x251 = UINT64_MAX;
	int32_t x252 = 0;
	static volatile int32_t t62 = 3761655;

	t62 = (((x249^x250)==x251)==x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x253 = INT8_MIN;
	int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MAX;
	int16_t x256 = -1;

	t63 = (((x253^x254)==x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x257 = INT16_MAX;
	static volatile int16_t x258 = -231;
	uint16_t x260 = 2U;

	t64 = (((x257^x258)==x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	int8_t x262 = INT8_MAX;
	static volatile int32_t t65 = -612467;

	t65 = (((x261^x262)==x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	int16_t x266 = -1;
	int32_t x267 = 24364;
	uint32_t x268 = UINT32_MAX;
	int32_t t66 = 34;

	t66 = (((x265^x266)==x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x269 = INT32_MIN;
	uint32_t x270 = 17U;
	int32_t x271 = -51057;
	int32_t x272 = -198494168;
	volatile int32_t t67 = 3;

	t67 = (((x269^x270)==x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 3279;
	uint16_t x274 = 821U;
	int8_t x275 = INT8_MIN;
	int64_t x276 = INT64_MIN;
	int32_t t68 = -1;

	t68 = (((x273^x274)==x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	int16_t x279 = INT16_MIN;
	static volatile int64_t x280 = 25140319571LL;
	volatile int32_t t69 = 5096610;

	t69 = (((x277^x278)==x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 6U;
	static uint64_t x282 = 75972410241680LLU;
	int8_t x283 = INT8_MAX;
	static volatile int64_t x284 = 5663885952LL;
	volatile int32_t t70 = -632026622;

	t70 = (((x281^x282)==x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -11924962406LL;
	uint32_t x286 = 1U;
	volatile int16_t x288 = INT16_MAX;
	int32_t t71 = 34086641;

	t71 = (((x285^x286)==x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x291 = INT16_MAX;
	uint16_t x292 = UINT16_MAX;

	t72 = (((x289^x290)==x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	volatile int64_t x294 = INT64_MAX;
	volatile int32_t t73 = 754;

	t73 = (((x293^x294)==x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x297 = UINT64_MAX;
	int16_t x298 = INT16_MAX;
	uint16_t x300 = 1514U;
	static int32_t t74 = -34813524;

	t74 = (((x297^x298)==x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	int16_t x303 = INT16_MAX;
	uint8_t x304 = 25U;
	int32_t t75 = 10351054;

	t75 = (((x301^x302)==x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = UINT64_MAX;
	static uint32_t x306 = UINT32_MAX;
	uint32_t x307 = 48094559U;
	int32_t t76 = 3095;

	t76 = (((x305^x306)==x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	uint64_t x310 = UINT64_MAX;
	uint8_t x311 = UINT8_MAX;
	volatile int8_t x312 = INT8_MAX;
	volatile int32_t t77 = 1;

	t77 = (((x309^x310)==x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = INT8_MIN;
	int64_t x314 = INT64_MIN;
	volatile int32_t x316 = -4;
	volatile int32_t t78 = -61;

	t78 = (((x313^x314)==x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	int8_t x318 = INT8_MIN;
	int32_t x319 = INT32_MAX;
	uint64_t x320 = 3357078587925616LLU;

	t79 = (((x317^x318)==x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 2U;
	int8_t x322 = INT8_MAX;
	int64_t x323 = INT64_MIN;
	volatile int8_t x324 = 4;

	t80 = (((x321^x322)==x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = INT32_MIN;
	int32_t x327 = -1646;
	static int64_t x328 = INT64_MIN;

	t81 = (((x325^x326)==x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 0U;
	int64_t x330 = 43LL;
	uint32_t x332 = 2U;
	static volatile int32_t t82 = -1801;

	t82 = (((x329^x330)==x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x333 = 0U;
	volatile uint32_t x334 = 10U;
	int16_t x335 = 4;
	int64_t x336 = INT64_MIN;
	int32_t t83 = -59685907;

	t83 = (((x333^x334)==x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 951213399LLU;
	volatile int32_t x338 = INT32_MIN;
	uint8_t x340 = 0U;
	int32_t t84 = 397587427;

	t84 = (((x337^x338)==x339)==x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = INT8_MAX;
	uint32_t x343 = UINT32_MAX;
	int64_t x344 = 11564772483LL;
	volatile int32_t t85 = 73309;

	t85 = (((x341^x342)==x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 45LLU;
	int32_t x347 = INT32_MAX;
	volatile int8_t x348 = -1;
	int32_t t86 = 1;

	t86 = (((x345^x346)==x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = UINT64_MAX;
	static uint8_t x351 = 47U;
	int32_t x352 = -170391;
	volatile int32_t t87 = -879492;

	t87 = (((x349^x350)==x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	static volatile uint16_t x354 = 30U;
	int8_t x355 = -1;
	static uint16_t x356 = 38U;
	static volatile int32_t t88 = -14;

	t88 = (((x353^x354)==x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t t89 = 790835957;

	t89 = (((x357^x358)==x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	int64_t x362 = INT64_MIN;
	volatile int32_t t90 = 63245;

	t90 = (((x361^x362)==x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	uint8_t x366 = UINT8_MAX;
	static uint8_t x367 = 21U;
	uint8_t x368 = 0U;

	t91 = (((x365^x366)==x367)==x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	int32_t x371 = INT32_MIN;
	int64_t x372 = -1LL;
	volatile int32_t t92 = -53;

	t92 = (((x369^x370)==x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MIN;
	uint16_t x375 = 82U;
	int64_t x376 = 106213761LL;
	static volatile int32_t t93 = 5;

	t93 = (((x373^x374)==x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = 31860388LL;
	int32_t x378 = 241645821;
	uint64_t x379 = 108175727571294LLU;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t94 = -58;

	t94 = (((x377^x378)==x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	uint32_t x383 = UINT32_MAX;
	uint8_t x384 = 3U;
	int32_t t95 = -53150;

	t95 = (((x381^x382)==x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x385 = 16982781019LLU;
	uint16_t x386 = UINT16_MAX;
	static uint16_t x387 = 1145U;
	static int8_t x388 = -1;
	static int32_t t96 = 8006;

	t96 = (((x385^x386)==x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = -39;
	static uint16_t x390 = 2180U;
	volatile uint16_t x391 = UINT16_MAX;
	static int8_t x392 = INT8_MIN;
	static volatile int32_t t97 = -3994184;

	t97 = (((x389^x390)==x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = 0;
	int16_t x394 = INT16_MIN;
	int32_t x396 = -6912;
	int32_t t98 = 768602;

	t98 = (((x393^x394)==x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	static int64_t x398 = INT64_MIN;
	static int8_t x399 = INT8_MAX;
	int8_t x400 = INT8_MIN;

	t99 = (((x397^x398)==x399)==x400);

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

