#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MIN;
int64_t x9 = INT64_MIN;
volatile int64_t x23 = 6287039LL;
int64_t x25 = INT64_MAX;
volatile int8_t x28 = -1;
int16_t x30 = INT16_MIN;
volatile int8_t x31 = -1;
volatile uint16_t x36 = 25495U;
volatile int32_t t9 = -9313;
int16_t x45 = 4538;
int16_t x56 = INT16_MAX;
uint8_t x58 = UINT8_MAX;
volatile int32_t t14 = -614840659;
int16_t x66 = INT16_MIN;
int32_t x71 = 2494;
volatile uint16_t x75 = UINT16_MAX;
int32_t x76 = INT32_MIN;
volatile int32_t t19 = -1;
int8_t x82 = -30;
static int64_t x84 = 1705350022022LL;
int8_t x90 = INT8_MAX;
int32_t t22 = 109545;
int8_t x97 = INT8_MIN;
volatile int16_t x99 = INT16_MIN;
int16_t x103 = 0;
int32_t t24 = 515324;
volatile int32_t x112 = -1;
uint32_t t27 = 1380088U;
int32_t x121 = 206;
volatile uint16_t x122 = 1U;
static uint64_t x123 = 5346LLU;
uint64_t t30 = 28926LLU;
volatile int16_t x132 = -1;
int32_t x135 = -172311;
uint32_t x136 = UINT32_MAX;
int16_t x141 = 907;
int16_t x142 = -52;
int32_t x143 = INT32_MIN;
int16_t x148 = INT16_MAX;
uint16_t x150 = UINT16_MAX;
int32_t x159 = 18777286;
int64_t x160 = INT64_MAX;
uint64_t x162 = 1182137963053073LLU;
uint16_t x166 = 31U;
int16_t x167 = INT16_MIN;
int32_t x171 = INT32_MIN;
uint64_t x172 = 4459932294101478036LLU;
int32_t x187 = -1;
int8_t x188 = INT8_MIN;
static int8_t x189 = INT8_MIN;
int8_t x199 = INT8_MIN;
uint16_t x204 = UINT16_MAX;
int64_t t49 = 50LL;
int16_t x216 = 4;
volatile int8_t x217 = INT8_MAX;
int16_t x218 = INT16_MIN;
uint64_t x224 = UINT64_MAX;
uint64_t t53 = 9769725LLU;
int32_t x235 = INT32_MIN;
int16_t x238 = -10;
static uint16_t x243 = UINT16_MAX;
volatile int32_t t61 = -58354224;
int64_t t63 = 747553273LL;
int64_t x267 = INT64_MIN;
int32_t x270 = 13;
int16_t x271 = INT16_MAX;
int16_t x282 = -1;
int16_t x284 = INT16_MAX;
uint64_t x285 = 12LLU;
int8_t x287 = INT8_MIN;
int8_t x289 = INT8_MIN;
volatile int64_t t69 = -97991508408846161LL;
int64_t x298 = 2251108028886251732LL;
int8_t x299 = -1;
int16_t x302 = INT16_MIN;
uint64_t x308 = 5421442806457071LLU;
int8_t x310 = INT8_MIN;
uint8_t x314 = UINT8_MAX;
static volatile int32_t x316 = INT32_MAX;
static uint16_t x320 = 393U;
int32_t x321 = -1042327096;
int16_t x324 = INT16_MIN;
static int32_t t78 = 112;
int32_t x330 = INT32_MAX;
uint8_t x336 = 34U;
volatile int8_t x341 = 55;
static int32_t x345 = 11;
volatile int32_t t83 = 124;
uint16_t x349 = UINT16_MAX;
static volatile int64_t x350 = -81664127620221835LL;
volatile int64_t x351 = INT64_MAX;
int8_t x355 = -1;
volatile int32_t x356 = INT32_MAX;
volatile uint32_t t88 = 2U;
int16_t x376 = 1;
static int64_t x378 = -967266860LL;
int8_t x385 = 4;
int8_t x389 = 0;
uint16_t x393 = 24574U;
static int32_t t95 = 81295;
uint32_t x397 = 1855U;
static uint8_t x399 = 7U;
int16_t x401 = 122;
volatile int32_t t97 = 35743;
volatile int32_t x407 = INT32_MIN;
uint8_t x409 = 8U;
int64_t x410 = -1LL;
volatile int64_t t99 = -8210LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static uint64_t x2 = 641914477735325324LLU;
	int8_t x3 = INT8_MAX;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -2132;

	t0 = (((x1==x2)==x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	volatile uint64_t x7 = UINT64_MAX;
	int8_t x8 = INT8_MAX;
	int32_t t1 = -5;

	t1 = (((x5==x6)==x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	int32_t x11 = INT32_MIN;
	int32_t x12 = -1;
	int32_t t2 = -3088;

	t2 = (((x9==x10)==x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -67150588530LL;
	int32_t x14 = INT32_MAX;
	static int8_t x15 = -1;
	volatile uint8_t x16 = 1U;
	volatile int32_t t3 = 120457292;

	t3 = (((x13==x14)==x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int16_t x18 = -2;
	int64_t x19 = -1LL;
	int8_t x20 = -1;
	volatile int32_t t4 = -210895;

	t4 = (((x17==x18)==x19)/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	int64_t x22 = -1LL;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = 0;

	t5 = (((x21==x22)==x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x26 = UINT64_MAX;
	int16_t x27 = -1;
	int32_t t6 = 2026152;

	t6 = (((x25==x26)==x27)/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MAX;
	static int64_t x32 = -1LL;
	volatile int64_t t7 = -754804LL;

	t7 = (((x29==x30)==x31)/x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 27LLU;
	int8_t x34 = 0;
	int16_t x35 = INT16_MIN;
	volatile int32_t t8 = 8;

	t8 = (((x33==x34)==x35)/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	uint8_t x38 = 4U;
	static uint64_t x39 = 596012260LLU;
	int8_t x40 = -1;

	t9 = (((x37==x38)==x39)/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	uint16_t x42 = 7138U;
	uint64_t x43 = 0LLU;
	int16_t x44 = -1;
	int32_t t10 = 130112;

	t10 = (((x41==x42)==x43)/x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = -20;
	int8_t x47 = INT8_MIN;
	volatile int64_t x48 = INT64_MIN;
	static volatile int64_t t11 = -320364LL;

	t11 = (((x45==x46)==x47)/x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	uint64_t x50 = 7623518372017057LLU;
	static int32_t x51 = INT32_MAX;
	volatile uint64_t x52 = 6415004711LLU;
	uint64_t t12 = 3854904846003LLU;

	t12 = (((x49==x50)==x51)/x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	volatile uint16_t x54 = 30U;
	uint8_t x55 = 113U;
	static volatile int32_t t13 = 2;

	t13 = (((x53==x54)==x55)/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = 3;
	static volatile int16_t x59 = INT16_MIN;
	uint16_t x60 = 155U;

	t14 = (((x57==x58)==x59)/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 3790U;
	uint16_t x62 = UINT16_MAX;
	uint64_t x63 = UINT64_MAX;
	int8_t x64 = -1;
	static int32_t t15 = -46653817;

	t15 = (((x61==x62)==x63)/x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 4U;
	uint16_t x67 = UINT16_MAX;
	int16_t x68 = INT16_MAX;
	int32_t t16 = -3282234;

	t16 = (((x65==x66)==x67)/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = -1;
	volatile uint32_t x70 = 1446U;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = -22829292;

	t17 = (((x69==x70)==x71)/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x73 = UINT32_MAX;
	int64_t x74 = 12LL;
	volatile int32_t t18 = 588135;

	t18 = (((x73==x74)==x75)/x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -1;
	uint32_t x78 = 1005840U;
	int16_t x79 = -1592;
	static volatile int8_t x80 = -10;

	t19 = (((x77==x78)==x79)/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x81 = 31LLU;
	volatile int8_t x83 = INT8_MAX;
	static int64_t t20 = 26338457744LL;

	t20 = (((x81==x82)==x83)/x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MAX;
	int64_t x91 = INT64_MAX;
	int64_t x92 = -1346076754254380LL;
	int64_t t21 = 72811277191042LL;

	t21 = (((x89==x90)==x91)/x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = 174;
	volatile int16_t x94 = 4670;
	volatile uint64_t x95 = 2301397217740141LLU;
	int16_t x96 = INT16_MIN;

	t22 = (((x93==x94)==x95)/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x98 = 55U;
	static uint64_t x100 = 1732665263146LLU;
	volatile uint64_t t23 = 9065LLU;

	t23 = (((x97==x98)==x99)/x100);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = INT64_MIN;
	uint16_t x102 = UINT16_MAX;
	uint16_t x104 = 3161U;

	t24 = (((x101==x102)==x103)/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	int64_t x106 = -1LL;
	static int32_t x107 = -1;
	uint32_t x108 = UINT32_MAX;
	uint32_t t25 = 398U;

	t25 = (((x105==x106)==x107)/x108);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x109 = 10710U;
	int64_t x110 = -1LL;
	uint8_t x111 = 11U;
	static int32_t t26 = 1;

	t26 = (((x109==x110)==x111)/x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x113 = INT8_MAX;
	static int64_t x114 = INT64_MAX;
	volatile int8_t x115 = -1;
	uint32_t x116 = 47U;

	t27 = (((x113==x114)==x115)/x116);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	static int8_t x118 = -4;
	int16_t x119 = INT16_MAX;
	uint64_t x120 = 3LLU;
	volatile uint64_t t28 = 153250LLU;

	t28 = (((x117==x118)==x119)/x120);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x124 = -1;
	static volatile int32_t t29 = 1748594;

	t29 = (((x121==x122)==x123)/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 0U;
	uint32_t x126 = 260485U;
	int64_t x127 = INT64_MIN;
	uint64_t x128 = 22825526929268LLU;

	t30 = (((x125==x126)==x127)/x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = 72393LLU;
	static int64_t x130 = 6LL;
	uint32_t x131 = 8U;
	static volatile int32_t t31 = 5768;

	t31 = (((x129==x130)==x131)/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = 38U;
	volatile int32_t x134 = INT32_MIN;
	uint32_t t32 = 200387738U;

	t32 = (((x133==x134)==x135)/x136);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MAX;
	static volatile int32_t x138 = INT32_MIN;
	int16_t x139 = -11;
	static uint16_t x140 = 7443U;
	int32_t t33 = -26173657;

	t33 = (((x137==x138)==x139)/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x144 = INT32_MIN;
	int32_t t34 = 6825;

	t34 = (((x141==x142)==x143)/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x145 = INT8_MIN;
	uint32_t x146 = 641067923U;
	int64_t x147 = -34219468462LL;
	volatile int32_t t35 = 47625;

	t35 = (((x145==x146)==x147)/x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x149 = UINT32_MAX;
	volatile int16_t x151 = -567;
	uint32_t x152 = 100U;
	volatile uint32_t t36 = 15332895U;

	t36 = (((x149==x150)==x151)/x152);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = INT64_MIN;
	uint16_t x154 = 1582U;
	int32_t x155 = -1;
	int64_t x156 = -1LL;
	volatile int64_t t37 = -62290069915LL;

	t37 = (((x153==x154)==x155)/x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = INT16_MAX;
	volatile int32_t x158 = 1;
	int64_t t38 = 109237063LL;

	t38 = (((x157==x158)==x159)/x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x161 = INT64_MIN;
	int16_t x163 = -1;
	int8_t x164 = INT8_MIN;
	int32_t t39 = 750;

	t39 = (((x161==x162)==x163)/x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x165 = 7U;
	int16_t x168 = -2;
	static int32_t t40 = -56936484;

	t40 = (((x165==x166)==x167)/x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x169 = -1;
	static uint16_t x170 = 479U;
	uint64_t t41 = 15LLU;

	t41 = (((x169==x170)==x171)/x172);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x173 = INT16_MAX;
	int32_t x174 = -3;
	static uint16_t x175 = 0U;
	static int32_t x176 = 3342515;
	static volatile int32_t t42 = -4022;

	t42 = (((x173==x174)==x175)/x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x181 = INT64_MIN;
	int8_t x182 = -4;
	int8_t x183 = -1;
	uint8_t x184 = 52U;
	int32_t t43 = -115997;

	t43 = (((x181==x182)==x183)/x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MIN;
	int32_t x186 = -826995;
	volatile int32_t t44 = -101;

	t44 = (((x185==x186)==x187)/x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x190 = -401;
	int32_t x191 = -1;
	uint32_t x192 = 5151424U;
	volatile uint32_t t45 = 4102287U;

	t45 = (((x189==x190)==x191)/x192);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x193 = 12U;
	uint32_t x194 = UINT32_MAX;
	uint16_t x195 = 0U;
	static int32_t x196 = 1614622;
	volatile int32_t t46 = -229264480;

	t46 = (((x193==x194)==x195)/x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = 1;
	int64_t x198 = INT64_MIN;
	volatile int16_t x200 = INT16_MIN;
	static volatile int32_t t47 = 861;

	t47 = (((x197==x198)==x199)/x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	int8_t x202 = INT8_MIN;
	int8_t x203 = 13;
	int32_t t48 = 28565;

	t48 = (((x201==x202)==x203)/x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x205 = -1;
	static int8_t x206 = INT8_MAX;
	int32_t x207 = -1;
	int64_t x208 = 19389734067131LL;

	t49 = (((x205==x206)==x207)/x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = -1;
	int8_t x210 = -48;
	int8_t x211 = INT8_MIN;
	static volatile int8_t x212 = -1;
	static int32_t t50 = 446464143;

	t50 = (((x209==x210)==x211)/x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x213 = 1485649601LL;
	int32_t x214 = 3;
	int64_t x215 = INT64_MIN;
	static int32_t t51 = -2524742;

	t51 = (((x213==x214)==x215)/x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x219 = INT16_MIN;
	volatile int64_t x220 = INT64_MIN;
	volatile int64_t t52 = -3023849580523572LL;

	t52 = (((x217==x218)==x219)/x220);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = -1;
	int64_t x222 = -1LL;
	volatile int32_t x223 = INT32_MIN;

	t53 = (((x221==x222)==x223)/x224);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x225 = -1014;
	int16_t x226 = 7;
	int64_t x227 = INT64_MIN;
	int64_t x228 = INT64_MIN;
	int64_t t54 = 0LL;

	t54 = (((x225==x226)==x227)/x228);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = -1;
	int32_t x230 = INT32_MAX;
	uint8_t x231 = 50U;
	int16_t x232 = INT16_MIN;
	volatile int32_t t55 = -99079;

	t55 = (((x229==x230)==x231)/x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = -1;
	int64_t x234 = 5380035350204LL;
	int32_t x236 = -1;
	int32_t t56 = -6;

	t56 = (((x233==x234)==x235)/x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = -15278449748720408LL;
	int8_t x239 = INT8_MAX;
	int8_t x240 = -1;
	volatile int32_t t57 = 14;

	t57 = (((x237==x238)==x239)/x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x241 = 0U;
	int64_t x242 = 17411614490950LL;
	int64_t x244 = INT64_MAX;
	int64_t t58 = -103171LL;

	t58 = (((x241==x242)==x243)/x244);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x245 = INT32_MIN;
	static volatile uint64_t x246 = 9881975233339LLU;
	int32_t x247 = -435513063;
	static uint32_t x248 = UINT32_MAX;
	uint32_t t59 = 102U;

	t59 = (((x245==x246)==x247)/x248);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = 25U;
	uint16_t x250 = 3U;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = -16361541;
	volatile int32_t t60 = -9;

	t60 = (((x249==x250)==x251)/x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = INT8_MAX;
	uint16_t x254 = 10111U;
	uint32_t x255 = 264U;
	volatile int32_t x256 = INT32_MIN;

	t61 = (((x253==x254)==x255)/x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x257 = 1012488U;
	int64_t x258 = INT64_MAX;
	int8_t x259 = -10;
	static uint8_t x260 = 20U;
	volatile int32_t t62 = -495852234;

	t62 = (((x257==x258)==x259)/x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x261 = UINT32_MAX;
	int64_t x262 = INT64_MAX;
	uint32_t x263 = UINT32_MAX;
	int64_t x264 = INT64_MAX;

	t63 = (((x261==x262)==x263)/x264);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x265 = 24478U;
	int32_t x266 = -1;
	int8_t x268 = -1;
	static int32_t t64 = -417336;

	t64 = (((x265==x266)==x267)/x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x269 = -1LL;
	int64_t x272 = INT64_MIN;
	static volatile int64_t t65 = -569294270839762251LL;

	t65 = (((x269==x270)==x271)/x272);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x277 = INT8_MAX;
	int64_t x278 = INT64_MIN;
	int64_t x279 = -268665894220674LL;
	static volatile int8_t x280 = INT8_MIN;
	int32_t t66 = 0;

	t66 = (((x277==x278)==x279)/x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x281 = INT8_MIN;
	static volatile int16_t x283 = INT16_MIN;
	volatile int32_t t67 = -6611060;

	t67 = (((x281==x282)==x283)/x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x286 = -1;
	uint32_t x288 = UINT32_MAX;
	uint32_t t68 = 119220468U;

	t68 = (((x285==x286)==x287)/x288);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x290 = -1;
	int16_t x291 = -6;
	volatile int64_t x292 = 33LL;

	t69 = (((x289==x290)==x291)/x292);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x293 = INT8_MIN;
	volatile int16_t x294 = 239;
	int32_t x295 = INT32_MIN;
	int8_t x296 = 1;
	int32_t t70 = 186995;

	t70 = (((x293==x294)==x295)/x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = 3;
	int32_t x300 = INT32_MIN;
	int32_t t71 = 550;

	t71 = (((x297==x298)==x299)/x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x301 = INT16_MIN;
	int32_t x303 = -1;
	int8_t x304 = INT8_MIN;
	int32_t t72 = -3396;

	t72 = (((x301==x302)==x303)/x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = INT16_MIN;
	volatile int16_t x306 = -1;
	int8_t x307 = INT8_MIN;
	uint64_t t73 = 193273LLU;

	t73 = (((x305==x306)==x307)/x308);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x309 = 1784476511806785LLU;
	int16_t x311 = 385;
	int16_t x312 = 38;
	int32_t t74 = -17664;

	t74 = (((x309==x310)==x311)/x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = -244;
	int16_t x315 = -3;
	int32_t t75 = -577343;

	t75 = (((x313==x314)==x315)/x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x317 = INT8_MAX;
	int32_t x318 = INT32_MAX;
	volatile uint8_t x319 = 79U;
	int32_t t76 = 181;

	t76 = (((x317==x318)==x319)/x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x322 = UINT64_MAX;
	volatile int16_t x323 = -280;
	int32_t t77 = 19427728;

	t77 = (((x321==x322)==x323)/x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = -1LL;
	uint16_t x326 = 385U;
	int64_t x327 = -2LL;
	volatile int16_t x328 = -1;

	t78 = (((x325==x326)==x327)/x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = 9501;
	int8_t x331 = 0;
	static volatile int32_t x332 = INT32_MIN;
	volatile int32_t t79 = -10980650;

	t79 = (((x329==x330)==x331)/x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x333 = 67629U;
	static uint8_t x334 = 47U;
	volatile int8_t x335 = -1;
	volatile int32_t t80 = -1;

	t80 = (((x333==x334)==x335)/x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x337 = INT64_MAX;
	int16_t x338 = 297;
	uint64_t x339 = 2309837313371LLU;
	int16_t x340 = INT16_MIN;
	int32_t t81 = -8170163;

	t81 = (((x337==x338)==x339)/x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x342 = 1012566628747610LL;
	int8_t x343 = 0;
	volatile uint8_t x344 = 6U;
	volatile int32_t t82 = 397245597;

	t82 = (((x341==x342)==x343)/x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x346 = INT32_MIN;
	int32_t x347 = INT32_MIN;
	int8_t x348 = INT8_MIN;

	t83 = (((x345==x346)==x347)/x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x352 = INT32_MIN;
	volatile int32_t t84 = -612489;

	t84 = (((x349==x350)==x351)/x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = 501798LL;
	volatile int32_t t85 = -14436;

	t85 = (((x353==x354)==x355)/x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x357 = 0U;
	int8_t x358 = -24;
	int32_t x359 = 1795444;
	static int32_t x360 = INT32_MAX;
	volatile int32_t t86 = -3473;

	t86 = (((x357==x358)==x359)/x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = INT8_MAX;
	static uint8_t x362 = 19U;
	volatile uint64_t x363 = UINT64_MAX;
	int8_t x364 = INT8_MAX;
	volatile int32_t t87 = 8292806;

	t87 = (((x361==x362)==x363)/x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = 0;
	int32_t x366 = 1651266;
	int16_t x367 = -8149;
	uint32_t x368 = 15U;

	t88 = (((x365==x366)==x367)/x368);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x369 = 0U;
	static volatile int8_t x370 = -1;
	uint64_t x371 = 8035361399005658LLU;
	int16_t x372 = -8256;
	volatile int32_t t89 = -82;

	t89 = (((x369==x370)==x371)/x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x373 = 1U;
	uint32_t x374 = 761936U;
	uint64_t x375 = 8818889832804020678LLU;
	int32_t t90 = -1538516;

	t90 = (((x373==x374)==x375)/x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x377 = INT32_MIN;
	int64_t x379 = INT64_MAX;
	int32_t x380 = INT32_MAX;
	volatile int32_t t91 = 9;

	t91 = (((x377==x378)==x379)/x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x381 = -1LL;
	uint16_t x382 = 1U;
	int8_t x383 = INT8_MIN;
	int64_t x384 = -1LL;
	int64_t t92 = -5LL;

	t92 = (((x381==x382)==x383)/x384);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x386 = INT8_MIN;
	static int32_t x387 = 4249;
	volatile int16_t x388 = -1;
	int32_t t93 = 1;

	t93 = (((x385==x386)==x387)/x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x390 = INT64_MAX;
	volatile int8_t x391 = -3;
	int8_t x392 = -1;
	int32_t t94 = 4;

	t94 = (((x389==x390)==x391)/x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x394 = 40;
	volatile int16_t x395 = -7199;
	volatile int8_t x396 = INT8_MIN;

	t95 = (((x393==x394)==x395)/x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x398 = 3U;
	uint8_t x400 = 60U;
	int32_t t96 = 1;

	t96 = (((x397==x398)==x399)/x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x402 = INT32_MIN;
	volatile uint8_t x403 = UINT8_MAX;
	static int8_t x404 = -62;

	t97 = (((x401==x402)==x403)/x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x405 = INT32_MIN;
	volatile int16_t x406 = INT16_MIN;
	static uint8_t x408 = 21U;
	volatile int32_t t98 = 1;

	t98 = (((x405==x406)==x407)/x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x411 = 54;
	static int64_t x412 = 437LL;

	t99 = (((x409==x410)==x411)/x412);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

