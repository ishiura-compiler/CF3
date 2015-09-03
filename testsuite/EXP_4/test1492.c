#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MAX;
static int32_t x8 = INT32_MIN;
int64_t x9 = INT64_MIN;
static uint8_t x10 = 1U;
static int16_t x14 = -586;
volatile int64_t x18 = INT64_MAX;
static uint16_t x20 = 23U;
static int8_t x21 = 14;
uint8_t x23 = 1U;
int32_t x26 = -1;
volatile int16_t x27 = -1;
int8_t x32 = INT8_MIN;
int32_t t8 = -1;
static int64_t x44 = -1LL;
int64_t x45 = INT64_MAX;
int32_t x50 = INT32_MAX;
static int16_t x52 = 782;
int8_t x55 = -3;
static int8_t x56 = INT8_MIN;
uint32_t x58 = 138952U;
static volatile uint8_t x61 = 12U;
int16_t x62 = 1;
volatile int64_t x67 = 8078248697LL;
volatile uint16_t x68 = UINT16_MAX;
static volatile int32_t t16 = 117;
int16_t x70 = 0;
int8_t x71 = INT8_MAX;
volatile uint64_t x72 = 35LLU;
volatile int16_t x79 = 9;
int32_t t20 = 15804572;
uint32_t x87 = UINT32_MAX;
static uint8_t x91 = 95U;
int32_t x92 = INT32_MIN;
int16_t x93 = -1;
int32_t x128 = 1;
static int32_t t31 = -729003;
int64_t x132 = -1LL;
int64_t x134 = INT64_MIN;
volatile uint32_t x138 = 1430611450U;
volatile uint8_t x143 = UINT8_MAX;
static int16_t x148 = -1;
volatile int16_t x149 = -185;
static int8_t x154 = INT8_MAX;
static int32_t x156 = INT32_MIN;
volatile int8_t x158 = INT8_MIN;
int8_t x166 = INT8_MIN;
int64_t x168 = INT64_MAX;
volatile int64_t x174 = -1LL;
uint64_t x175 = UINT64_MAX;
volatile int64_t x196 = -1LL;
int16_t x202 = INT16_MAX;
uint64_t x210 = 3LLU;
uint8_t x211 = UINT8_MAX;
int8_t x213 = -62;
volatile int16_t x215 = INT16_MAX;
uint16_t x218 = UINT16_MAX;
int32_t x221 = -1;
static int32_t t57 = -26563;
volatile int32_t t58 = -578;
int8_t x241 = INT8_MIN;
int32_t x245 = INT32_MIN;
int32_t t61 = 7088;
int32_t x254 = -2267;
static uint16_t x256 = 888U;
volatile int16_t x262 = INT16_MIN;
int8_t x270 = INT8_MIN;
uint32_t x276 = 403896U;
static int64_t x277 = INT64_MAX;
uint16_t x284 = UINT16_MAX;
int8_t x285 = -1;
volatile int32_t x286 = -1264;
uint64_t x296 = UINT64_MAX;
volatile int32_t t76 = 368;
int64_t x313 = INT64_MIN;
int32_t x315 = INT32_MAX;
volatile int32_t t80 = 1;
static uint8_t x326 = UINT8_MAX;
uint32_t x328 = UINT32_MAX;
int32_t t83 = -35833193;
int16_t x345 = -1;
volatile int32_t t88 = 122117286;
int32_t t95 = -66961780;
uint8_t x387 = 119U;
int8_t x389 = INT8_MAX;
volatile uint8_t x392 = 24U;
volatile int16_t x398 = -1712;
int32_t x400 = INT32_MAX;


void f0(void) {
	int16_t x1 = -1534;
	int32_t x2 = -1;
	uint8_t x3 = UINT8_MAX;
	int32_t x4 = 5;
	volatile int32_t t0 = -797166168;

	t0 = (x1<=(x2&(x3<x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 2U;
	uint8_t x7 = 15U;
	volatile int32_t t1 = 199151;

	t1 = (x5<=(x6&(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x11 = UINT64_MAX;
	int8_t x12 = 1;
	static int32_t t2 = 134065055;

	t2 = (x9<=(x10&(x11<x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 1409U;
	uint16_t x15 = 1U;
	uint32_t x16 = 5707746U;
	static volatile int32_t t3 = -454599288;

	t3 = (x13<=(x14&(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 2U;
	static volatile int64_t x19 = INT64_MAX;
	int32_t t4 = 461;

	t4 = (x17<=(x18&(x19<x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 229779949395417845LLU;
	static volatile int64_t x24 = INT64_MIN;
	volatile int32_t t5 = 17;

	t5 = (x21<=(x22&(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 965;
	uint16_t x28 = 4U;
	volatile int32_t t6 = 5;

	t6 = (x25<=(x26&(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MIN;
	volatile int64_t x30 = 23582933LL;
	int16_t x31 = -251;
	static volatile int32_t t7 = 1005;

	t7 = (x29<=(x30&(x31<x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = -1;
	static volatile uint64_t x34 = 3934195320456283LLU;
	static int8_t x35 = -2;
	volatile int16_t x36 = INT16_MIN;

	t8 = (x33<=(x34&(x35<x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	uint16_t x38 = 1070U;
	int64_t x39 = INT64_MIN;
	int8_t x40 = 6;
	static int32_t t9 = -54;

	t9 = (x37<=(x38&(x39<x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int16_t x42 = -118;
	int64_t x43 = INT64_MAX;
	volatile int32_t t10 = 32977;

	t10 = (x41<=(x42&(x43<x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MIN;
	static uint64_t x47 = UINT64_MAX;
	int8_t x48 = INT8_MIN;
	int32_t t11 = -1;

	t11 = (x45<=(x46&(x47<x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 8223547337448259LL;
	uint64_t x51 = UINT64_MAX;
	static int32_t t12 = -3326464;

	t12 = (x49<=(x50&(x51<x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = 3;
	static int64_t x54 = INT64_MAX;
	static int32_t t13 = -867809051;

	t13 = (x53<=(x54&(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	volatile uint32_t x59 = 144U;
	volatile uint32_t x60 = 60042U;
	volatile int32_t t14 = -11;

	t14 = (x57<=(x58&(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x63 = INT32_MAX;
	int8_t x64 = -1;
	int32_t t15 = -1285;

	t15 = (x61<=(x62&(x63<x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	int16_t x66 = -112;

	t16 = (x65<=(x66&(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 2029875U;
	int32_t t17 = 189059;

	t17 = (x69<=(x70&(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = 1273LLU;
	static int64_t x74 = INT64_MAX;
	uint32_t x75 = 49100366U;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t18 = -14615485;

	t18 = (x73<=(x74&(x75<x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	uint8_t x78 = UINT8_MAX;
	int64_t x80 = 28859962997LL;
	volatile int32_t t19 = -31;

	t19 = (x77<=(x78&(x79<x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -12736372LL;
	int8_t x82 = INT8_MIN;
	static uint16_t x83 = 0U;
	int32_t x84 = INT32_MIN;

	t20 = (x81<=(x82&(x83<x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x85 = INT64_MAX;
	volatile int16_t x86 = 88;
	int8_t x88 = INT8_MIN;
	int32_t t21 = -979427;

	t21 = (x85<=(x86&(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x89 = 75655791U;
	int8_t x90 = 1;
	int32_t t22 = -1593347;

	t22 = (x89<=(x90&(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x94 = INT64_MIN;
	uint8_t x95 = 0U;
	uint32_t x96 = 1563U;
	volatile int32_t t23 = 913;

	t23 = (x93<=(x94&(x95<x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x97 = 12U;
	int16_t x98 = INT16_MIN;
	static uint8_t x99 = 7U;
	int64_t x100 = INT64_MAX;
	static int32_t t24 = 1129;

	t24 = (x97<=(x98&(x99<x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	int64_t x102 = -1LL;
	uint64_t x103 = 1331685192710LLU;
	static int64_t x104 = -1507559386812009858LL;
	volatile int32_t t25 = -1142859;

	t25 = (x101<=(x102&(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	uint8_t x106 = UINT8_MAX;
	int8_t x107 = INT8_MIN;
	int32_t x108 = INT32_MAX;
	static volatile int32_t t26 = -5200;

	t26 = (x105<=(x106&(x107<x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int16_t x110 = INT16_MIN;
	int32_t x111 = INT32_MIN;
	int8_t x112 = 0;
	volatile int32_t t27 = 8021062;

	t27 = (x109<=(x110&(x111<x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	uint8_t x114 = UINT8_MAX;
	int64_t x115 = INT64_MAX;
	int8_t x116 = INT8_MAX;
	volatile int32_t t28 = -577870;

	t28 = (x113<=(x114&(x115<x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int32_t x118 = -1014699199;
	int32_t x119 = INT32_MIN;
	int32_t x120 = INT32_MAX;
	static int32_t t29 = 4980035;

	t29 = (x117<=(x118&(x119<x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = -1;
	uint64_t x122 = 251185126300388622LLU;
	volatile uint8_t x123 = 3U;
	uint8_t x124 = UINT8_MAX;
	int32_t t30 = 63216;

	t30 = (x121<=(x122&(x123<x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	static int8_t x126 = -1;
	uint8_t x127 = 2U;

	t31 = (x125<=(x126&(x127<x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 6316778U;
	int8_t x130 = -1;
	static int64_t x131 = INT64_MIN;
	volatile int32_t t32 = -1524334;

	t32 = (x129<=(x130&(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 39U;
	uint16_t x135 = UINT16_MAX;
	int32_t x136 = 8552;
	static int32_t t33 = 18566;

	t33 = (x133<=(x134&(x135<x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	uint64_t x139 = 1058668844831418LLU;
	int8_t x140 = INT8_MIN;
	volatile int32_t t34 = -1;

	t34 = (x137<=(x138&(x139<x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	uint64_t x142 = 84861770045070LLU;
	uint16_t x144 = 4U;
	volatile int32_t t35 = -330744381;

	t35 = (x141<=(x142&(x143<x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	volatile uint16_t x146 = UINT16_MAX;
	int32_t x147 = INT32_MIN;
	volatile int32_t t36 = 46;

	t36 = (x145<=(x146&(x147<x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x150 = 4913U;
	int8_t x151 = INT8_MIN;
	volatile int8_t x152 = INT8_MAX;
	int32_t t37 = 25642892;

	t37 = (x149<=(x150&(x151<x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	int16_t x155 = INT16_MIN;
	volatile int32_t t38 = 8040;

	t38 = (x153<=(x154&(x155<x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -173451;
	volatile int16_t x159 = 7267;
	int64_t x160 = INT64_MIN;
	int32_t t39 = -972;

	t39 = (x157<=(x158&(x159<x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 49U;
	static int64_t x162 = 3895749439839719LL;
	int64_t x163 = -85LL;
	int16_t x164 = -158;
	volatile int32_t t40 = 219544163;

	t40 = (x161<=(x162&(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MAX;
	uint8_t x167 = UINT8_MAX;
	volatile int32_t t41 = -739059;

	t41 = (x165<=(x166&(x167<x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int16_t x170 = INT16_MIN;
	uint32_t x171 = UINT32_MAX;
	volatile int16_t x172 = -16231;
	int32_t t42 = 161;

	t42 = (x169<=(x170&(x171<x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = INT8_MAX;
	int16_t x176 = 1;
	volatile int32_t t43 = -1229;

	t43 = (x173<=(x174&(x175<x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	static int32_t x178 = INT32_MIN;
	int64_t x179 = 706LL;
	uint16_t x180 = 22U;
	static volatile int32_t t44 = -120;

	t44 = (x177<=(x178&(x179<x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	int32_t x182 = 764415153;
	int8_t x183 = -1;
	int32_t x184 = -1;
	volatile int32_t t45 = -511;

	t45 = (x181<=(x182&(x183<x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 0;
	static int16_t x186 = 887;
	int64_t x187 = INT64_MIN;
	static int64_t x188 = INT64_MIN;
	volatile int32_t t46 = 22346924;

	t46 = (x185<=(x186&(x187<x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x189 = INT32_MAX;
	int64_t x190 = -69LL;
	int16_t x191 = -1;
	static volatile int8_t x192 = INT8_MIN;
	int32_t t47 = -8982;

	t47 = (x189<=(x190&(x191<x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 11308LLU;
	static int16_t x194 = 465;
	int16_t x195 = INT16_MIN;
	static int32_t t48 = 3;

	t48 = (x193<=(x194&(x195<x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	volatile int32_t x198 = -1591;
	volatile uint32_t x199 = 594504820U;
	int32_t x200 = -1899386;
	volatile int32_t t49 = -3418763;

	t49 = (x197<=(x198&(x199<x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	volatile int8_t x203 = INT8_MAX;
	static volatile int32_t x204 = INT32_MIN;
	volatile int32_t t50 = 207482034;

	t50 = (x201<=(x202&(x203<x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	static int64_t x206 = INT64_MAX;
	volatile int16_t x207 = -1;
	int8_t x208 = INT8_MIN;
	static volatile int32_t t51 = -4;

	t51 = (x205<=(x206&(x207<x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x209 = 69U;
	int8_t x212 = -1;
	int32_t t52 = -1520506;

	t52 = (x209<=(x210&(x211<x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x214 = -7;
	uint32_t x216 = 167394202U;
	int32_t t53 = -1039969265;

	t53 = (x213<=(x214&(x215<x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = INT32_MIN;
	int64_t x219 = INT64_MIN;
	uint8_t x220 = 8U;
	int32_t t54 = -15296495;

	t54 = (x217<=(x218&(x219<x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x222 = INT8_MIN;
	volatile int16_t x223 = -1;
	int32_t x224 = 598;
	volatile int32_t t55 = 8783378;

	t55 = (x221<=(x222&(x223<x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x225 = -14;
	int8_t x226 = INT8_MIN;
	int32_t x227 = 196648614;
	int16_t x228 = INT16_MIN;
	int32_t t56 = 2063;

	t56 = (x225<=(x226&(x227<x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = INT64_MIN;
	volatile uint32_t x230 = UINT32_MAX;
	volatile int64_t x231 = -3831946874775331LL;
	static int64_t x232 = INT64_MIN;

	t57 = (x229<=(x230&(x231<x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MAX;
	static int32_t x234 = INT32_MIN;
	uint32_t x235 = UINT32_MAX;
	int32_t x236 = -1;

	t58 = (x233<=(x234&(x235<x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	int32_t x238 = INT32_MAX;
	uint16_t x239 = 4U;
	int16_t x240 = -1;
	volatile int32_t t59 = -4096022;

	t59 = (x237<=(x238&(x239<x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x242 = INT16_MIN;
	int16_t x243 = -252;
	uint8_t x244 = 28U;
	int32_t t60 = -56035650;

	t60 = (x241<=(x242&(x243<x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = INT64_MIN;
	static uint8_t x247 = 62U;
	int32_t x248 = INT32_MIN;

	t61 = (x245<=(x246&(x247<x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 2628531168LLU;
	static int64_t x250 = -126LL;
	static volatile int64_t x251 = 96450LL;
	uint32_t x252 = 528U;
	int32_t t62 = -23357031;

	t62 = (x249<=(x250&(x251<x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = UINT64_MAX;
	volatile int64_t x255 = INT64_MIN;
	volatile int32_t t63 = 24976938;

	t63 = (x253<=(x254&(x255<x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = 11365896;
	int64_t x258 = INT64_MIN;
	int8_t x259 = -7;
	uint8_t x260 = UINT8_MAX;
	static volatile int32_t t64 = -428;

	t64 = (x257<=(x258&(x259<x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = INT32_MIN;
	uint32_t x263 = UINT32_MAX;
	static int32_t x264 = -40;
	volatile int32_t t65 = -1395;

	t65 = (x261<=(x262&(x263<x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = -412;
	static int32_t x266 = -10;
	volatile int16_t x267 = -1;
	uint32_t x268 = 29U;
	volatile int32_t t66 = 1316;

	t66 = (x265<=(x266&(x267<x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	int32_t x271 = -1;
	static uint16_t x272 = UINT16_MAX;
	int32_t t67 = 26096;

	t67 = (x269<=(x270&(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 20931035777377LL;
	int8_t x274 = -1;
	int16_t x275 = INT16_MIN;
	int32_t t68 = 2188;

	t68 = (x273<=(x274&(x275<x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x278 = INT32_MIN;
	static int64_t x279 = INT64_MIN;
	static int16_t x280 = INT16_MIN;
	int32_t t69 = 480;

	t69 = (x277<=(x278&(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = 1159U;
	uint32_t x282 = 868476295U;
	int32_t x283 = -1;
	int32_t t70 = -15044158;

	t70 = (x281<=(x282&(x283<x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x287 = INT64_MIN;
	int16_t x288 = INT16_MAX;
	int32_t t71 = -788;

	t71 = (x285<=(x286&(x287<x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = INT32_MIN;
	static uint8_t x290 = UINT8_MAX;
	static volatile int64_t x291 = INT64_MIN;
	int8_t x292 = 1;
	int32_t t72 = 96;

	t72 = (x289<=(x290&(x291<x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x293 = 4544U;
	volatile uint32_t x294 = UINT32_MAX;
	int8_t x295 = 15;
	static int32_t t73 = -9362654;

	t73 = (x293<=(x294&(x295<x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MAX;
	volatile int8_t x298 = -10;
	static int64_t x299 = INT64_MIN;
	int8_t x300 = -11;
	int32_t t74 = -25105979;

	t74 = (x297<=(x298&(x299<x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	int8_t x302 = 1;
	int64_t x303 = -1LL;
	volatile int32_t x304 = INT32_MIN;
	int32_t t75 = 5733;

	t75 = (x301<=(x302&(x303<x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	uint64_t x306 = UINT64_MAX;
	static int8_t x307 = INT8_MIN;
	int8_t x308 = -7;

	t76 = (x305<=(x306&(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	uint16_t x310 = 2U;
	uint64_t x311 = 8490139227850LLU;
	static int8_t x312 = 4;
	static int32_t t77 = -12650;

	t77 = (x309<=(x310&(x311<x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x314 = INT32_MIN;
	int32_t x316 = -2978;
	static int32_t t78 = -4;

	t78 = (x313<=(x314&(x315<x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x317 = 0U;
	static uint16_t x318 = UINT16_MAX;
	int8_t x319 = -1;
	int8_t x320 = -20;
	volatile int32_t t79 = 1497;

	t79 = (x317<=(x318&(x319<x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 5U;
	uint64_t x322 = UINT64_MAX;
	int64_t x323 = INT64_MIN;
	volatile int32_t x324 = 109634;

	t80 = (x321<=(x322&(x323<x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	int8_t x327 = INT8_MIN;
	static int32_t t81 = -93;

	t81 = (x325<=(x326&(x327<x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = 1;
	volatile int64_t x330 = -1LL;
	int32_t x331 = INT32_MIN;
	uint16_t x332 = 10158U;
	static int32_t t82 = 7108317;

	t82 = (x329<=(x330&(x331<x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 950U;
	static int32_t x334 = INT32_MAX;
	uint32_t x335 = UINT32_MAX;
	volatile uint64_t x336 = 70248600958465737LLU;

	t83 = (x333<=(x334&(x335<x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x337 = 219U;
	int8_t x338 = INT8_MIN;
	int32_t x339 = INT32_MIN;
	static int16_t x340 = INT16_MIN;
	static int32_t t84 = 51;

	t84 = (x337<=(x338&(x339<x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 1096177948461050331LL;
	int8_t x342 = INT8_MIN;
	static int32_t x343 = -1667173;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t85 = -36182;

	t85 = (x341<=(x342&(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = INT64_MIN;
	volatile uint64_t x347 = 653585875427433848LLU;
	uint16_t x348 = 2U;
	volatile int32_t t86 = -204423;

	t86 = (x345<=(x346&(x347<x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = -1;
	uint32_t x350 = 402U;
	int64_t x351 = 56414083LL;
	int32_t x352 = INT32_MAX;
	volatile int32_t t87 = 5380345;

	t87 = (x349<=(x350&(x351<x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x353 = 0;
	uint8_t x354 = 9U;
	static volatile int32_t x355 = INT32_MIN;
	int16_t x356 = -7363;

	t88 = (x353<=(x354&(x355<x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x357 = 1657753143U;
	volatile int8_t x358 = INT8_MIN;
	static int8_t x359 = 1;
	static uint8_t x360 = UINT8_MAX;
	volatile int32_t t89 = 35234;

	t89 = (x357<=(x358&(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 11U;
	volatile uint64_t x362 = 90LLU;
	uint64_t x363 = UINT64_MAX;
	int64_t x364 = -1LL;
	int32_t t90 = 28525131;

	t90 = (x361<=(x362&(x363<x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	int16_t x366 = -39;
	volatile uint8_t x367 = UINT8_MAX;
	volatile uint8_t x368 = 9U;
	volatile int32_t t91 = 244;

	t91 = (x365<=(x366&(x367<x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = 6;
	volatile uint64_t x370 = 978399076LLU;
	volatile uint8_t x371 = 33U;
	static uint64_t x372 = 1LLU;
	int32_t t92 = -27145;

	t92 = (x369<=(x370&(x371<x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = 0;
	static int16_t x374 = -522;
	static int8_t x375 = -1;
	uint16_t x376 = 20600U;
	int32_t t93 = 154419687;

	t93 = (x373<=(x374&(x375<x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = INT16_MIN;
	int16_t x378 = INT16_MIN;
	uint16_t x379 = 101U;
	volatile uint64_t x380 = UINT64_MAX;
	int32_t t94 = -7728;

	t94 = (x377<=(x378&(x379<x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 508679775919071LLU;
	uint8_t x382 = UINT8_MAX;
	uint32_t x383 = UINT32_MAX;
	int8_t x384 = 0;

	t95 = (x381<=(x382&(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 0;
	int8_t x386 = 0;
	int32_t x388 = 610888;
	int32_t t96 = 3151;

	t96 = (x385<=(x386&(x387<x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x390 = UINT32_MAX;
	int64_t x391 = INT64_MIN;
	static volatile int32_t t97 = -12;

	t97 = (x389<=(x390&(x391<x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	int32_t x394 = INT32_MIN;
	static uint64_t x395 = UINT64_MAX;
	int64_t x396 = -1LL;
	int32_t t98 = 1;

	t98 = (x393<=(x394&(x395<x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 946696946LLU;
	int32_t x399 = 3602;
	volatile int32_t t99 = -115814;

	t99 = (x397<=(x398&(x399<x400)));

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

