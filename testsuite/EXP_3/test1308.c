#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x6 = 17U;
static int8_t x8 = INT8_MIN;
int64_t x16 = -1LL;
int32_t t4 = -1675;
int64_t x25 = INT64_MIN;
volatile int8_t x30 = -1;
int32_t t10 = 5568387;
int8_t x45 = 5;
int16_t x59 = -1;
int8_t x61 = 0;
int32_t t16 = 0;
int32_t x69 = -694474023;
static int16_t x70 = -12206;
int8_t x74 = INT8_MAX;
volatile int64_t x79 = 4087LL;
volatile int8_t x80 = INT8_MIN;
static int32_t t19 = 3;
static int8_t x81 = 3;
int16_t x82 = -1;
int32_t t20 = -342;
int32_t x91 = 177386230;
static int32_t t23 = 4810430;
int8_t x100 = INT8_MAX;
volatile int32_t t25 = 2;
volatile int32_t t27 = 47;
static int32_t t29 = 81193;
static int32_t x124 = INT32_MIN;
int32_t t32 = -80;
uint64_t x135 = 3194517468067398026LLU;
int64_t x136 = -204LL;
int32_t t36 = -16178;
volatile uint64_t x149 = 9828LLU;
static volatile int32_t t38 = 255;
static int8_t x163 = INT8_MIN;
int16_t x172 = -1;
static uint8_t x177 = 0U;
int64_t x178 = 16535415009624942LL;
int8_t x179 = 30;
int8_t x181 = INT8_MIN;
int64_t x185 = INT64_MIN;
uint16_t x186 = 1U;
int8_t x196 = -2;
int32_t t49 = 105692;
uint32_t x206 = 12743061U;
int16_t x208 = INT16_MIN;
volatile int32_t t51 = 10067;
int64_t x210 = INT64_MIN;
int8_t x213 = INT8_MAX;
uint16_t x220 = UINT16_MAX;
uint16_t x224 = 15382U;
uint8_t x234 = 1U;
volatile int8_t x235 = 1;
uint8_t x238 = 25U;
int16_t x241 = 1726;
volatile uint16_t x245 = 942U;
static volatile int32_t t61 = -42042;
int32_t x254 = 146100434;
uint32_t x262 = 30U;
int32_t x264 = INT32_MIN;
volatile int32_t t67 = -228;
int8_t x274 = -27;
uint64_t x282 = 6LLU;
volatile int8_t x291 = INT8_MAX;
static int32_t x292 = INT32_MIN;
int16_t x294 = INT16_MAX;
int32_t x295 = -1;
static volatile int32_t t74 = -72114806;
int16_t x303 = -17;
uint8_t x304 = UINT8_MAX;
int8_t x309 = INT8_MAX;
static int32_t x312 = 319051;
int32_t t77 = -83;
int16_t x315 = -1;
volatile uint32_t x318 = 0U;
volatile int32_t t80 = -207957;
uint16_t x326 = UINT16_MAX;
static int32_t x329 = -1;
static int32_t t83 = -4438;
int64_t x345 = INT64_MAX;
static uint8_t x347 = 3U;
uint16_t x348 = 4094U;
static int32_t t86 = 3;
volatile int32_t x351 = -11;
volatile int32_t t87 = 6;
uint64_t x355 = 1856036664LLU;
int32_t t88 = -567402621;
int16_t x364 = 338;
int64_t x366 = 1LL;
uint32_t x375 = UINT32_MAX;
static int32_t t93 = -25349;
uint8_t x377 = 28U;
uint16_t x382 = 122U;
volatile int32_t t95 = 1;


void f0(void) {
	uint32_t x1 = 0U;
	static uint16_t x2 = 5840U;
	int8_t x3 = 1;
	volatile int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = -170359899;

	t0 = ((x1<=x2)==(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 1430466517537LL;
	int64_t x7 = -1LL;
	static int32_t t1 = -253;

	t1 = ((x5<=x6)==(x7==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 3U;
	volatile uint16_t x10 = UINT16_MAX;
	uint16_t x11 = 31U;
	int64_t x12 = -174122551LL;
	int32_t t2 = 7;

	t2 = ((x9<=x10)==(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MAX;
	volatile int64_t x14 = INT64_MAX;
	static int8_t x15 = -1;
	volatile int32_t t3 = 0;

	t3 = ((x13<=x14)==(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 23068714473LLU;
	uint32_t x18 = UINT32_MAX;
	int8_t x19 = INT8_MIN;
	uint32_t x20 = 527092066U;

	t4 = ((x17<=x18)==(x19==x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	volatile uint8_t x22 = 36U;
	static uint16_t x23 = 5959U;
	int16_t x24 = INT16_MAX;
	volatile int32_t t5 = -341;

	t5 = ((x21<=x22)==(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x26 = 0;
	static int16_t x27 = -1;
	int64_t x28 = -1LL;
	static int32_t t6 = 720;

	t6 = ((x25<=x26)==(x27==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	volatile uint8_t x31 = UINT8_MAX;
	int16_t x32 = 7;
	volatile int32_t t7 = 113;

	t7 = ((x29<=x30)==(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 1181798503LLU;
	volatile int16_t x34 = INT16_MAX;
	uint8_t x35 = 1U;
	int64_t x36 = INT64_MIN;
	int32_t t8 = 27360177;

	t8 = ((x33<=x34)==(x35==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = UINT16_MAX;
	uint32_t x38 = 250752U;
	static volatile int8_t x39 = INT8_MAX;
	int32_t x40 = -1;
	int32_t t9 = -440584;

	t9 = ((x37<=x38)==(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = 1U;
	int32_t x42 = -90224066;
	int8_t x43 = -4;
	static uint32_t x44 = 15062423U;

	t10 = ((x41<=x42)==(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = 2530879494LLU;
	uint16_t x47 = UINT16_MAX;
	int16_t x48 = -1720;
	static volatile int32_t t11 = -1;

	t11 = ((x45<=x46)==(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MIN;
	int64_t x50 = -1LL;
	static int8_t x51 = -1;
	int32_t x52 = 15368;
	volatile int32_t t12 = -189176;

	t12 = ((x49<=x50)==(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x53 = UINT8_MAX;
	uint8_t x54 = 63U;
	static volatile uint8_t x55 = UINT8_MAX;
	volatile int8_t x56 = INT8_MIN;
	static int32_t t13 = 0;

	t13 = ((x53<=x54)==(x55==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MIN;
	volatile int32_t x58 = 250363;
	int8_t x60 = 2;
	int32_t t14 = -22;

	t14 = ((x57<=x58)==(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x62 = INT32_MAX;
	int16_t x63 = INT16_MAX;
	uint64_t x64 = 7935178232244943LLU;
	int32_t t15 = -13683820;

	t15 = ((x61<=x62)==(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -254;
	uint8_t x66 = 3U;
	volatile int8_t x67 = -40;
	int32_t x68 = -264825;

	t16 = ((x65<=x66)==(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x71 = INT32_MIN;
	static int32_t x72 = -1;
	int32_t t17 = -13;

	t17 = ((x69<=x70)==(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 1U;
	int16_t x75 = -39;
	int16_t x76 = INT16_MIN;
	volatile int32_t t18 = -13828060;

	t18 = ((x73<=x74)==(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	static int16_t x78 = INT16_MAX;

	t19 = ((x77<=x78)==(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x83 = UINT16_MAX;
	int32_t x84 = -1;

	t20 = ((x81<=x82)==(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = -26;
	volatile int32_t x86 = -1;
	static volatile uint64_t x87 = 1656LLU;
	uint8_t x88 = 123U;
	int32_t t21 = 5516995;

	t21 = ((x85<=x86)==(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	int64_t x90 = INT64_MAX;
	int16_t x92 = 6560;
	int32_t t22 = -129548226;

	t22 = ((x89<=x90)==(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x93 = 2545628207LLU;
	static volatile uint8_t x94 = 31U;
	int32_t x95 = INT32_MIN;
	volatile uint64_t x96 = UINT64_MAX;

	t23 = ((x93<=x94)==(x95==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x97 = INT16_MIN;
	volatile int64_t x98 = -1LL;
	static int64_t x99 = INT64_MIN;
	int32_t t24 = -6826320;

	t24 = ((x97<=x98)==(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 447351960975464LL;
	volatile uint32_t x102 = UINT32_MAX;
	volatile uint64_t x103 = UINT64_MAX;
	int8_t x104 = INT8_MIN;

	t25 = ((x101<=x102)==(x103==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 1758943749389LLU;
	static volatile uint16_t x106 = 1478U;
	static volatile int8_t x107 = -1;
	volatile int16_t x108 = 51;
	volatile int32_t t26 = 28630;

	t26 = ((x105<=x106)==(x107==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = -22846962;
	int64_t x110 = 47LL;
	uint32_t x111 = 4U;
	volatile int64_t x112 = -34811LL;

	t27 = ((x109<=x110)==(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	int8_t x114 = INT8_MIN;
	int16_t x115 = INT16_MAX;
	int32_t x116 = -1;
	int32_t t28 = 79080;

	t28 = ((x113<=x114)==(x115==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int32_t x118 = INT32_MAX;
	volatile uint16_t x119 = UINT16_MAX;
	static volatile int8_t x120 = INT8_MAX;

	t29 = ((x117<=x118)==(x119==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	static volatile int32_t x122 = INT32_MIN;
	uint32_t x123 = 66627774U;
	volatile int32_t t30 = 0;

	t30 = ((x121<=x122)==(x123==x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 8U;
	int32_t x126 = INT32_MAX;
	volatile uint32_t x127 = 6727U;
	int64_t x128 = 110979LL;
	int32_t t31 = 0;

	t31 = ((x125<=x126)==(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x129 = UINT32_MAX;
	volatile uint64_t x130 = 1684002LLU;
	uint8_t x131 = UINT8_MAX;
	uint64_t x132 = 157155209035LLU;

	t32 = ((x129<=x130)==(x131==x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	uint16_t x134 = UINT16_MAX;
	volatile int32_t t33 = -1;

	t33 = ((x133<=x134)==(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 10280U;
	volatile int64_t x138 = INT64_MIN;
	int8_t x139 = -1;
	int32_t x140 = -5332;
	static volatile int32_t t34 = -170;

	t34 = ((x137<=x138)==(x139==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = UINT8_MAX;
	uint8_t x142 = 0U;
	static int32_t x143 = 1990;
	static int8_t x144 = INT8_MIN;
	int32_t t35 = 4719;

	t35 = ((x141<=x142)==(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 1U;
	int64_t x146 = 1LL;
	static int16_t x147 = -1;
	uint16_t x148 = UINT16_MAX;

	t36 = ((x145<=x146)==(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MIN;
	int64_t x151 = INT64_MIN;
	int16_t x152 = 0;
	volatile int32_t t37 = 102;

	t37 = ((x149<=x150)==(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	static volatile int64_t x154 = -1LL;
	int8_t x155 = INT8_MAX;
	uint32_t x156 = 398674265U;

	t38 = ((x153<=x154)==(x155==x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	int32_t x158 = INT32_MIN;
	static uint8_t x159 = UINT8_MAX;
	static volatile uint32_t x160 = 1U;
	int32_t t39 = -55308915;

	t39 = ((x157<=x158)==(x159==x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MAX;
	int16_t x162 = -143;
	int8_t x164 = INT8_MIN;
	volatile int32_t t40 = 101;

	t40 = ((x161<=x162)==(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	static int32_t x166 = 9836;
	static int64_t x167 = 19110906178LL;
	uint16_t x168 = 5305U;
	static volatile int32_t t41 = 224;

	t41 = ((x165<=x166)==(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 12529;
	int8_t x170 = INT8_MIN;
	static uint16_t x171 = 1697U;
	volatile int32_t t42 = -439;

	t42 = ((x169<=x170)==(x171==x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	volatile uint32_t x174 = UINT32_MAX;
	int32_t x175 = -1;
	int32_t x176 = 58325275;
	int32_t t43 = -12;

	t43 = ((x173<=x174)==(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x180 = UINT64_MAX;
	int32_t t44 = 0;

	t44 = ((x177<=x178)==(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x182 = INT16_MIN;
	uint64_t x183 = 4073467307LLU;
	int8_t x184 = 14;
	volatile int32_t t45 = -99;

	t45 = ((x181<=x182)==(x183==x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x187 = INT16_MAX;
	int32_t x188 = INT32_MAX;
	int32_t t46 = 46;

	t46 = ((x185<=x186)==(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x189 = UINT8_MAX;
	int64_t x190 = -2615178101978534285LL;
	int8_t x191 = INT8_MIN;
	static int8_t x192 = -2;
	static volatile int32_t t47 = 1122770;

	t47 = ((x189<=x190)==(x191==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int16_t x194 = INT16_MAX;
	volatile uint32_t x195 = UINT32_MAX;
	int32_t t48 = -1;

	t48 = ((x193<=x194)==(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	uint8_t x198 = UINT8_MAX;
	int32_t x199 = INT32_MIN;
	volatile int8_t x200 = INT8_MAX;

	t49 = ((x197<=x198)==(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	uint64_t x202 = UINT64_MAX;
	uint64_t x203 = 930766916LLU;
	uint8_t x204 = 46U;
	int32_t t50 = -37455;

	t50 = ((x201<=x202)==(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MAX;
	int16_t x207 = INT16_MIN;

	t51 = ((x205<=x206)==(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	volatile int64_t x211 = INT64_MIN;
	uint16_t x212 = 90U;
	int32_t t52 = -14612;

	t52 = ((x209<=x210)==(x211==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = 2930368185LL;
	uint32_t x215 = 21548080U;
	int8_t x216 = -1;
	volatile int32_t t53 = 6;

	t53 = ((x213<=x214)==(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = 48;
	int16_t x218 = 822;
	uint16_t x219 = UINT16_MAX;
	int32_t t54 = -433;

	t54 = ((x217<=x218)==(x219==x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MIN;
	int16_t x222 = -1;
	volatile int32_t x223 = -1;
	volatile int32_t t55 = 10929;

	t55 = ((x221<=x222)==(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1744267;
	int64_t x226 = 187942527491LL;
	int8_t x227 = INT8_MAX;
	int32_t x228 = -1;
	int32_t t56 = -11654784;

	t56 = ((x225<=x226)==(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -122;
	int8_t x230 = INT8_MIN;
	int8_t x231 = 11;
	int64_t x232 = INT64_MIN;
	volatile int32_t t57 = 5;

	t57 = ((x229<=x230)==(x231==x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -1;
	static uint8_t x236 = 0U;
	volatile int32_t t58 = 90212279;

	t58 = ((x233<=x234)==(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = 1;
	int32_t x239 = -1;
	int64_t x240 = -1LL;
	static volatile int32_t t59 = -214;

	t59 = ((x237<=x238)==(x239==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = 665187LL;
	int16_t x243 = -1;
	uint32_t x244 = 402410U;
	volatile int32_t t60 = 55528;

	t60 = ((x241<=x242)==(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = 99;
	int64_t x247 = INT64_MIN;
	static volatile int16_t x248 = INT16_MAX;

	t61 = ((x245<=x246)==(x247==x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	int16_t x250 = 1;
	static int64_t x251 = INT64_MAX;
	uint16_t x252 = 417U;
	volatile int32_t t62 = 430060314;

	t62 = ((x249<=x250)==(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int16_t x255 = 6;
	int16_t x256 = INT16_MAX;
	volatile int32_t t63 = 413604392;

	t63 = ((x253<=x254)==(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	int32_t x258 = INT32_MIN;
	static int64_t x259 = -1LL;
	int32_t x260 = -1;
	volatile int32_t t64 = -802809;

	t64 = ((x257<=x258)==(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MAX;
	static int8_t x263 = 0;
	static int32_t t65 = -51612363;

	t65 = ((x261<=x262)==(x263==x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = UINT64_MAX;
	volatile int64_t x266 = 47240LL;
	int64_t x267 = 409016951030LL;
	static int8_t x268 = INT8_MIN;
	static volatile int32_t t66 = -3638;

	t66 = ((x265<=x266)==(x267==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x269 = UINT16_MAX;
	static uint16_t x270 = UINT16_MAX;
	int64_t x271 = INT64_MIN;
	static int64_t x272 = INT64_MIN;

	t67 = ((x269<=x270)==(x271==x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x273 = 101U;
	int64_t x275 = INT64_MAX;
	static volatile int16_t x276 = INT16_MIN;
	int32_t t68 = 31;

	t68 = ((x273<=x274)==(x275==x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = INT32_MIN;
	uint32_t x278 = UINT32_MAX;
	int8_t x279 = INT8_MIN;
	int32_t x280 = 916;
	int32_t t69 = 4660265;

	t69 = ((x277<=x278)==(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	uint32_t x283 = UINT32_MAX;
	uint32_t x284 = 19U;
	volatile int32_t t70 = -26121299;

	t70 = ((x281<=x282)==(x283==x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = -1;
	uint8_t x286 = 2U;
	int16_t x287 = INT16_MIN;
	uint16_t x288 = UINT16_MAX;
	static volatile int32_t t71 = -101703877;

	t71 = ((x285<=x286)==(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x289 = UINT64_MAX;
	int16_t x290 = -61;
	int32_t t72 = -427527876;

	t72 = ((x289<=x290)==(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x293 = 1U;
	int64_t x296 = -17248164946LL;
	static int32_t t73 = 8967310;

	t73 = ((x293<=x294)==(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	uint32_t x298 = UINT32_MAX;
	int16_t x299 = 7757;
	int64_t x300 = -1LL;

	t74 = ((x297<=x298)==(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -1;
	int8_t x302 = -8;
	int32_t t75 = -6;

	t75 = ((x301<=x302)==(x303==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x305 = 877402412496256LLU;
	uint64_t x306 = UINT64_MAX;
	volatile int8_t x307 = 15;
	int32_t x308 = INT32_MIN;
	volatile int32_t t76 = 9;

	t76 = ((x305<=x306)==(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x310 = 118U;
	uint16_t x311 = 35U;

	t77 = ((x309<=x310)==(x311==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x313 = UINT16_MAX;
	volatile uint16_t x314 = 159U;
	volatile int16_t x316 = INT16_MIN;
	int32_t t78 = 329954803;

	t78 = ((x313<=x314)==(x315==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	int32_t x319 = INT32_MIN;
	int64_t x320 = INT64_MAX;
	static int32_t t79 = 32595;

	t79 = ((x317<=x318)==(x319==x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = UINT32_MAX;
	static uint16_t x322 = 595U;
	int64_t x323 = INT64_MAX;
	static volatile int64_t x324 = INT64_MIN;

	t80 = ((x321<=x322)==(x323==x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MIN;
	volatile int64_t x327 = -76365253LL;
	uint16_t x328 = 14U;
	int32_t t81 = -1565;

	t81 = ((x325<=x326)==(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = -1;
	volatile uint8_t x331 = 6U;
	static int8_t x332 = -1;
	static int32_t t82 = 27878225;

	t82 = ((x329<=x330)==(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 3666042LL;
	volatile int32_t x334 = -222;
	int16_t x335 = INT16_MAX;
	static uint8_t x336 = 2U;

	t83 = ((x333<=x334)==(x335==x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	static uint64_t x338 = 583616755965026LLU;
	int8_t x339 = -25;
	int16_t x340 = -1;
	int32_t t84 = 6517;

	t84 = ((x337<=x338)==(x339==x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	uint16_t x342 = 3053U;
	int16_t x343 = INT16_MIN;
	static int64_t x344 = INT64_MIN;
	volatile int32_t t85 = -1;

	t85 = ((x341<=x342)==(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x346 = -1;

	t86 = ((x345<=x346)==(x347==x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x349 = 1U;
	int64_t x350 = 36LL;
	static int16_t x352 = -1;

	t87 = ((x349<=x350)==(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	int32_t x354 = INT32_MIN;
	uint8_t x356 = 3U;

	t88 = ((x353<=x354)==(x355==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int64_t x358 = INT64_MIN;
	int16_t x359 = INT16_MAX;
	int8_t x360 = INT8_MAX;
	volatile int32_t t89 = -415205;

	t89 = ((x357<=x358)==(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 2U;
	static int32_t x362 = -1;
	uint16_t x363 = 9U;
	int32_t t90 = 8824854;

	t90 = ((x361<=x362)==(x363==x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = 48817935633LLU;
	uint16_t x367 = 126U;
	static int64_t x368 = -1LL;
	int32_t t91 = 392;

	t91 = ((x365<=x366)==(x367==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MAX;
	volatile int64_t x370 = INT64_MIN;
	static int8_t x371 = INT8_MIN;
	static int8_t x372 = -10;
	static int32_t t92 = -29939522;

	t92 = ((x369<=x370)==(x371==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = -1;
	uint64_t x374 = 20979LLU;
	static int32_t x376 = INT32_MIN;

	t93 = ((x373<=x374)==(x375==x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x378 = INT64_MAX;
	uint64_t x379 = 3491444317LLU;
	int32_t x380 = INT32_MIN;
	int32_t t94 = 0;

	t94 = ((x377<=x378)==(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	static int32_t x383 = INT32_MIN;
	static int64_t x384 = -1043662158LL;

	t95 = ((x381<=x382)==(x383==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 38;
	int8_t x386 = INT8_MIN;
	int16_t x387 = INT16_MIN;
	uint16_t x388 = 781U;
	int32_t t96 = -64195;

	t96 = ((x385<=x386)==(x387==x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	int32_t x390 = INT32_MAX;
	int64_t x391 = INT64_MAX;
	int64_t x392 = 90428002LL;
	volatile int32_t t97 = 88369442;

	t97 = ((x389<=x390)==(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = 31U;
	volatile uint16_t x394 = 67U;
	static volatile int64_t x395 = -1LL;
	int64_t x396 = -4861348069LL;
	volatile int32_t t98 = 47;

	t98 = ((x393<=x394)==(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 264030814U;
	int16_t x398 = INT16_MIN;
	static volatile int64_t x399 = INT64_MIN;
	static uint32_t x400 = 3U;
	int32_t t99 = -1289;

	t99 = ((x397<=x398)==(x399==x400));

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

