#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x6 = INT32_MIN;
static int64_t x11 = -11LL;
uint32_t x15 = 4U;
int32_t t3 = 0;
static int8_t x20 = 1;
int32_t x21 = INT32_MIN;
static volatile int64_t x36 = 114173107099LL;
int32_t x37 = -3939818;
uint64_t x39 = 27729782292110301LLU;
int32_t t9 = -188789698;
int32_t x42 = 211847;
static uint64_t x48 = 81878LLU;
volatile int32_t x52 = INT32_MAX;
int8_t x57 = -1;
int32_t x60 = -1;
static uint64_t x65 = 3815508591178914312LLU;
uint8_t x69 = 84U;
int8_t x70 = INT8_MIN;
int64_t x76 = 114242LL;
int32_t x79 = 12004229;
uint32_t x80 = 69878U;
uint32_t x85 = 7292434U;
volatile int64_t x92 = INT64_MIN;
int64_t x95 = INT64_MIN;
static uint16_t x100 = 3U;
volatile int8_t x102 = INT8_MIN;
int32_t x109 = INT32_MIN;
volatile int32_t t27 = 820764;
int32_t x114 = 495;
volatile int16_t x119 = -1;
volatile int8_t x121 = -1;
uint32_t x127 = UINT32_MAX;
volatile int32_t t31 = -220;
int32_t x129 = INT32_MIN;
static volatile int8_t x136 = -1;
uint8_t x139 = UINT8_MAX;
static int16_t x140 = INT16_MIN;
int16_t x149 = -1;
uint8_t x152 = 1U;
int32_t t37 = 20986996;
int8_t x156 = 0;
int32_t t38 = 7099;
int64_t x169 = -56986484223107843LL;
int8_t x171 = -1;
int32_t x180 = 679;
int32_t t44 = -410680655;
int16_t x183 = INT16_MIN;
static int64_t x185 = INT64_MIN;
static int64_t x186 = INT64_MIN;
int64_t x188 = -27532LL;
volatile int32_t t47 = -55;
static int8_t x195 = INT8_MIN;
static int16_t x198 = INT16_MIN;
static int32_t t49 = 1034802831;
volatile int32_t x203 = INT32_MIN;
static int16_t x206 = INT16_MAX;
static volatile int32_t t51 = 45515;
int32_t t52 = 31047;
int32_t t54 = 123603;
int8_t x221 = -8;
static volatile int32_t x228 = 148216;
int64_t x229 = INT64_MIN;
static int32_t x231 = -1;
int32_t t57 = -2770960;
volatile int32_t t58 = -5509;
int64_t x238 = 7048874380208615LL;
uint16_t x248 = 2149U;
volatile int64_t x250 = INT64_MAX;
uint32_t x252 = 2007U;
int32_t t65 = -3;
int8_t x265 = -9;
volatile uint32_t x268 = UINT32_MAX;
static uint8_t x277 = 0U;
volatile uint8_t x291 = 69U;
int32_t t72 = 104880;
int32_t x294 = -1;
volatile int8_t x295 = INT8_MIN;
int64_t x300 = INT64_MAX;
static volatile int32_t t74 = -8;
uint32_t x306 = 1U;
static volatile uint16_t x309 = UINT16_MAX;
int64_t x311 = INT64_MIN;
static volatile int32_t t77 = 173905952;
volatile int32_t t78 = -1203394;
int16_t x320 = INT16_MIN;
static int64_t x322 = INT64_MIN;
int8_t x323 = -1;
int8_t x324 = 2;
uint8_t x326 = 0U;
int64_t x330 = 86509289174LL;
int64_t x334 = -9215LL;
static volatile int64_t x335 = -1LL;
static int64_t x338 = INT64_MAX;
int32_t x339 = 1;
volatile int32_t t84 = -844857864;
int32_t x344 = INT32_MIN;
static int64_t x345 = 44752LL;
int64_t x346 = INT64_MIN;
int32_t x347 = INT32_MIN;
volatile int32_t t86 = -645902;
uint8_t x352 = 3U;
int64_t x353 = 420LL;
int32_t t88 = 11522;
int16_t x358 = INT16_MIN;
uint8_t x362 = UINT8_MAX;
static uint64_t x364 = UINT64_MAX;
uint64_t x372 = 3862604508933787237LLU;
static int32_t x376 = INT32_MIN;
int8_t x380 = INT8_MIN;
int32_t x388 = -1;
static uint64_t x394 = 4179347864LLU;
uint8_t x400 = UINT8_MAX;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int16_t x2 = INT16_MAX;
	int64_t x3 = -528956875224390LL;
	int64_t x4 = INT64_MAX;
	volatile int32_t t0 = 8724;

	t0 = ((x1|(x2^x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 3422;
	static int8_t x7 = INT8_MIN;
	static int8_t x8 = -1;
	volatile int32_t t1 = -143;

	t1 = ((x5|(x6^x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 7792;
	int32_t x10 = INT32_MIN;
	uint64_t x12 = 1656836254619030850LLU;
	static int32_t t2 = -1021416;

	t2 = ((x9|(x10^x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -16;
	uint32_t x14 = UINT32_MAX;
	int64_t x16 = -273695480313444785LL;

	t3 = ((x13|(x14^x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 4688;
	volatile uint64_t x18 = UINT64_MAX;
	uint8_t x19 = UINT8_MAX;
	volatile int32_t t4 = -64;

	t4 = ((x17|(x18^x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = UINT16_MAX;
	uint16_t x23 = 28983U;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -51075;

	t5 = ((x21|(x22^x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	volatile uint64_t x26 = 2855413LLU;
	static int64_t x27 = INT64_MAX;
	volatile int8_t x28 = -1;
	int32_t t6 = -2767797;

	t6 = ((x25|(x26^x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 89853770302317236LLU;
	int16_t x30 = -1;
	int16_t x31 = -8525;
	volatile uint8_t x32 = 4U;
	static volatile int32_t t7 = 16;

	t7 = ((x29|(x30^x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 2905U;
	uint32_t x34 = 36U;
	int16_t x35 = 3;
	volatile int32_t t8 = 14007;

	t8 = ((x33|(x34^x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MAX;
	int16_t x40 = INT16_MIN;

	t9 = ((x37|(x38^x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	uint8_t x43 = UINT8_MAX;
	uint32_t x44 = 2437U;
	int32_t t10 = -353488;

	t10 = ((x41|(x42^x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = 52405;
	int16_t x46 = -1;
	int64_t x47 = INT64_MIN;
	volatile int32_t t11 = -97741;

	t11 = ((x45|(x46^x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 381489;
	static int16_t x50 = INT16_MIN;
	int64_t x51 = INT64_MAX;
	int32_t t12 = -19441;

	t12 = ((x49|(x50^x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MIN;
	volatile int16_t x54 = INT16_MIN;
	int8_t x55 = INT8_MAX;
	static uint16_t x56 = 16492U;
	int32_t t13 = 190056;

	t13 = ((x53|(x54^x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MAX;
	int32_t x59 = INT32_MIN;
	int32_t t14 = -30612;

	t14 = ((x57|(x58^x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 1339386;
	volatile int64_t x62 = INT64_MIN;
	int8_t x63 = INT8_MIN;
	int16_t x64 = INT16_MAX;
	int32_t t15 = 91969695;

	t15 = ((x61|(x62^x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = -1;
	static int16_t x67 = INT16_MAX;
	static int32_t x68 = INT32_MIN;
	volatile int32_t t16 = -195909;

	t16 = ((x65|(x66^x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x71 = 689029748270403160LL;
	volatile uint64_t x72 = UINT64_MAX;
	static volatile int32_t t17 = -1374;

	t17 = ((x69|(x70^x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int16_t x74 = INT16_MIN;
	int64_t x75 = INT64_MIN;
	volatile int32_t t18 = -12;

	t18 = ((x73|(x74^x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MIN;
	int64_t x78 = 728898700606199535LL;
	int32_t t19 = 10192548;

	t19 = ((x77|(x78^x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -53085409548873771LL;
	volatile int16_t x82 = INT16_MAX;
	int8_t x83 = -36;
	int32_t x84 = -1;
	int32_t t20 = -197048452;

	t20 = ((x81|(x82^x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x86 = 203U;
	int64_t x87 = -1LL;
	int8_t x88 = 56;
	static volatile int32_t t21 = 129;

	t21 = ((x85|(x86^x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 2U;
	int16_t x90 = INT16_MIN;
	int32_t x91 = INT32_MAX;
	volatile int32_t t22 = 96783794;

	t22 = ((x89|(x90^x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = -1;
	volatile int32_t x94 = 1;
	static uint16_t x96 = 163U;
	volatile int32_t t23 = -137237;

	t23 = ((x93|(x94^x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 993963868;
	int64_t x98 = 12251982438LL;
	volatile int16_t x99 = INT16_MAX;
	int32_t t24 = -38265403;

	t24 = ((x97|(x98^x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 17U;
	int16_t x103 = 3;
	int64_t x104 = INT64_MIN;
	static int32_t t25 = -7;

	t25 = ((x101|(x102^x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int8_t x106 = -1;
	int32_t x107 = 606;
	int16_t x108 = -7441;
	static volatile int32_t t26 = 1;

	t26 = ((x105|(x106^x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = INT16_MIN;
	volatile int32_t x111 = INT32_MAX;
	int64_t x112 = INT64_MIN;

	t27 = ((x109|(x110^x111))<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 1252421839U;
	int32_t x115 = 207440;
	volatile int8_t x116 = -1;
	int32_t t28 = -786473;

	t28 = ((x113|(x114^x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	static uint32_t x118 = UINT32_MAX;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = 4;

	t29 = ((x117|(x118^x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x122 = INT8_MIN;
	volatile int8_t x123 = INT8_MIN;
	int64_t x124 = 2134516LL;
	static volatile int32_t t30 = -570;

	t30 = ((x121|(x122^x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 48U;
	int8_t x126 = 2;
	uint8_t x128 = 1U;

	t31 = ((x125|(x126^x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = -9626979;
	int32_t x131 = -1;
	volatile int8_t x132 = -1;
	static int32_t t32 = 4849624;

	t32 = ((x129|(x130^x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	int64_t x134 = 461LL;
	uint8_t x135 = UINT8_MAX;
	volatile int32_t t33 = -278942037;

	t33 = ((x133|(x134^x135))<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	int16_t x138 = -3;
	static volatile int32_t t34 = 19;

	t34 = ((x137|(x138^x139))<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	static volatile int32_t x142 = INT32_MAX;
	int64_t x143 = -281900559921561069LL;
	int16_t x144 = 3;
	volatile int32_t t35 = -16339;

	t35 = ((x141|(x142^x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	int64_t x146 = INT64_MIN;
	uint32_t x147 = 8268652U;
	volatile int64_t x148 = -1LL;
	int32_t t36 = -201956837;

	t36 = ((x145|(x146^x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x150 = INT32_MAX;
	uint8_t x151 = UINT8_MAX;

	t37 = ((x149|(x150^x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	int8_t x154 = INT8_MAX;
	int32_t x155 = 37159279;

	t38 = ((x153|(x154^x155))<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -2;
	int32_t x158 = INT32_MIN;
	int8_t x159 = -1;
	uint64_t x160 = 6919LLU;
	static volatile int32_t t39 = -9100322;

	t39 = ((x157|(x158^x159))<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = INT64_MIN;
	static int32_t x162 = -384678375;
	int8_t x163 = 8;
	static uint16_t x164 = UINT16_MAX;
	volatile int32_t t40 = 48071394;

	t40 = ((x161|(x162^x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x165 = 54127148819LLU;
	int16_t x166 = -1;
	int64_t x167 = -408710LL;
	int16_t x168 = 1;
	volatile int32_t t41 = -1;

	t41 = ((x165|(x166^x167))<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = -1;
	static volatile int64_t x172 = INT64_MIN;
	volatile int32_t t42 = -222252063;

	t42 = ((x169|(x170^x171))<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = 25U;
	volatile int8_t x174 = INT8_MAX;
	uint32_t x175 = 69985465U;
	uint8_t x176 = UINT8_MAX;
	int32_t t43 = -224;

	t43 = ((x173|(x174^x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 118;
	int16_t x178 = INT16_MIN;
	uint32_t x179 = 800536U;

	t44 = ((x177|(x178^x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = 1;
	static volatile int64_t x182 = 34784881992LL;
	int64_t x184 = -15340198969LL;
	volatile int32_t t45 = -1068911642;

	t45 = ((x181|(x182^x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x187 = UINT8_MAX;
	volatile int32_t t46 = -201716;

	t46 = ((x185|(x186^x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	uint64_t x190 = UINT64_MAX;
	int64_t x191 = 74779530907290LL;
	int16_t x192 = -1;

	t47 = ((x189|(x190^x191))<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	uint8_t x194 = 3U;
	uint64_t x196 = 576554735438160003LLU;
	int32_t t48 = -1023514552;

	t48 = ((x193|(x194^x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	volatile int8_t x199 = INT8_MAX;
	int64_t x200 = 250752066853042LL;

	t49 = ((x197|(x198^x199))<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x201 = UINT64_MAX;
	int32_t x202 = 672845;
	int16_t x204 = 12515;
	int32_t t50 = 57;

	t50 = ((x201|(x202^x203))<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 53U;
	uint16_t x207 = 47U;
	static int16_t x208 = INT16_MIN;

	t51 = ((x205|(x206^x207))<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int32_t x210 = INT32_MAX;
	uint64_t x211 = UINT64_MAX;
	static int8_t x212 = INT8_MIN;

	t52 = ((x209|(x210^x211))<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MIN;
	int64_t x214 = -1LL;
	int32_t x215 = INT32_MAX;
	volatile int64_t x216 = -420861972963500LL;
	int32_t t53 = -53;

	t53 = ((x213|(x214^x215))<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	int8_t x218 = -28;
	int32_t x219 = -1;
	static uint32_t x220 = UINT32_MAX;

	t54 = ((x217|(x218^x219))<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x222 = INT8_MAX;
	uint64_t x223 = 292298572LLU;
	int8_t x224 = 36;
	volatile int32_t t55 = -26719741;

	t55 = ((x221|(x222^x223))<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = 5;
	int32_t x226 = 9;
	int32_t x227 = 42606;
	volatile int32_t t56 = -3101;

	t56 = ((x225|(x226^x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = -11823;
	volatile int64_t x232 = -98039229419058006LL;

	t57 = ((x229|(x230^x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -498;
	int16_t x234 = -30;
	static volatile int32_t x235 = INT32_MIN;
	int16_t x236 = -1;

	t58 = ((x233|(x234^x235))<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -50;
	int64_t x239 = INT64_MIN;
	int32_t x240 = INT32_MIN;
	volatile int32_t t59 = 3055867;

	t59 = ((x237|(x238^x239))<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	static uint64_t x242 = 528LLU;
	volatile uint16_t x243 = UINT16_MAX;
	uint32_t x244 = UINT32_MAX;
	static int32_t t60 = -29381617;

	t60 = ((x241|(x242^x243))<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	int8_t x246 = 3;
	static uint64_t x247 = 2627953243514699LLU;
	static volatile int32_t t61 = -442804;

	t61 = ((x245|(x246^x247))<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	static uint8_t x251 = 13U;
	volatile int32_t t62 = 154;

	t62 = ((x249|(x250^x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	static int8_t x254 = INT8_MIN;
	uint32_t x255 = UINT32_MAX;
	static volatile int16_t x256 = -19;
	volatile int32_t t63 = -2;

	t63 = ((x253|(x254^x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	int64_t x258 = 155872078783341643LL;
	uint32_t x259 = 29U;
	volatile uint16_t x260 = 32141U;
	int32_t t64 = 739;

	t64 = ((x257|(x258^x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 6U;
	static int64_t x262 = 17884023200082710LL;
	int64_t x263 = 1LL;
	int32_t x264 = INT32_MAX;

	t65 = ((x261|(x262^x263))<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x266 = INT32_MIN;
	int32_t x267 = -191;
	static int32_t t66 = 96583709;

	t66 = ((x265|(x266^x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = -1029;
	volatile int32_t x270 = -1267331;
	uint8_t x271 = 47U;
	uint8_t x272 = 1U;
	int32_t t67 = 15;

	t67 = ((x269|(x270^x271))<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 3105U;
	uint8_t x274 = UINT8_MAX;
	int32_t x275 = -59913;
	volatile uint16_t x276 = 0U;
	int32_t t68 = 9138;

	t68 = ((x273|(x274^x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x278 = 96U;
	int16_t x279 = INT16_MAX;
	volatile int64_t x280 = INT64_MIN;
	volatile int32_t t69 = -3;

	t69 = ((x277|(x278^x279))<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 38U;
	volatile int64_t x282 = -1LL;
	int16_t x283 = -1;
	uint32_t x284 = 87328391U;
	int32_t t70 = 680;

	t70 = ((x281|(x282^x283))<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	static volatile int32_t x286 = INT32_MIN;
	uint32_t x287 = UINT32_MAX;
	int8_t x288 = INT8_MIN;
	static volatile int32_t t71 = -9127;

	t71 = ((x285|(x286^x287))<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	int8_t x290 = 16;
	static int8_t x292 = 39;

	t72 = ((x289|(x290^x291))<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MIN;
	volatile int16_t x296 = -42;
	volatile int32_t t73 = -1039944302;

	t73 = ((x293|(x294^x295))<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	uint32_t x298 = UINT32_MAX;
	static volatile int32_t x299 = INT32_MIN;

	t74 = ((x297|(x298^x299))<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = UINT16_MAX;
	volatile int32_t x302 = INT32_MIN;
	volatile int16_t x303 = 1;
	int16_t x304 = -2;
	static volatile int32_t t75 = 102;

	t75 = ((x301|(x302^x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = INT16_MAX;
	int64_t x307 = -1871312414025LL;
	int64_t x308 = -1LL;
	int32_t t76 = 483;

	t76 = ((x305|(x306^x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x310 = UINT64_MAX;
	uint32_t x312 = 19820U;

	t77 = ((x309|(x310^x311))<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -573;
	int8_t x314 = -1;
	int16_t x315 = INT16_MIN;
	static volatile uint32_t x316 = 8024947U;

	t78 = ((x313|(x314^x315))<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	int32_t x318 = -373975250;
	volatile int32_t x319 = 7401;
	volatile int32_t t79 = 7;

	t79 = ((x317|(x318^x319))<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -1;
	volatile int32_t t80 = 1;

	t80 = ((x321|(x322^x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 0;
	uint16_t x327 = 135U;
	static int16_t x328 = -1;
	volatile int32_t t81 = -10;

	t81 = ((x325|(x326^x327))<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x329 = UINT32_MAX;
	uint16_t x331 = 38U;
	static volatile uint8_t x332 = 1U;
	int32_t t82 = 228546410;

	t82 = ((x329|(x330^x331))<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = INT64_MAX;
	int64_t x336 = 4LL;
	volatile int32_t t83 = -1;

	t83 = ((x333|(x334^x335))<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x337 = -1;
	volatile uint64_t x340 = 2014LLU;

	t84 = ((x337|(x338^x339))<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = INT64_MIN;
	uint32_t x342 = 68U;
	int32_t x343 = INT32_MAX;
	int32_t t85 = -19;

	t85 = ((x341|(x342^x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x348 = -1;

	t86 = ((x345|(x346^x347))<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 26051574107096LLU;
	static int64_t x350 = INT64_MIN;
	int64_t x351 = INT64_MIN;
	static volatile int32_t t87 = -2981083;

	t87 = ((x349|(x350^x351))<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x354 = UINT16_MAX;
	volatile uint64_t x355 = UINT64_MAX;
	static int32_t x356 = -1;

	t88 = ((x353|(x354^x355))<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 0;
	volatile int8_t x359 = -1;
	int16_t x360 = INT16_MIN;
	int32_t t89 = 2717530;

	t89 = ((x357|(x358^x359))<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MIN;
	int64_t x363 = -1LL;
	static int32_t t90 = -14;

	t90 = ((x361|(x362^x363))<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 1;
	uint32_t x366 = 3619965U;
	volatile int16_t x367 = -3;
	int8_t x368 = 25;
	volatile int32_t t91 = -247154831;

	t91 = ((x365|(x366^x367))<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = 0;
	uint64_t x370 = 2942764048560755640LLU;
	int32_t x371 = INT32_MIN;
	volatile int32_t t92 = -764;

	t92 = ((x369|(x370^x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	volatile uint8_t x374 = UINT8_MAX;
	int32_t x375 = -1;
	volatile int32_t t93 = -2805;

	t93 = ((x373|(x374^x375))<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	int16_t x378 = INT16_MAX;
	int8_t x379 = INT8_MIN;
	volatile int32_t t94 = -3942763;

	t94 = ((x377|(x378^x379))<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 3U;
	int64_t x382 = INT64_MAX;
	int64_t x383 = INT64_MIN;
	int16_t x384 = INT16_MIN;
	volatile int32_t t95 = -10;

	t95 = ((x381|(x382^x383))<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -10;
	static int16_t x386 = -1;
	uint64_t x387 = 61782340LLU;
	int32_t t96 = -1507;

	t96 = ((x385|(x386^x387))<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	int64_t x390 = INT64_MIN;
	static int16_t x391 = 3;
	int64_t x392 = 103923LL;
	int32_t t97 = -4070;

	t97 = ((x389|(x390^x391))<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -180343431;
	int16_t x395 = -381;
	volatile int64_t x396 = INT64_MIN;
	volatile int32_t t98 = 460022;

	t98 = ((x393|(x394^x395))<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 3;
	uint32_t x398 = 7163503U;
	volatile uint32_t x399 = 96U;
	volatile int32_t t99 = 14961;

	t99 = ((x397|(x398^x399))<=x400);

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

