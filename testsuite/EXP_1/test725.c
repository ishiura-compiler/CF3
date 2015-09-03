#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x1 = -1LL;
uint64_t x8 = 45LLU;
static int16_t x13 = 32;
int16_t x14 = 2;
static volatile uint16_t x17 = 3U;
int64_t x18 = -1207898415496LL;
static int8_t x19 = INT8_MIN;
int8_t x24 = -1;
int32_t t5 = -14564;
uint8_t x31 = UINT8_MAX;
static int8_t x34 = INT8_MAX;
uint16_t x49 = 367U;
static uint8_t x54 = 30U;
static int8_t x55 = -1;
int32_t t13 = 8255;
int64_t x62 = -1LL;
volatile int32_t t18 = 3570107;
int32_t x78 = INT32_MAX;
static int16_t x79 = INT16_MIN;
int64_t x81 = INT64_MAX;
static int64_t x91 = -1LL;
int32_t t23 = -310;
uint8_t x97 = 5U;
static int8_t x101 = INT8_MAX;
uint64_t x103 = 52335726218LLU;
volatile int16_t x106 = INT16_MIN;
int32_t x113 = INT32_MIN;
int16_t x114 = -1;
uint32_t x117 = 380U;
static uint64_t x118 = 204702LLU;
static volatile uint8_t x121 = 2U;
int32_t t30 = 180;
volatile uint32_t x125 = 0U;
int8_t x126 = 14;
volatile int16_t x131 = -47;
volatile int32_t t32 = 932931;
volatile uint16_t x138 = 60U;
static int64_t x139 = -1LL;
uint64_t x147 = 14751475068LLU;
int32_t t35 = 1007;
static int16_t x151 = INT16_MIN;
int32_t x153 = INT32_MAX;
int32_t t37 = -297955;
uint64_t x158 = UINT64_MAX;
volatile uint16_t x163 = UINT16_MAX;
volatile int32_t t40 = 3;
int32_t t41 = 44374038;
uint16_t x173 = 373U;
uint32_t x175 = 194897U;
volatile int32_t x183 = -1;
int8_t x184 = INT8_MIN;
int32_t t44 = -7;
volatile uint16_t x187 = UINT16_MAX;
int16_t x188 = 392;
static uint32_t x191 = UINT32_MAX;
int32_t t47 = 1175108;
int8_t x204 = 29;
int16_t x207 = INT16_MIN;
static uint64_t x209 = 112174393733730LLU;
uint16_t x210 = 94U;
int16_t x215 = INT16_MIN;
int32_t t52 = 3630285;
uint32_t x217 = UINT32_MAX;
int8_t x220 = INT8_MAX;
static uint64_t x221 = UINT64_MAX;
int32_t x222 = -293;
static int64_t x229 = INT64_MIN;
volatile int16_t x239 = INT16_MIN;
uint64_t x244 = UINT64_MAX;
int32_t t59 = -197;
int16_t x247 = -19;
uint64_t x249 = UINT64_MAX;
volatile int32_t t61 = -13806431;
uint32_t x255 = 195U;
static uint8_t x256 = 41U;
uint8_t x257 = 94U;
int8_t x262 = -1;
int32_t t64 = 248047645;
static int64_t x269 = 2852858394646239LL;
uint16_t x278 = 17U;
int32_t t68 = -45701841;
int64_t x284 = INT64_MAX;
int32_t t69 = 1;
uint16_t x287 = 367U;
int32_t t70 = 83293010;
static volatile uint8_t x293 = 28U;
int32_t t72 = -65143;
int32_t x299 = INT32_MAX;
static volatile int16_t x311 = -1;
int64_t x314 = INT64_MAX;
uint8_t x315 = 5U;
int32_t t77 = -1272;
int16_t x322 = 3788;
int32_t t79 = -964;
int16_t x331 = 3;
uint16_t x332 = UINT16_MAX;
uint8_t x343 = 1U;
volatile int32_t t87 = 584352;
static int32_t t88 = 4567;
uint64_t x366 = 11367034105106LLU;
int16_t x368 = -1;
static uint8_t x371 = 3U;
static int64_t x372 = -1LL;
static int32_t x374 = INT32_MIN;
static volatile int32_t x375 = -583;
uint8_t x380 = 4U;
int32_t t93 = -4550897;
static uint16_t x382 = 17086U;
int8_t x399 = INT8_MIN;
volatile int16_t x402 = -1388;
int64_t x404 = -1LL;


void f0(void) {
	static int32_t x2 = -1;
	int32_t x3 = INT32_MIN;
	static volatile uint8_t x4 = 3U;
	volatile int32_t t0 = -63938;

	t0 = (((x1%x2)/x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 878174LLU;
	volatile uint8_t x6 = UINT8_MAX;
	int32_t x7 = -1;
	volatile int32_t t1 = 254;

	t1 = (((x5%x6)/x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 335967345;
	int16_t x10 = INT16_MIN;
	uint8_t x11 = UINT8_MAX;
	volatile uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = -8;

	t2 = (((x9%x10)/x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x15 = INT64_MAX;
	static int16_t x16 = INT16_MAX;
	int32_t t3 = -4864797;

	t3 = (((x13%x14)/x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x20 = 205640LL;
	volatile int32_t t4 = -62093901;

	t4 = (((x17%x18)/x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	static uint8_t x22 = 13U;
	volatile int64_t x23 = -1LL;

	t5 = (((x21%x22)/x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 6U;
	uint32_t x26 = 1246U;
	int16_t x27 = -2703;
	static int64_t x28 = INT64_MIN;
	int32_t t6 = 0;

	t6 = (((x25%x26)/x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = 48U;
	static uint32_t x30 = 7U;
	int64_t x32 = -1LL;
	int32_t t7 = -7;

	t7 = (((x29%x30)/x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 2U;
	volatile int8_t x35 = 30;
	static uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = 927433314;

	t8 = (((x33%x34)/x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	volatile int16_t x38 = INT16_MAX;
	int64_t x39 = INT64_MAX;
	volatile int32_t x40 = INT32_MIN;
	int32_t t9 = -34490;

	t9 = (((x37%x38)/x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = 190672;
	int8_t x42 = INT8_MIN;
	uint32_t x43 = 22951U;
	volatile int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 3594;

	t10 = (((x41%x42)/x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = UINT32_MAX;
	int8_t x46 = INT8_MAX;
	int32_t x47 = 51951344;
	static int16_t x48 = INT16_MAX;
	static int32_t t11 = 10402833;

	t11 = (((x45%x46)/x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x50 = 7U;
	volatile int64_t x51 = -285LL;
	int8_t x52 = -1;
	static int32_t t12 = 120342625;

	t12 = (((x49%x50)/x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = -3;
	uint64_t x56 = 314558915660LLU;

	t13 = (((x53%x54)/x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = 17U;
	volatile int64_t x58 = INT64_MIN;
	int32_t x59 = INT32_MIN;
	volatile int16_t x60 = INT16_MIN;
	volatile int32_t t14 = 1036;

	t14 = (((x57%x58)/x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MIN;
	int16_t x63 = -1;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t15 = 132448904;

	t15 = (((x61%x62)/x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 2U;
	uint8_t x66 = UINT8_MAX;
	int16_t x67 = -2416;
	int32_t x68 = 3481580;
	static int32_t t16 = 1201;

	t16 = (((x65%x66)/x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	static int64_t x70 = -1LL;
	uint16_t x71 = 34U;
	int8_t x72 = INT8_MAX;
	int32_t t17 = -59371;

	t17 = (((x69%x70)/x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 77321859LLU;
	int64_t x74 = -1LL;
	int64_t x75 = -5815LL;
	int8_t x76 = INT8_MIN;

	t18 = (((x73%x74)/x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MIN;
	static int32_t x80 = INT32_MIN;
	volatile int32_t t19 = 227184070;

	t19 = (((x77%x78)/x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x82 = UINT64_MAX;
	int16_t x83 = INT16_MAX;
	int64_t x84 = -4746281913LL;
	static volatile int32_t t20 = 0;

	t20 = (((x81%x82)/x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	uint8_t x86 = UINT8_MAX;
	static int64_t x87 = INT64_MIN;
	uint64_t x88 = UINT64_MAX;
	volatile int32_t t21 = 32543415;

	t21 = (((x85%x86)/x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = INT16_MAX;
	static uint32_t x90 = 50506433U;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = -1933513;

	t22 = (((x89%x90)/x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	uint16_t x94 = 1737U;
	int16_t x95 = -2;
	int8_t x96 = -1;

	t23 = (((x93%x94)/x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = -1;
	static volatile int64_t x99 = INT64_MAX;
	int16_t x100 = INT16_MAX;
	static volatile int32_t t24 = 269;

	t24 = (((x97%x98)/x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = -3285;
	int8_t x104 = -1;
	int32_t t25 = -2;

	t25 = (((x101%x102)/x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -12;
	uint64_t x107 = 5630LLU;
	volatile int16_t x108 = -1;
	int32_t t26 = 378;

	t26 = (((x105%x106)/x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MIN;
	uint64_t x110 = 37LLU;
	static int16_t x111 = INT16_MIN;
	int8_t x112 = 1;
	volatile int32_t t27 = 1710;

	t27 = (((x109%x110)/x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x115 = 63371U;
	uint32_t x116 = 55111U;
	static int32_t t28 = -123825;

	t28 = (((x113%x114)/x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x119 = -981;
	int64_t x120 = INT64_MIN;
	int32_t t29 = 970319686;

	t29 = (((x117%x118)/x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = -1;
	static int8_t x123 = -1;
	int16_t x124 = INT16_MIN;

	t30 = (((x121%x122)/x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x127 = UINT64_MAX;
	int16_t x128 = -1;
	volatile int32_t t31 = 38;

	t31 = (((x125%x126)/x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -4224;
	int16_t x130 = INT16_MIN;
	static volatile int64_t x132 = 3LL;

	t32 = (((x129%x130)/x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x137 = INT32_MIN;
	uint8_t x140 = 0U;
	int32_t t33 = 14;

	t33 = (((x137%x138)/x139)<=x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = 10;
	int16_t x142 = 4;
	volatile int32_t x143 = 335666;
	uint16_t x144 = 3U;
	int32_t t34 = -51859028;

	t34 = (((x141%x142)/x143)<=x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x145 = INT32_MIN;
	int32_t x146 = INT32_MIN;
	volatile int8_t x148 = INT8_MIN;

	t35 = (((x145%x146)/x147)<=x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x149 = -74LL;
	volatile uint32_t x150 = UINT32_MAX;
	volatile int32_t x152 = 222825109;
	volatile int32_t t36 = 2376;

	t36 = (((x149%x150)/x151)<=x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x154 = -1LL;
	uint32_t x155 = UINT32_MAX;
	uint8_t x156 = 3U;

	t37 = (((x153%x154)/x155)<=x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x157 = -1;
	int64_t x159 = -1LL;
	int64_t x160 = 666815109988LL;
	int32_t t38 = -239143;

	t38 = (((x157%x158)/x159)<=x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MAX;
	int64_t x162 = 7970931LL;
	int16_t x164 = INT16_MIN;
	int32_t t39 = -1;

	t39 = (((x161%x162)/x163)<=x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -12066973319132LL;
	volatile uint32_t x166 = 4993280U;
	int64_t x167 = -487895604LL;
	volatile uint32_t x168 = 12362909U;

	t40 = (((x165%x166)/x167)<=x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x169 = -3LL;
	int32_t x170 = -1;
	static int32_t x171 = -1;
	uint64_t x172 = 464LLU;

	t41 = (((x169%x170)/x171)<=x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x174 = 4U;
	uint64_t x176 = UINT64_MAX;
	static volatile int32_t t42 = 460119;

	t42 = (((x173%x174)/x175)<=x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x177 = -1853;
	uint8_t x178 = UINT8_MAX;
	int64_t x179 = INT64_MIN;
	uint8_t x180 = UINT8_MAX;
	int32_t t43 = -366;

	t43 = (((x177%x178)/x179)<=x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MAX;
	static int32_t x182 = INT32_MIN;

	t44 = (((x181%x182)/x183)<=x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MAX;
	uint32_t x186 = 769U;
	int32_t t45 = 475083;

	t45 = (((x185%x186)/x187)<=x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = 1208;
	uint64_t x190 = 515884865LLU;
	int64_t x192 = -20376141769828963LL;
	static volatile int32_t t46 = -837;

	t46 = (((x189%x190)/x191)<=x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x193 = -4696;
	volatile int8_t x194 = INT8_MAX;
	uint8_t x195 = 1U;
	int16_t x196 = INT16_MAX;

	t47 = (((x193%x194)/x195)<=x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x197 = 2U;
	int16_t x198 = -1845;
	int64_t x199 = -3791850326816209LL;
	int64_t x200 = 35LL;
	int32_t t48 = -96197;

	t48 = (((x197%x198)/x199)<=x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x201 = INT8_MAX;
	uint64_t x202 = 1171310372690788413LLU;
	volatile int16_t x203 = INT16_MIN;
	volatile int32_t t49 = 36514;

	t49 = (((x201%x202)/x203)<=x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x205 = INT32_MAX;
	volatile uint64_t x206 = 704737937092694160LLU;
	int32_t x208 = INT32_MAX;
	volatile int32_t t50 = -3;

	t50 = (((x205%x206)/x207)<=x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x211 = UINT8_MAX;
	int16_t x212 = INT16_MIN;
	volatile int32_t t51 = 64804995;

	t51 = (((x209%x210)/x211)<=x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = -17;
	static volatile int16_t x214 = INT16_MAX;
	int32_t x216 = INT32_MAX;

	t52 = (((x213%x214)/x215)<=x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x218 = INT8_MAX;
	uint8_t x219 = 1U;
	int32_t t53 = -1;

	t53 = (((x217%x218)/x219)<=x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x223 = UINT32_MAX;
	volatile int16_t x224 = INT16_MIN;
	volatile int32_t t54 = 30895039;

	t54 = (((x221%x222)/x223)<=x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x225 = 2LLU;
	uint32_t x226 = 1652704U;
	int32_t x227 = INT32_MIN;
	int8_t x228 = 18;
	volatile int32_t t55 = -902;

	t55 = (((x225%x226)/x227)<=x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x230 = 36342907U;
	int64_t x231 = INT64_MAX;
	static uint32_t x232 = UINT32_MAX;
	int32_t t56 = -629606941;

	t56 = (((x229%x230)/x231)<=x232);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = 63;
	int8_t x234 = 12;
	uint64_t x235 = UINT64_MAX;
	int32_t x236 = -1;
	volatile int32_t t57 = 5;

	t57 = (((x233%x234)/x235)<=x236);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = 6;
	int64_t x238 = -249840529537628LL;
	int16_t x240 = 1537;
	volatile int32_t t58 = 2;

	t58 = (((x237%x238)/x239)<=x240);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x241 = UINT8_MAX;
	uint16_t x242 = UINT16_MAX;
	volatile int8_t x243 = -26;

	t59 = (((x241%x242)/x243)<=x244);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x245 = INT32_MIN;
	static volatile int32_t x246 = INT32_MIN;
	static uint16_t x248 = 38U;
	volatile int32_t t60 = -11882;

	t60 = (((x245%x246)/x247)<=x248);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x250 = INT64_MIN;
	volatile int64_t x251 = INT64_MIN;
	volatile int32_t x252 = INT32_MIN;

	t61 = (((x249%x250)/x251)<=x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x253 = 161039934431907LLU;
	int32_t x254 = INT32_MAX;
	static int32_t t62 = 30;

	t62 = (((x253%x254)/x255)<=x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x258 = INT64_MIN;
	volatile int64_t x259 = 68LL;
	uint8_t x260 = 115U;
	int32_t t63 = -16072780;

	t63 = (((x257%x258)/x259)<=x260);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x261 = -31LL;
	static int32_t x263 = -1;
	uint32_t x264 = 10U;

	t64 = (((x261%x262)/x263)<=x264);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = 401U;
	static int64_t x266 = -1LL;
	uint8_t x267 = 6U;
	uint32_t x268 = 42U;
	volatile int32_t t65 = -4;

	t65 = (((x265%x266)/x267)<=x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x270 = INT32_MAX;
	int16_t x271 = INT16_MIN;
	static volatile uint32_t x272 = 3476476U;
	volatile int32_t t66 = -1808;

	t66 = (((x269%x270)/x271)<=x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x273 = INT64_MIN;
	int8_t x274 = INT8_MIN;
	static int16_t x275 = INT16_MIN;
	int16_t x276 = INT16_MIN;
	int32_t t67 = 0;

	t67 = (((x273%x274)/x275)<=x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = INT64_MIN;
	int32_t x279 = INT32_MIN;
	uint16_t x280 = 35U;

	t68 = (((x277%x278)/x279)<=x280);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = INT16_MIN;
	int8_t x282 = 2;
	int16_t x283 = INT16_MIN;

	t69 = (((x281%x282)/x283)<=x284);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x285 = INT8_MIN;
	volatile int32_t x286 = -254967;
	int16_t x288 = INT16_MAX;

	t70 = (((x285%x286)/x287)<=x288);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x289 = 64LLU;
	static int64_t x290 = -10600798983LL;
	int32_t x291 = -1864;
	static int16_t x292 = INT16_MIN;
	volatile int32_t t71 = 122374;

	t71 = (((x289%x290)/x291)<=x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x294 = INT8_MIN;
	int16_t x295 = -16;
	uint8_t x296 = UINT8_MAX;

	t72 = (((x293%x294)/x295)<=x296);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x297 = INT16_MIN;
	volatile int64_t x298 = -15LL;
	uint16_t x300 = UINT16_MAX;
	int32_t t73 = 1853;

	t73 = (((x297%x298)/x299)<=x300);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x301 = 5;
	int16_t x302 = 16266;
	uint8_t x303 = UINT8_MAX;
	volatile int16_t x304 = INT16_MIN;
	volatile int32_t t74 = 7444344;

	t74 = (((x301%x302)/x303)<=x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = INT8_MAX;
	static int8_t x306 = INT8_MAX;
	uint64_t x307 = 4712462134LLU;
	static int16_t x308 = INT16_MIN;
	static int32_t t75 = 212331355;

	t75 = (((x305%x306)/x307)<=x308);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = INT16_MIN;
	int64_t x310 = -1LL;
	int16_t x312 = -1;
	int32_t t76 = 2;

	t76 = (((x309%x310)/x311)<=x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x313 = 68702416U;
	static uint16_t x316 = 105U;

	t77 = (((x313%x314)/x315)<=x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = INT64_MIN;
	int64_t x318 = INT64_MAX;
	int16_t x319 = INT16_MIN;
	int16_t x320 = INT16_MAX;
	int32_t t78 = -1543;

	t78 = (((x317%x318)/x319)<=x320);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x321 = INT32_MIN;
	int64_t x323 = INT64_MIN;
	static int64_t x324 = 270303991245LL;

	t79 = (((x321%x322)/x323)<=x324);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x325 = INT32_MAX;
	int64_t x326 = INT64_MAX;
	int16_t x327 = -1;
	static volatile int8_t x328 = INT8_MAX;
	int32_t t80 = -209186145;

	t80 = (((x325%x326)/x327)<=x328);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x329 = UINT32_MAX;
	volatile int8_t x330 = -1;
	volatile int32_t t81 = 91;

	t81 = (((x329%x330)/x331)<=x332);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = INT16_MAX;
	int32_t x334 = -1;
	uint64_t x335 = UINT64_MAX;
	int16_t x336 = -1;
	int32_t t82 = -1;

	t82 = (((x333%x334)/x335)<=x336);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x337 = 1;
	int64_t x338 = INT64_MAX;
	uint8_t x339 = 114U;
	volatile uint16_t x340 = UINT16_MAX;
	static volatile int32_t t83 = 50754;

	t83 = (((x337%x338)/x339)<=x340);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x341 = 1836;
	int64_t x342 = 377826810LL;
	int64_t x344 = INT64_MAX;
	volatile int32_t t84 = -20940;

	t84 = (((x341%x342)/x343)<=x344);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x345 = 0U;
	static int64_t x346 = -1LL;
	volatile int64_t x347 = 16606969113644LL;
	int64_t x348 = INT64_MAX;
	int32_t t85 = 135264;

	t85 = (((x345%x346)/x347)<=x348);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x349 = -13;
	int16_t x350 = 2231;
	int32_t x351 = INT32_MIN;
	static volatile int16_t x352 = -2;
	volatile int32_t t86 = -4;

	t86 = (((x349%x350)/x351)<=x352);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x353 = INT32_MAX;
	int32_t x354 = INT32_MIN;
	int8_t x355 = 15;
	int8_t x356 = -1;

	t87 = (((x353%x354)/x355)<=x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x357 = INT16_MAX;
	int16_t x358 = INT16_MIN;
	int32_t x359 = -1;
	volatile int64_t x360 = -18028LL;

	t88 = (((x357%x358)/x359)<=x360);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x361 = 3191704244158LLU;
	int8_t x362 = -1;
	int32_t x363 = INT32_MAX;
	uint32_t x364 = 314416U;
	static volatile int32_t t89 = -3702012;

	t89 = (((x361%x362)/x363)<=x364);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x365 = 7807;
	volatile int8_t x367 = INT8_MIN;
	volatile int32_t t90 = -1362;

	t90 = (((x365%x366)/x367)<=x368);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x369 = 1023;
	int64_t x370 = INT64_MIN;
	volatile int32_t t91 = -176408;

	t91 = (((x369%x370)/x371)<=x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x373 = UINT64_MAX;
	volatile uint32_t x376 = UINT32_MAX;
	volatile int32_t t92 = 8010;

	t92 = (((x373%x374)/x375)<=x376);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x377 = 0U;
	int16_t x378 = 1;
	int16_t x379 = INT16_MIN;

	t93 = (((x377%x378)/x379)<=x380);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x381 = 359804U;
	int32_t x383 = INT32_MIN;
	int32_t x384 = INT32_MIN;
	volatile int32_t t94 = -59522718;

	t94 = (((x381%x382)/x383)<=x384);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = INT16_MAX;
	static volatile int64_t x386 = 99281440262551045LL;
	volatile int64_t x387 = -1LL;
	volatile uint8_t x388 = 17U;
	volatile int32_t t95 = 1;

	t95 = (((x385%x386)/x387)<=x388);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = -1;
	int8_t x390 = INT8_MIN;
	int8_t x391 = -1;
	int64_t x392 = -74209LL;
	volatile int32_t t96 = -106;

	t96 = (((x389%x390)/x391)<=x392);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x393 = UINT16_MAX;
	int32_t x394 = INT32_MIN;
	static int16_t x395 = 5;
	static int32_t x396 = -404;
	static volatile int32_t t97 = 253217149;

	t97 = (((x393%x394)/x395)<=x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x397 = 14781235830554050LLU;
	uint16_t x398 = 3993U;
	uint64_t x400 = 68507308594486187LLU;
	volatile int32_t t98 = -3434;

	t98 = (((x397%x398)/x399)<=x400);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x401 = INT32_MAX;
	int16_t x403 = -1;
	volatile int32_t t99 = 6;

	t99 = (((x401%x402)/x403)<=x404);

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

