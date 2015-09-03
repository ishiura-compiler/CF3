#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = -1;
static int64_t x6 = -1LL;
int64_t x8 = INT64_MIN;
int32_t x9 = INT32_MIN;
int32_t t2 = -4413;
int16_t x16 = 9;
volatile uint64_t x19 = 366062673552106722LLU;
volatile int32_t x27 = INT32_MIN;
int32_t x35 = INT32_MIN;
volatile int8_t x40 = -1;
uint16_t x44 = 5U;
int32_t x45 = -43135906;
static int64_t x48 = INT64_MAX;
static uint8_t x56 = UINT8_MAX;
uint64_t x58 = 7120610680947986LLU;
int32_t x61 = INT32_MAX;
volatile int64_t x62 = 114672LL;
int64_t x65 = INT64_MIN;
static volatile uint64_t x68 = 126029130LLU;
static int8_t x73 = INT8_MIN;
int16_t x75 = -1;
int32_t x76 = -921;
static int8_t x81 = INT8_MIN;
volatile int32_t x84 = INT32_MIN;
volatile int32_t t19 = 155407847;
uint32_t x87 = 118181428U;
static int64_t x99 = INT64_MAX;
int8_t x102 = INT8_MIN;
static volatile int32_t x106 = INT32_MIN;
int64_t x116 = 1026381092930LL;
uint8_t x119 = UINT8_MAX;
static uint64_t x127 = UINT64_MAX;
static uint32_t x128 = 3808U;
int32_t x133 = -1;
int32_t x135 = INT32_MIN;
volatile int32_t t32 = 31826664;
static volatile uint8_t x137 = 7U;
static volatile int8_t x140 = INT8_MIN;
uint8_t x145 = UINT8_MAX;
int16_t x149 = -1;
uint64_t x154 = 44774548LLU;
int32_t t38 = 132;
int8_t x161 = INT8_MIN;
int32_t x171 = INT32_MIN;
int32_t t43 = -28474;
int32_t x182 = INT32_MIN;
volatile uint64_t x186 = UINT64_MAX;
uint16_t x189 = UINT16_MAX;
int32_t t47 = 9076111;
uint32_t x214 = 1883U;
int64_t x219 = 3633811339941774LL;
int8_t x223 = INT8_MIN;
static int64_t x224 = -20104097774837LL;
volatile int32_t t55 = -1573779;
uint64_t x232 = 1637693599408157885LLU;
static int32_t t56 = 1378461;
int64_t x235 = -78990305838718LL;
int64_t x241 = INT64_MIN;
static volatile int32_t t59 = -155081544;
volatile int32_t t61 = 4121;
int8_t x257 = INT8_MAX;
int32_t x268 = -1404;
int64_t x273 = INT64_MAX;
static uint32_t x275 = 1U;
static int16_t x278 = 514;
volatile int32_t t68 = 13112283;
uint8_t x281 = 84U;
int32_t t69 = -190574317;
static int8_t x291 = INT8_MAX;
uint16_t x299 = 1U;
uint64_t x305 = 118360057LLU;
volatile uint16_t x306 = UINT16_MAX;
volatile int32_t x310 = INT32_MIN;
uint32_t x314 = 48U;
int32_t x328 = INT32_MIN;
int32_t t80 = -4732894;
int64_t x331 = -1LL;
static uint8_t x335 = 38U;
static int32_t t82 = -81970;
static int16_t x343 = INT16_MAX;
int32_t t84 = -11;
int8_t x352 = 13;
uint32_t x362 = UINT32_MAX;
static int32_t t90 = -21112981;
volatile int8_t x376 = -1;
static uint32_t x379 = UINT32_MAX;
int32_t t94 = 89685945;
volatile int32_t x386 = INT32_MAX;
int8_t x393 = INT8_MIN;
int32_t t98 = 1122;
int8_t x404 = -1;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	static volatile int16_t x2 = INT16_MIN;
	int64_t x4 = 14979943550473LL;
	int32_t t0 = 1977828;

	t0 = (x1<(x2/(x3|x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	static uint32_t x7 = UINT32_MAX;
	int32_t t1 = 104;

	t1 = (x5<(x6/(x7|x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x10 = UINT8_MAX;
	uint64_t x11 = 5815909230253LLU;
	uint64_t x12 = 20034813459309782LLU;

	t2 = (x9<(x10/(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int64_t x14 = INT64_MAX;
	int8_t x15 = 16;
	volatile int32_t t3 = -2;

	t3 = (x13<(x14/(x15|x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x17 = -1;
	static int8_t x18 = INT8_MIN;
	int64_t x20 = -8493420LL;
	int32_t t4 = -245593;

	t4 = (x17<(x18/(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int8_t x22 = 1;
	int64_t x23 = INT64_MAX;
	int32_t x24 = INT32_MIN;
	int32_t t5 = -1918234;

	t5 = (x21<(x22/(x23|x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 87U;
	volatile int64_t x26 = -1LL;
	int16_t x28 = INT16_MIN;
	int32_t t6 = -1042734628;

	t6 = (x25<(x26/(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -1;
	int64_t x30 = -1LL;
	volatile int64_t x31 = -33394563829564155LL;
	static uint8_t x32 = 72U;
	static int32_t t7 = 122910;

	t7 = (x29<(x30/(x31|x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	uint8_t x34 = 3U;
	volatile int32_t x36 = -1;
	static volatile int32_t t8 = 856196;

	t8 = (x33<(x34/(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int64_t x38 = INT64_MIN;
	uint32_t x39 = UINT32_MAX;
	volatile int32_t t9 = 264401970;

	t9 = (x37<(x38/(x39|x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	uint64_t x42 = UINT64_MAX;
	static int16_t x43 = 7774;
	static volatile int32_t t10 = 31371;

	t10 = (x41<(x42/(x43|x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = 10479U;
	volatile int8_t x47 = INT8_MIN;
	static int32_t t11 = 1417;

	t11 = (x45<(x46/(x47|x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = 0;
	volatile int8_t x50 = INT8_MIN;
	int64_t x51 = -1LL;
	uint16_t x52 = UINT16_MAX;
	int32_t t12 = -46595970;

	t12 = (x49<(x50/(x51|x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	int8_t x54 = INT8_MAX;
	volatile int64_t x55 = INT64_MIN;
	static volatile int32_t t13 = -2515126;

	t13 = (x53<(x54/(x55|x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	static int8_t x59 = 1;
	uint64_t x60 = UINT64_MAX;
	volatile int32_t t14 = 227305;

	t14 = (x57<(x58/(x59|x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x63 = INT64_MIN;
	int64_t x64 = 0LL;
	static volatile int32_t t15 = 10659595;

	t15 = (x61<(x62/(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MAX;
	volatile int32_t x67 = INT32_MIN;
	volatile int32_t t16 = -21;

	t16 = (x65<(x66/(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x69 = UINT8_MAX;
	uint8_t x70 = 0U;
	int8_t x71 = INT8_MAX;
	static volatile uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = -11497;

	t17 = (x69<(x70/(x71|x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MIN;
	volatile int32_t t18 = 116537468;

	t18 = (x73<(x74/(x75|x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x82 = 2632U;
	int32_t x83 = INT32_MIN;

	t19 = (x81<(x82/(x83|x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -43124457;
	int64_t x86 = -1LL;
	uint64_t x88 = 41071214447LLU;
	volatile int32_t t20 = 19;

	t20 = (x85<(x86/(x87|x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MAX;
	uint32_t x90 = 49U;
	uint8_t x91 = 19U;
	volatile int8_t x92 = 0;
	volatile int32_t t21 = -698751;

	t21 = (x89<(x90/(x91|x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	volatile int64_t x94 = INT64_MAX;
	int8_t x95 = -59;
	int32_t x96 = -1;
	volatile int32_t t22 = -124;

	t22 = (x93<(x94/(x95|x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = -1;
	int32_t x98 = -343401;
	uint16_t x100 = 7860U;
	volatile int32_t t23 = -3;

	t23 = (x97<(x98/(x99|x100)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 236418228U;
	static uint16_t x103 = 42U;
	static int8_t x104 = INT8_MIN;
	int32_t t24 = 89468;

	t24 = (x101<(x102/(x103|x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x105 = 60U;
	uint32_t x107 = UINT32_MAX;
	int32_t x108 = 164850;
	volatile int32_t t25 = 47112290;

	t25 = (x105<(x106/(x107|x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MAX;
	static volatile int8_t x110 = INT8_MIN;
	static int16_t x111 = -1;
	static volatile uint64_t x112 = 47900912302233LLU;
	static int32_t t26 = -1189407;

	t26 = (x109<(x110/(x111|x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MAX;
	int64_t x114 = -13878LL;
	uint32_t x115 = UINT32_MAX;
	static int32_t t27 = -13;

	t27 = (x113<(x114/(x115|x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = 0;
	int8_t x118 = -1;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t28 = 166606;

	t28 = (x117<(x118/(x119|x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MAX;
	volatile int16_t x122 = INT16_MIN;
	int64_t x123 = -274LL;
	int32_t x124 = INT32_MIN;
	int32_t t29 = -13465315;

	t29 = (x121<(x122/(x123|x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MAX;
	static volatile int8_t x126 = INT8_MIN;
	int32_t t30 = 2;

	t30 = (x125<(x126/(x127|x128)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x129 = 0U;
	uint8_t x130 = UINT8_MAX;
	int32_t x131 = 6028154;
	int64_t x132 = INT64_MAX;
	volatile int32_t t31 = 87948348;

	t31 = (x129<(x130/(x131|x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x134 = INT16_MIN;
	uint8_t x136 = UINT8_MAX;

	t32 = (x133<(x134/(x135|x136)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x138 = UINT32_MAX;
	static int32_t x139 = INT32_MAX;
	static volatile int32_t t33 = -1046;

	t33 = (x137<(x138/(x139|x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = UINT32_MAX;
	volatile int32_t x142 = INT32_MIN;
	int8_t x143 = INT8_MIN;
	int32_t x144 = INT32_MIN;
	volatile int32_t t34 = 8;

	t34 = (x141<(x142/(x143|x144)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x146 = 1;
	int64_t x147 = INT64_MIN;
	static int8_t x148 = -1;
	static volatile int32_t t35 = -1;

	t35 = (x145<(x146/(x147|x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x150 = UINT16_MAX;
	volatile uint64_t x151 = UINT64_MAX;
	int32_t x152 = INT32_MIN;
	int32_t t36 = 0;

	t36 = (x149<(x150/(x151|x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = 737185655438LLU;
	int16_t x155 = -1;
	int8_t x156 = -1;
	int32_t t37 = -18;

	t37 = (x153<(x154/(x155|x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = INT16_MAX;
	int32_t x158 = -346022772;
	volatile uint64_t x159 = UINT64_MAX;
	volatile int64_t x160 = INT64_MIN;

	t38 = (x157<(x158/(x159|x160)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x162 = 29LLU;
	volatile int64_t x163 = INT64_MIN;
	int8_t x164 = -1;
	volatile int32_t t39 = 1536;

	t39 = (x161<(x162/(x163|x164)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = 11194592037LLU;
	int32_t x166 = INT32_MIN;
	uint32_t x167 = UINT32_MAX;
	int16_t x168 = -1;
	volatile int32_t t40 = 9700761;

	t40 = (x165<(x166/(x167|x168)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x169 = INT16_MAX;
	uint64_t x170 = 263159477LLU;
	int32_t x172 = INT32_MIN;
	volatile int32_t t41 = -78;

	t41 = (x169<(x170/(x171|x172)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = INT32_MAX;
	int8_t x174 = INT8_MIN;
	int32_t x175 = -1;
	static uint32_t x176 = 0U;
	int32_t t42 = 0;

	t42 = (x173<(x174/(x175|x176)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x177 = 11U;
	int16_t x178 = INT16_MIN;
	int64_t x179 = -1LL;
	int16_t x180 = -1;

	t43 = (x177<(x178/(x179|x180)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x181 = 85937462808515913LLU;
	int64_t x183 = INT64_MAX;
	int64_t x184 = -1LL;
	volatile int32_t t44 = -332;

	t44 = (x181<(x182/(x183|x184)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MIN;
	static uint16_t x187 = UINT16_MAX;
	int8_t x188 = INT8_MAX;
	volatile int32_t t45 = -4;

	t45 = (x185<(x186/(x187|x188)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x190 = INT16_MIN;
	uint32_t x191 = 236506399U;
	int32_t x192 = -99151;
	static volatile int32_t t46 = -1029;

	t46 = (x189<(x190/(x191|x192)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = -1LL;
	static int32_t x194 = -2146;
	static uint16_t x195 = 17978U;
	volatile uint8_t x196 = 33U;

	t47 = (x193<(x194/(x195|x196)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x197 = 1;
	static int32_t x198 = -1;
	static int32_t x199 = -357;
	uint64_t x200 = UINT64_MAX;
	static int32_t t48 = -4039;

	t48 = (x197<(x198/(x199|x200)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MIN;
	volatile int8_t x202 = INT8_MIN;
	int64_t x203 = -669719002424LL;
	static volatile uint16_t x204 = 80U;
	volatile int32_t t49 = 1609095;

	t49 = (x201<(x202/(x203|x204)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x205 = UINT16_MAX;
	static uint8_t x206 = 15U;
	static int8_t x207 = INT8_MAX;
	int32_t x208 = -853598044;
	int32_t t50 = 1619104;

	t50 = (x205<(x206/(x207|x208)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = INT8_MAX;
	int32_t x210 = -1;
	int8_t x211 = INT8_MAX;
	static uint16_t x212 = 42U;
	int32_t t51 = 26292;

	t51 = (x209<(x210/(x211|x212)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MIN;
	volatile uint32_t x215 = 208772U;
	volatile int32_t x216 = INT32_MIN;
	static int32_t t52 = -8066;

	t52 = (x213<(x214/(x215|x216)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = 12752;
	int32_t x218 = -27;
	int64_t x220 = 298780120LL;
	static int32_t t53 = 0;

	t53 = (x217<(x218/(x219|x220)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x221 = UINT32_MAX;
	uint32_t x222 = 0U;
	static volatile int32_t t54 = -475547;

	t54 = (x221<(x222/(x223|x224)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x225 = 30;
	volatile int16_t x226 = INT16_MIN;
	uint32_t x227 = 706U;
	int32_t x228 = INT32_MIN;

	t55 = (x225<(x226/(x227|x228)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = -1;
	uint32_t x230 = 52640U;
	volatile uint64_t x231 = UINT64_MAX;

	t56 = (x229<(x230/(x231|x232)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = -113;
	static int8_t x234 = 0;
	int64_t x236 = 102416349358586963LL;
	int32_t t57 = -2414659;

	t57 = (x233<(x234/(x235|x236)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x237 = INT8_MIN;
	int64_t x238 = INT64_MIN;
	volatile int16_t x239 = 5897;
	static int64_t x240 = -1840044301053140674LL;
	int32_t t58 = 81380;

	t58 = (x237<(x238/(x239|x240)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x242 = UINT64_MAX;
	static uint64_t x243 = UINT64_MAX;
	volatile int64_t x244 = 32234863913299520LL;

	t59 = (x241<(x242/(x243|x244)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = 2;
	int16_t x246 = -16192;
	uint8_t x247 = 28U;
	int64_t x248 = 1539255067405440663LL;
	volatile int32_t t60 = -37470;

	t60 = (x245<(x246/(x247|x248)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = INT32_MIN;
	static int64_t x250 = 27202128368001513LL;
	static int64_t x251 = INT64_MIN;
	static int64_t x252 = INT64_MIN;

	t61 = (x249<(x250/(x251|x252)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x253 = 4562U;
	int16_t x254 = INT16_MIN;
	int16_t x255 = 6595;
	uint32_t x256 = 51803865U;
	int32_t t62 = -2;

	t62 = (x253<(x254/(x255|x256)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x258 = 83U;
	int32_t x259 = INT32_MAX;
	int32_t x260 = INT32_MIN;
	int32_t t63 = 2113407;

	t63 = (x257<(x258/(x259|x260)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = -1;
	static uint16_t x262 = 542U;
	uint32_t x263 = 11U;
	int64_t x264 = INT64_MIN;
	volatile int32_t t64 = 2010963;

	t64 = (x261<(x262/(x263|x264)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x265 = 87561LLU;
	uint32_t x266 = UINT32_MAX;
	int8_t x267 = INT8_MAX;
	int32_t t65 = 11551723;

	t65 = (x265<(x266/(x267|x268)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x269 = 2799U;
	int16_t x270 = 126;
	volatile uint32_t x271 = UINT32_MAX;
	int8_t x272 = INT8_MIN;
	static int32_t t66 = 7985;

	t66 = (x269<(x270/(x271|x272)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x274 = INT32_MIN;
	int8_t x276 = -16;
	volatile int32_t t67 = -4008358;

	t67 = (x273<(x274/(x275|x276)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = 12844487777259LL;
	int16_t x279 = INT16_MAX;
	int8_t x280 = INT8_MAX;

	t68 = (x277<(x278/(x279|x280)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x282 = 2604734LLU;
	uint32_t x283 = 1295136U;
	int8_t x284 = INT8_MIN;

	t69 = (x281<(x282/(x283|x284)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x285 = 794922035235LLU;
	uint64_t x286 = UINT64_MAX;
	uint8_t x287 = UINT8_MAX;
	uint16_t x288 = UINT16_MAX;
	int32_t t70 = 65802915;

	t70 = (x285<(x286/(x287|x288)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x289 = INT16_MAX;
	int16_t x290 = 0;
	volatile int16_t x292 = INT16_MAX;
	int32_t t71 = 1;

	t71 = (x289<(x290/(x291|x292)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x293 = -1128388;
	static uint64_t x294 = 33851847912LLU;
	uint16_t x295 = 31738U;
	int8_t x296 = INT8_MIN;
	int32_t t72 = 99051;

	t72 = (x293<(x294/(x295|x296)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x297 = INT16_MIN;
	static uint32_t x298 = UINT32_MAX;
	volatile uint32_t x300 = UINT32_MAX;
	int32_t t73 = -31617;

	t73 = (x297<(x298/(x299|x300)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = INT32_MIN;
	static int32_t x302 = INT32_MAX;
	int32_t x303 = -1;
	int64_t x304 = INT64_MIN;
	int32_t t74 = 1656;

	t74 = (x301<(x302/(x303|x304)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x307 = 163LL;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t75 = 615566858;

	t75 = (x305<(x306/(x307|x308)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = INT64_MAX;
	int8_t x311 = INT8_MAX;
	volatile uint64_t x312 = UINT64_MAX;
	volatile int32_t t76 = 37;

	t76 = (x309<(x310/(x311|x312)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x313 = 11U;
	uint64_t x315 = 9712LLU;
	volatile int64_t x316 = 573367459248132978LL;
	volatile int32_t t77 = 0;

	t77 = (x313<(x314/(x315|x316)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x317 = 2374443205836925LLU;
	int64_t x318 = INT64_MAX;
	volatile int64_t x319 = -217871LL;
	volatile int8_t x320 = INT8_MAX;
	static int32_t t78 = 195;

	t78 = (x317<(x318/(x319|x320)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x321 = UINT64_MAX;
	volatile int8_t x322 = INT8_MAX;
	uint8_t x323 = 47U;
	int64_t x324 = 6345010639737LL;
	static int32_t t79 = 36780795;

	t79 = (x321<(x322/(x323|x324)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x325 = -1;
	volatile int32_t x326 = -739;
	int64_t x327 = INT64_MIN;

	t80 = (x325<(x326/(x327|x328)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = INT16_MAX;
	static int32_t x330 = INT32_MIN;
	int16_t x332 = -1254;
	static int32_t t81 = 123;

	t81 = (x329<(x330/(x331|x332)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x333 = 1;
	int8_t x334 = -1;
	int16_t x336 = 974;

	t82 = (x333<(x334/(x335|x336)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = 6843;
	static int16_t x338 = -1;
	static volatile uint32_t x339 = 1158U;
	int64_t x340 = -1LL;
	volatile int32_t t83 = -54622812;

	t83 = (x337<(x338/(x339|x340)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x341 = INT16_MIN;
	uint64_t x342 = 107069942386973710LLU;
	static int8_t x344 = INT8_MIN;

	t84 = (x341<(x342/(x343|x344)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x345 = INT8_MIN;
	int16_t x346 = INT16_MIN;
	static int8_t x347 = INT8_MIN;
	int16_t x348 = INT16_MIN;
	volatile int32_t t85 = -469469726;

	t85 = (x345<(x346/(x347|x348)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x349 = INT8_MIN;
	int16_t x350 = 79;
	volatile int16_t x351 = 104;
	static int32_t t86 = 50105123;

	t86 = (x349<(x350/(x351|x352)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x353 = INT64_MIN;
	int32_t x354 = INT32_MIN;
	volatile int8_t x355 = INT8_MIN;
	static uint32_t x356 = UINT32_MAX;
	static volatile int32_t t87 = 0;

	t87 = (x353<(x354/(x355|x356)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x357 = -28;
	int32_t x358 = INT32_MIN;
	uint8_t x359 = 1U;
	static int32_t x360 = 0;
	volatile int32_t t88 = 20;

	t88 = (x357<(x358/(x359|x360)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x361 = INT8_MAX;
	static volatile int64_t x363 = -1LL;
	uint64_t x364 = 417986842659013758LLU;
	volatile int32_t t89 = 1;

	t89 = (x361<(x362/(x363|x364)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x365 = 0U;
	int16_t x366 = -1;
	uint8_t x367 = 71U;
	int32_t x368 = INT32_MAX;

	t90 = (x365<(x366/(x367|x368)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = INT8_MIN;
	volatile int8_t x370 = INT8_MAX;
	uint64_t x371 = UINT64_MAX;
	uint16_t x372 = UINT16_MAX;
	int32_t t91 = -3422;

	t91 = (x369<(x370/(x371|x372)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x373 = 105452032542LLU;
	uint8_t x374 = UINT8_MAX;
	int64_t x375 = INT64_MAX;
	volatile int32_t t92 = -114;

	t92 = (x373<(x374/(x375|x376)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x377 = 527196429U;
	uint16_t x378 = 22U;
	static volatile int32_t x380 = INT32_MIN;
	int32_t t93 = 31;

	t93 = (x377<(x378/(x379|x380)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x381 = INT16_MIN;
	int8_t x382 = INT8_MAX;
	static int32_t x383 = INT32_MAX;
	volatile uint8_t x384 = 32U;

	t94 = (x381<(x382/(x383|x384)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x385 = -1LL;
	int32_t x387 = INT32_MIN;
	int32_t x388 = INT32_MIN;
	volatile int32_t t95 = -18032074;

	t95 = (x385<(x386/(x387|x388)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x389 = -1;
	int8_t x390 = INT8_MAX;
	int8_t x391 = INT8_MIN;
	static uint16_t x392 = 28U;
	int32_t t96 = 6900;

	t96 = (x389<(x390/(x391|x392)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x394 = INT16_MIN;
	int16_t x395 = INT16_MAX;
	int64_t x396 = -1LL;
	int32_t t97 = 3;

	t97 = (x393<(x394/(x395|x396)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x397 = -1;
	int32_t x398 = INT32_MIN;
	int64_t x399 = INT64_MIN;
	volatile int64_t x400 = INT64_MIN;

	t98 = (x397<(x398/(x399|x400)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x401 = 19;
	volatile int8_t x402 = INT8_MIN;
	int64_t x403 = INT64_MIN;
	static int32_t t99 = 411;

	t99 = (x401<(x402/(x403|x404)));

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

