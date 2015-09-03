#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t t1 = 3406549327440145558LLU;
static volatile int32_t x13 = INT32_MAX;
uint32_t x15 = UINT32_MAX;
uint8_t x37 = 1U;
int32_t t8 = -86940;
volatile int8_t x44 = INT8_MIN;
int8_t x45 = INT8_MIN;
uint64_t x47 = 18976957LLU;
static uint32_t x50 = 85370U;
uint16_t x58 = 24U;
int16_t x59 = -1;
static int16_t x71 = INT16_MIN;
volatile int32_t t16 = -4600;
int16_t x76 = 54;
volatile int16_t x86 = INT16_MAX;
volatile int32_t t20 = -757;
volatile int64_t x91 = 2016510041894LL;
int32_t x94 = 41564947;
int32_t x98 = -1;
static volatile int32_t x99 = INT32_MAX;
int32_t t25 = -10132;
static volatile int8_t x116 = INT8_MAX;
uint64_t x118 = UINT64_MAX;
uint64_t x121 = UINT64_MAX;
volatile int64_t x125 = -2466592882LL;
int32_t x136 = -1;
int16_t x139 = -1;
int16_t x151 = INT16_MAX;
volatile uint16_t x155 = 694U;
static uint32_t x168 = UINT32_MAX;
volatile uint32_t t40 = 3U;
uint8_t x172 = 125U;
uint16_t x174 = 1012U;
volatile uint32_t t42 = 2967266U;
int16_t x180 = INT16_MIN;
volatile int8_t x187 = INT8_MIN;
int64_t x188 = 130235408611LL;
uint8_t x200 = UINT8_MAX;
volatile int64_t t49 = 1255315LL;
int32_t x211 = -7386;
uint16_t x219 = UINT16_MAX;
volatile int64_t x223 = -1LL;
int64_t x236 = INT64_MIN;
int32_t x237 = 12681478;
static volatile uint8_t x246 = UINT8_MAX;
volatile int64_t t58 = 0LL;
int8_t x251 = 6;
uint8_t x252 = 6U;
static int32_t x255 = -1;
static uint8_t x259 = 1U;
uint16_t x260 = 10U;
int64_t x267 = INT64_MAX;
static int8_t x269 = -10;
int64_t x273 = INT64_MIN;
static int64_t x276 = INT64_MIN;
volatile int64_t x278 = 7135LL;
int32_t x288 = 64;
uint64_t t67 = 220901778732298LLU;
int32_t x290 = INT32_MIN;
static int64_t x291 = -1LL;
uint8_t x294 = 1U;
static int16_t x297 = INT16_MIN;
uint64_t x299 = 8157293474965LLU;
uint64_t t70 = 3LLU;
int8_t x301 = -1;
int64_t x308 = -1LL;
int64_t t72 = INT64_MAX;
int64_t x311 = -1LL;
volatile int64_t x318 = -1LL;
static int64_t t74 = -1013184854853010LL;
int32_t x322 = -642956342;
uint32_t x333 = 13U;
int32_t x360 = -879748412;
int64_t x361 = -1829075952043817827LL;
static int64_t x363 = -4161737063507LL;
int64_t x369 = -19250692340617506LL;
static uint16_t x370 = UINT16_MAX;
int16_t x376 = INT16_MIN;
int8_t x377 = 1;
int32_t x383 = -1;
uint64_t x384 = UINT64_MAX;
int64_t x388 = 11466614LL;
int32_t x391 = -86199508;
int32_t t91 = 3808898;
int32_t x394 = -1;
static int64_t x395 = INT64_MAX;
uint64_t x396 = 538896715494294376LLU;
int8_t x399 = -1;
int64_t x403 = -1LL;
volatile int64_t t94 = -683533020121LL;
int32_t x410 = INT32_MIN;


void f0(void) {
	volatile uint16_t x5 = 193U;
	int8_t x6 = -33;
	int8_t x7 = -1;
	uint32_t x8 = 14354U;
	uint32_t t0 = 358U;

	t0 = (((x5==x6)-x7)/x8);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MAX;
	static int64_t x10 = INT64_MAX;
	uint64_t x11 = UINT64_MAX;
	static uint8_t x12 = UINT8_MAX;

	t1 = (((x9==x10)-x11)/x12);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = 11537;
	static int32_t x16 = -1;
	uint32_t t2 = 169U;

	t2 = (((x13==x14)-x15)/x16);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 1596040U;
	int8_t x18 = -1;
	volatile uint8_t x19 = UINT8_MAX;
	int32_t x20 = 944879108;
	volatile int32_t t3 = -35831;

	t3 = (((x17==x18)-x19)/x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 83258855U;
	uint8_t x22 = UINT8_MAX;
	int64_t x23 = INT64_MAX;
	volatile int8_t x24 = -1;
	volatile int64_t t4 = INT64_MAX;

	t4 = (((x21==x22)-x23)/x24);

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 31735200833523658LLU;
	static int32_t x26 = INT32_MAX;
	static uint32_t x27 = 12113U;
	int16_t x28 = INT16_MIN;
	static volatile uint32_t t5 = 218228579U;

	t5 = (((x25==x26)-x27)/x28);

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	static uint32_t x30 = 19U;
	static int8_t x31 = INT8_MAX;
	int32_t x32 = INT32_MIN;
	int32_t t6 = -3;

	t6 = (((x29==x30)-x31)/x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	int8_t x34 = INT8_MIN;
	uint8_t x35 = UINT8_MAX;
	volatile int16_t x36 = INT16_MIN;
	int32_t t7 = -270856360;

	t7 = (((x33==x34)-x35)/x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x38 = INT16_MIN;
	int8_t x39 = 1;
	int16_t x40 = -1;

	t8 = (((x37==x38)-x39)/x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = UINT16_MAX;
	static int64_t x42 = INT64_MIN;
	int16_t x43 = -1;
	int32_t t9 = -310285816;

	t9 = (((x41==x42)-x43)/x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x46 = -1;
	uint32_t x48 = 20U;
	uint64_t t10 = 2786LLU;

	t10 = (((x45==x46)-x47)/x48);

	if (t10 != 922337203684528732LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	int16_t x51 = 5907;
	int16_t x52 = 95;
	volatile int32_t t11 = -68787;

	t11 = (((x49==x50)-x51)/x52);

	if (t11 != -62) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x53 = UINT32_MAX;
	static int16_t x54 = INT16_MAX;
	volatile int64_t x55 = 151443457475LL;
	static int8_t x56 = 3;
	volatile int64_t t12 = 493960814LL;

	t12 = (((x53==x54)-x55)/x56);

	if (t12 != -50481152491LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = 0;
	static volatile int16_t x60 = INT16_MAX;
	static int32_t t13 = -401731754;

	t13 = (((x57==x58)-x59)/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x61 = 12587LLU;
	uint8_t x62 = 4U;
	int64_t x63 = -1LL;
	static uint16_t x64 = UINT16_MAX;
	volatile int64_t t14 = -1LL;

	t14 = (((x61==x62)-x63)/x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = INT64_MIN;
	volatile int32_t x66 = INT32_MAX;
	int16_t x67 = INT16_MIN;
	int16_t x68 = INT16_MIN;
	int32_t t15 = -891444;

	t15 = (((x65==x66)-x67)/x68);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x69 = 1168639U;
	uint64_t x70 = UINT64_MAX;
	volatile uint8_t x72 = UINT8_MAX;

	t16 = (((x69==x70)-x71)/x72);

	if (t16 != 128) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -8;
	int8_t x74 = -1;
	uint32_t x75 = 1411U;
	static uint32_t t17 = 943961U;

	t17 = (((x73==x74)-x75)/x76);

	if (t17 != 79536405U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = -1;
	int32_t x78 = 79187;
	volatile int16_t x79 = INT16_MIN;
	static int64_t x80 = 5LL;
	int64_t t18 = 2062166491331467087LL;

	t18 = (((x77==x78)-x79)/x80);

	if (t18 != 6553LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = 5U;
	int32_t x82 = -18602;
	uint8_t x83 = UINT8_MAX;
	volatile uint8_t x84 = UINT8_MAX;
	int32_t t19 = -3778269;

	t19 = (((x81==x82)-x83)/x84);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	uint8_t x87 = 9U;
	int16_t x88 = -1;

	t20 = (((x85==x86)-x87)/x88);

	if (t20 != 9) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = -1;
	int32_t x90 = -1;
	volatile int32_t x92 = INT32_MAX;
	int64_t t21 = -17LL;

	t21 = (((x89==x90)-x91)/x92);

	if (t21 != -939LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = 3U;
	int64_t x95 = -1LL;
	volatile int32_t x96 = INT32_MIN;
	int64_t t22 = -64649357338866735LL;

	t22 = (((x93==x94)-x95)/x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	static int64_t x100 = 53801663966LL;
	volatile int64_t t23 = 7569LL;

	t23 = (((x97==x98)-x99)/x100);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = -1LL;
	int16_t x102 = INT16_MIN;
	volatile uint16_t x103 = 1860U;
	uint16_t x104 = 1U;
	static volatile int32_t t24 = 405;

	t24 = (((x101==x102)-x103)/x104);

	if (t24 != -1860) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 1965364LLU;
	static uint64_t x106 = 26287834618116LLU;
	int8_t x107 = -1;
	static int32_t x108 = INT32_MIN;

	t25 = (((x105==x106)-x107)/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x109 = -1;
	uint64_t x110 = UINT64_MAX;
	static int16_t x111 = -176;
	int32_t x112 = INT32_MIN;
	int32_t t26 = -401;

	t26 = (((x109==x110)-x111)/x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x113 = INT8_MAX;
	int64_t x114 = INT64_MIN;
	int8_t x115 = INT8_MIN;
	int32_t t27 = 3;

	t27 = (((x113==x114)-x115)/x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 10LLU;
	int16_t x119 = 12;
	int8_t x120 = 33;
	static int32_t t28 = 1;

	t28 = (((x117==x118)-x119)/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x122 = 3700982498422498217LLU;
	volatile int64_t x123 = 295758LL;
	uint16_t x124 = 17301U;
	static volatile int64_t t29 = 3141155959LL;

	t29 = (((x121==x122)-x123)/x124);

	if (t29 != -17LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x126 = UINT16_MAX;
	uint64_t x127 = 5385155LLU;
	int16_t x128 = INT16_MIN;
	uint64_t t30 = 3322762440950LLU;

	t30 = (((x125==x126)-x127)/x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = 14U;
	volatile uint64_t x130 = UINT64_MAX;
	uint64_t x131 = 705LLU;
	int16_t x132 = INT16_MAX;
	static uint64_t t31 = 6LLU;

	t31 = (((x129==x130)-x131)/x132);

	if (t31 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -3946;
	int16_t x134 = INT16_MIN;
	int32_t x135 = INT32_MAX;
	volatile int32_t t32 = INT32_MAX;

	t32 = (((x133==x134)-x135)/x136);

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MIN;
	uint8_t x138 = 4U;
	volatile int16_t x140 = -1;
	volatile int32_t t33 = 14;

	t33 = (((x137==x138)-x139)/x140);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1;
	uint64_t x142 = 641512686940027LLU;
	int32_t x143 = INT32_MAX;
	volatile int32_t x144 = -729;
	int32_t t34 = 289951;

	t34 = (((x141==x142)-x143)/x144);

	if (t34 != 2945793) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x145 = INT16_MIN;
	int32_t x146 = INT32_MIN;
	static uint16_t x147 = 1U;
	uint64_t x148 = 45162449668LLU;
	volatile uint64_t t35 = 112884LLU;

	t35 = (((x145==x146)-x147)/x148);

	if (t35 != 408453133LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MAX;
	uint8_t x150 = 1U;
	static int8_t x152 = INT8_MAX;
	static int32_t t36 = -36;

	t36 = (((x149==x150)-x151)/x152);

	if (t36 != -258) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MIN;
	volatile uint16_t x154 = 14835U;
	static volatile uint32_t x156 = 1365449U;
	uint32_t t37 = 20U;

	t37 = (((x153==x154)-x155)/x156);

	if (t37 != 3145U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -1;
	int16_t x158 = -1;
	int16_t x159 = INT16_MIN;
	static uint32_t x160 = 2U;
	static uint32_t t38 = 1942573U;

	t38 = (((x157==x158)-x159)/x160);

	if (t38 != 16384U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MAX;
	int16_t x162 = INT16_MIN;
	int8_t x163 = 0;
	int8_t x164 = INT8_MAX;
	int32_t t39 = -114255652;

	t39 = (((x161==x162)-x163)/x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = -60;
	static volatile int64_t x166 = INT64_MIN;
	volatile int16_t x167 = INT16_MAX;

	t40 = (((x165==x166)-x167)/x168);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x169 = INT32_MIN;
	int8_t x170 = -1;
	static int8_t x171 = -4;
	static int32_t t41 = -3593;

	t41 = (((x169==x170)-x171)/x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x173 = 455182683U;
	uint32_t x175 = 103U;
	int32_t x176 = INT32_MIN;

	t42 = (((x173==x174)-x175)/x176);

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = INT32_MIN;
	uint64_t x178 = 3487294097741140LLU;
	int16_t x179 = -1;
	volatile int32_t t43 = 304;

	t43 = (((x177==x178)-x179)/x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x181 = -110;
	uint16_t x182 = UINT16_MAX;
	int16_t x183 = -1;
	int32_t x184 = INT32_MIN;
	int32_t t44 = 0;

	t44 = (((x181==x182)-x183)/x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x185 = 5595U;
	volatile uint16_t x186 = UINT16_MAX;
	volatile int64_t t45 = 1LL;

	t45 = (((x185==x186)-x187)/x188);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x189 = 7609U;
	uint8_t x190 = 2U;
	uint64_t x191 = 348483781406LLU;
	static int16_t x192 = -1;
	uint64_t t46 = 94197073838419170LLU;

	t46 = (((x189==x190)-x191)/x192);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x193 = 246U;
	volatile int64_t x194 = INT64_MIN;
	uint16_t x195 = 14871U;
	int8_t x196 = 1;
	static int32_t t47 = 325;

	t47 = (((x193==x194)-x195)/x196);

	if (t47 != -14871) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = -1;
	int16_t x198 = INT16_MIN;
	volatile int8_t x199 = -6;
	volatile int32_t t48 = -101889;

	t48 = (((x197==x198)-x199)/x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x201 = -955129262;
	int32_t x202 = -1;
	uint32_t x203 = 3570706U;
	int64_t x204 = 15811298LL;

	t49 = (((x201==x202)-x203)/x204);

	if (t49 != 271LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = UINT16_MAX;
	static uint16_t x210 = UINT16_MAX;
	static uint32_t x212 = 2390U;
	volatile uint32_t t50 = 13271477U;

	t50 = (((x209==x210)-x211)/x212);

	if (t50 != 3U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x217 = 18512U;
	volatile int64_t x218 = INT64_MIN;
	uint16_t x220 = 58U;
	volatile int32_t t51 = -51996;

	t51 = (((x217==x218)-x219)/x220);

	if (t51 != -1129) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = -43348985;
	uint8_t x222 = 26U;
	uint8_t x224 = 11U;
	volatile int64_t t52 = -960160874838LL;

	t52 = (((x221==x222)-x223)/x224);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x225 = -34;
	uint32_t x226 = UINT32_MAX;
	static int8_t x227 = INT8_MIN;
	int16_t x228 = INT16_MIN;
	int32_t t53 = 54;

	t53 = (((x225==x226)-x227)/x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = 15306;
	uint32_t x230 = 24903221U;
	int64_t x231 = -1LL;
	int8_t x232 = INT8_MIN;
	int64_t t54 = -1150532700LL;

	t54 = (((x229==x230)-x231)/x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x233 = UINT32_MAX;
	static int64_t x234 = -1LL;
	static int8_t x235 = -1;
	volatile int64_t t55 = -33LL;

	t55 = (((x233==x234)-x235)/x236);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x238 = 19411034220LLU;
	uint32_t x239 = UINT32_MAX;
	uint16_t x240 = 6578U;
	volatile uint32_t t56 = 5563U;

	t56 = (((x237==x238)-x239)/x240);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x241 = -1;
	static int64_t x242 = INT64_MIN;
	static int32_t x243 = -1;
	volatile int64_t x244 = 4963836648547341LL;
	int64_t t57 = 15937465065LL;

	t57 = (((x241==x242)-x243)/x244);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x245 = UINT64_MAX;
	static int64_t x247 = 124924LL;
	static volatile int32_t x248 = INT32_MIN;

	t58 = (((x245==x246)-x247)/x248);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = -5;
	static volatile int16_t x250 = INT16_MIN;
	volatile int32_t t59 = -135055634;

	t59 = (((x249==x250)-x251)/x252);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x253 = INT8_MAX;
	int32_t x254 = -1;
	static int32_t x256 = 895;
	int32_t t60 = 361673155;

	t60 = (((x253==x254)-x255)/x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x257 = UINT32_MAX;
	uint16_t x258 = 398U;
	static volatile int32_t t61 = 46506353;

	t61 = (((x257==x258)-x259)/x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x261 = -15655237;
	uint8_t x262 = 4U;
	uint8_t x263 = 106U;
	int32_t x264 = 1971;
	volatile int32_t t62 = -274636;

	t62 = (((x261==x262)-x263)/x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x265 = -248414332611228328LL;
	static uint16_t x266 = UINT16_MAX;
	int16_t x268 = INT16_MIN;
	static int64_t t63 = 105564293542LL;

	t63 = (((x265==x266)-x267)/x268);

	if (t63 != 281474976710655LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x270 = INT32_MAX;
	uint16_t x271 = 393U;
	static int32_t x272 = INT32_MIN;
	int32_t t64 = 300151722;

	t64 = (((x269==x270)-x271)/x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x274 = 4427;
	int8_t x275 = INT8_MIN;
	int64_t t65 = 767099LL;

	t65 = (((x273==x274)-x275)/x276);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x277 = INT32_MAX;
	uint8_t x279 = UINT8_MAX;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t66 = -15;

	t66 = (((x277==x278)-x279)/x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = INT32_MIN;
	static int8_t x286 = INT8_MIN;
	uint64_t x287 = UINT64_MAX;

	t67 = (((x285==x286)-x287)/x288);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = INT16_MAX;
	int16_t x292 = INT16_MIN;
	int64_t t68 = -403404063658350LL;

	t68 = (((x289==x290)-x291)/x292);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x293 = -34;
	uint8_t x295 = 8U;
	int8_t x296 = -1;
	volatile int32_t t69 = -80;

	t69 = (((x293==x294)-x295)/x296);

	if (t69 != 8) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x298 = 1562372626539378269LL;
	int32_t x300 = 10;

	t70 = (((x297==x298)-x299)/x300);

	if (t70 != 1844673591641607665LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x302 = UINT32_MAX;
	int8_t x303 = 3;
	int8_t x304 = INT8_MIN;
	volatile int32_t t71 = 26751985;

	t71 = (((x301==x302)-x303)/x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x305 = INT32_MIN;
	volatile int8_t x306 = INT8_MIN;
	int64_t x307 = INT64_MAX;

	t72 = (((x305==x306)-x307)/x308);

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x309 = 0U;
	static uint16_t x310 = UINT16_MAX;
	int8_t x312 = INT8_MIN;
	static int64_t t73 = -1433LL;

	t73 = (((x309==x310)-x311)/x312);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x317 = 118U;
	uint16_t x319 = 2726U;
	int64_t x320 = -148420308834440826LL;

	t74 = (((x317==x318)-x319)/x320);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x321 = 1566907010551LLU;
	static uint8_t x323 = 7U;
	uint64_t x324 = 4415526LLU;
	volatile uint64_t t75 = 30542518LLU;

	t75 = (((x321==x322)-x323)/x324);

	if (t75 != 4177700249915LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x325 = UINT16_MAX;
	static uint32_t x326 = UINT32_MAX;
	static int16_t x327 = INT16_MAX;
	static uint16_t x328 = 2U;
	static volatile int32_t t76 = -11;

	t76 = (((x325==x326)-x327)/x328);

	if (t76 != -16383) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = INT16_MIN;
	uint64_t x330 = UINT64_MAX;
	uint64_t x331 = 14653321020914316LLU;
	volatile int16_t x332 = INT16_MIN;
	volatile uint64_t t77 = 6130553833LLU;

	t77 = (((x329==x330)-x331)/x332);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x334 = 30U;
	int64_t x335 = -1LL;
	int64_t x336 = 1103LL;
	static int64_t t78 = -484100712LL;

	t78 = (((x333==x334)-x335)/x336);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x341 = -1;
	volatile uint32_t x342 = UINT32_MAX;
	volatile int16_t x343 = INT16_MIN;
	int64_t x344 = INT64_MAX;
	int64_t t79 = -56137147LL;

	t79 = (((x341==x342)-x343)/x344);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x345 = INT64_MIN;
	volatile uint32_t x346 = 118958783U;
	uint16_t x347 = 0U;
	int16_t x348 = INT16_MIN;
	volatile int32_t t80 = -440;

	t80 = (((x345==x346)-x347)/x348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x349 = 111U;
	int32_t x350 = -14159021;
	static volatile uint8_t x351 = UINT8_MAX;
	int8_t x352 = INT8_MIN;
	volatile int32_t t81 = -504743;

	t81 = (((x349==x350)-x351)/x352);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x353 = 797484U;
	int64_t x354 = 3LL;
	uint64_t x355 = 268332726656506777LLU;
	volatile uint32_t x356 = 1087U;
	volatile uint64_t t82 = 217948LLU;

	t82 = (((x353==x354)-x355)/x356);

	if (t82 != 16723469500508780LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x357 = 215779217;
	uint64_t x358 = UINT64_MAX;
	int16_t x359 = INT16_MIN;
	int32_t t83 = -302;

	t83 = (((x357==x358)-x359)/x360);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x362 = 1989377150572428797LL;
	int8_t x364 = INT8_MIN;
	int64_t t84 = -231957LL;

	t84 = (((x361==x362)-x363)/x364);

	if (t84 != -32513570808LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x365 = 2065184951810958646LLU;
	uint8_t x366 = 0U;
	int16_t x367 = -3;
	volatile int8_t x368 = INT8_MIN;
	int32_t t85 = -15431;

	t85 = (((x365==x366)-x367)/x368);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x371 = INT16_MIN;
	static int16_t x372 = INT16_MIN;
	int32_t t86 = -1;

	t86 = (((x369==x370)-x371)/x372);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x373 = INT16_MAX;
	uint64_t x374 = 1387663LLU;
	uint8_t x375 = 0U;
	volatile int32_t t87 = -385;

	t87 = (((x373==x374)-x375)/x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x378 = 7U;
	int8_t x379 = -1;
	volatile int64_t x380 = 67993316766526541LL;
	volatile int64_t t88 = 406260062391LL;

	t88 = (((x377==x378)-x379)/x380);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x381 = 164638655U;
	static int8_t x382 = 37;
	uint64_t t89 = 61767847219409171LLU;

	t89 = (((x381==x382)-x383)/x384);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x385 = UINT32_MAX;
	volatile int16_t x386 = -6181;
	volatile int32_t x387 = -1;
	int64_t t90 = 32556LL;

	t90 = (((x385==x386)-x387)/x388);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x389 = INT32_MIN;
	static uint8_t x390 = UINT8_MAX;
	static int8_t x392 = INT8_MIN;

	t91 = (((x389==x390)-x391)/x392);

	if (t91 != -673433) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x393 = 100596U;
	volatile uint64_t t92 = 14276LLU;

	t92 = (((x393==x394)-x395)/x396);

	if (t92 != 17LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x397 = INT64_MIN;
	static volatile uint32_t x398 = 49U;
	int8_t x400 = INT8_MIN;
	volatile int32_t t93 = -118862;

	t93 = (((x397==x398)-x399)/x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x401 = 1LLU;
	int16_t x402 = -1;
	int64_t x404 = -97892889LL;

	t94 = (((x401==x402)-x403)/x404);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x409 = INT64_MIN;
	uint8_t x411 = 1U;
	int8_t x412 = -5;
	static volatile int32_t t95 = -46;

	t95 = (((x409==x410)-x411)/x412);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x413 = 96U;
	uint32_t x414 = 2U;
	int8_t x415 = INT8_MAX;
	uint8_t x416 = UINT8_MAX;
	volatile int32_t t96 = 94;

	t96 = (((x413==x414)-x415)/x416);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x417 = 5406;
	static int8_t x418 = 0;
	uint8_t x419 = 35U;
	uint32_t x420 = 4321405U;
	static uint32_t t97 = 1531214300U;

	t97 = (((x417==x418)-x419)/x420);

	if (t97 != 993U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x421 = -1;
	uint32_t x422 = 424062U;
	int8_t x423 = INT8_MIN;
	uint64_t x424 = 1167493128009LLU;
	volatile uint64_t t98 = 1461084264LLU;

	t98 = (((x421==x422)-x423)/x424);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x425 = -399;
	static int16_t x426 = -1851;
	static int32_t x427 = -1352;
	int16_t x428 = -1;
	static volatile int32_t t99 = -244;

	t99 = (((x425==x426)-x427)/x428);

	if (t99 != -1352) { NG(); } else { ; }
	
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

