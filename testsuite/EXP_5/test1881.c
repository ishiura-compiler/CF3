#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t2 = 486464521;
static volatile int32_t x27 = -1;
int16_t x30 = -1698;
static volatile uint16_t x37 = 7U;
static uint16_t x41 = 117U;
static int8_t x45 = INT8_MAX;
static uint64_t x46 = 109860046718243720LLU;
uint8_t x48 = 3U;
uint16_t x51 = UINT16_MAX;
uint8_t x54 = 0U;
int8_t x55 = INT8_MIN;
int32_t x59 = INT32_MIN;
volatile int16_t x62 = 7887;
static int16_t x64 = INT16_MIN;
static int32_t t14 = 548146;
volatile int32_t x69 = -190;
volatile int32_t t16 = 23519988;
int8_t x77 = INT8_MIN;
static int32_t x78 = INT32_MIN;
static uint64_t x84 = 251795LLU;
volatile int64_t x86 = -1086081900LL;
static volatile int32_t t20 = 2392525;
volatile uint64_t x89 = UINT64_MAX;
volatile int32_t x93 = -2506;
static int16_t x96 = -1;
int32_t x98 = -1;
static int64_t x102 = -10LL;
uint32_t x107 = 61620U;
int8_t x112 = INT8_MIN;
int64_t x115 = INT64_MIN;
static volatile int32_t t27 = 2186;
volatile int32_t t29 = -10468517;
volatile int16_t x129 = -420;
static int32_t x132 = -1;
int32_t x137 = INT32_MIN;
volatile int32_t t34 = 316;
uint64_t x148 = 97407LLU;
uint64_t x152 = 57319743LLU;
int32_t t36 = 8028025;
int16_t x153 = INT16_MIN;
int16_t x154 = -1;
uint32_t x155 = 6796U;
int32_t t38 = 33;
int64_t x164 = INT64_MAX;
int8_t x166 = -1;
static int32_t t41 = 446831006;
volatile int16_t x181 = INT16_MIN;
volatile int8_t x185 = 0;
int8_t x193 = INT8_MIN;
static int64_t x197 = INT64_MIN;
int32_t x199 = 2535;
int8_t x200 = -1;
uint32_t x205 = 741721U;
int32_t t50 = -1;
int8_t x215 = INT8_MIN;
static volatile int32_t t51 = 1;
static uint64_t x221 = 25145238050911LLU;
int16_t x225 = -1;
int8_t x226 = INT8_MAX;
uint64_t x229 = UINT64_MAX;
uint32_t x230 = UINT32_MAX;
int16_t x231 = 204;
uint16_t x233 = 3238U;
int32_t t56 = -3679397;
int64_t x237 = INT64_MAX;
uint64_t x247 = UINT64_MAX;
int8_t x248 = INT8_MIN;
volatile int8_t x249 = 0;
uint64_t x252 = 4233353255LLU;
volatile int8_t x257 = -1;
int32_t x266 = INT32_MIN;
int8_t x270 = INT8_MAX;
static uint32_t x272 = 1U;
static volatile int32_t t64 = -1;
uint32_t x274 = 2U;
uint64_t x281 = 509008640320628LLU;
static uint16_t x284 = 632U;
int64_t x286 = 3764461LL;
volatile int8_t x289 = INT8_MIN;
int16_t x290 = INT16_MIN;
int8_t x295 = -2;
int64_t x299 = -1LL;
int32_t t71 = 48824638;
uint32_t x309 = 10U;
uint8_t x312 = 7U;
static uint32_t x315 = 1931U;
volatile int32_t t74 = 365997;
volatile int8_t x321 = INT8_MAX;
static uint64_t x324 = 7504140LLU;
uint64_t x330 = 1755230511349480LLU;
int32_t t79 = 216475;
static uint16_t x338 = 17U;
static volatile int32_t t81 = -244;
int8_t x347 = 57;
int8_t x352 = -1;
static int64_t x357 = 73LL;
volatile int16_t x360 = 5;
static uint32_t x368 = 980038875U;
int8_t x374 = INT8_MIN;
uint32_t x387 = 1906U;
volatile int8_t x394 = INT8_MIN;
int32_t t92 = -800481;
static volatile uint16_t x400 = UINT16_MAX;
int32_t x404 = 0;
volatile int64_t x413 = INT64_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile int32_t x2 = INT32_MIN;
	int64_t x3 = INT64_MIN;
	static int16_t x4 = -1;
	volatile int32_t t0 = -97285;

	t0 = (x1<((x2|x3)-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 28715;
	int32_t x6 = INT32_MIN;
	static volatile uint8_t x7 = UINT8_MAX;
	uint8_t x8 = 26U;
	int32_t t1 = 285;

	t1 = (x5<((x6|x7)-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = UINT64_MAX;
	int64_t x10 = -1LL;
	int32_t x11 = INT32_MAX;
	int32_t x12 = -1;

	t2 = (x9<((x10|x11)-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	static int32_t x14 = -6;
	int8_t x15 = INT8_MIN;
	uint8_t x16 = 8U;
	volatile int32_t t3 = 327;

	t3 = (x13<((x14|x15)-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x21 = 1U;
	static uint32_t x22 = 3193496U;
	int64_t x23 = 434510839837773LL;
	volatile int32_t x24 = -1;
	volatile int32_t t4 = 170;

	t4 = (x21<((x22|x23)-x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = 1;
	volatile int16_t x26 = INT16_MIN;
	volatile int8_t x28 = INT8_MIN;
	volatile int32_t t5 = 98028;

	t5 = (x25<((x26|x27)-x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x29 = 12U;
	volatile int32_t x31 = 297666500;
	int16_t x32 = -13116;
	volatile int32_t t6 = 49;

	t6 = (x29<((x30|x31)-x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x33 = INT16_MIN;
	int16_t x34 = -1;
	uint16_t x35 = 43U;
	uint32_t x36 = 506269U;
	volatile int32_t t7 = 55698791;

	t7 = (x33<((x34|x35)-x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x38 = -1;
	int16_t x39 = -1;
	int32_t x40 = -15793107;
	volatile int32_t t8 = 202;

	t8 = (x37<((x38|x39)-x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = INT32_MIN;
	int8_t x43 = -49;
	int64_t x44 = -1LL;
	volatile int32_t t9 = -1931;

	t9 = (x41<((x42|x43)-x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x47 = 11737U;
	int32_t t10 = -61427;

	t10 = (x45<((x46|x47)-x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x49 = -1;
	volatile uint64_t x50 = UINT64_MAX;
	volatile int32_t x52 = -1;
	static volatile int32_t t11 = -48;

	t11 = (x49<((x50|x51)-x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x53 = 3U;
	static uint8_t x56 = 2U;
	int32_t t12 = -1;

	t12 = (x53<((x54|x55)-x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = 12861U;
	int8_t x58 = -2;
	int32_t x60 = -1;
	int32_t t13 = 10062893;

	t13 = (x57<((x58|x59)-x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = -1;
	int8_t x63 = 12;

	t14 = (x61<((x62|x63)-x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = -529199074473218LL;
	uint64_t x66 = 347000846824274LLU;
	static volatile uint32_t x67 = UINT32_MAX;
	static uint16_t x68 = 10602U;
	volatile int32_t t15 = 0;

	t15 = (x65<((x66|x67)-x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x70 = -1;
	static int16_t x71 = INT16_MIN;
	int64_t x72 = -21562LL;

	t16 = (x69<((x70|x71)-x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MAX;
	int8_t x74 = INT8_MIN;
	uint64_t x75 = 2097577533915330LLU;
	uint32_t x76 = UINT32_MAX;
	volatile int32_t t17 = 1807;

	t17 = (x73<((x74|x75)-x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x79 = UINT8_MAX;
	volatile int8_t x80 = INT8_MIN;
	int32_t t18 = -221018016;

	t18 = (x77<((x78|x79)-x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x81 = 98054U;
	uint8_t x82 = 52U;
	uint32_t x83 = UINT32_MAX;
	volatile int32_t t19 = 30;

	t19 = (x81<((x82|x83)-x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MAX;
	volatile int32_t x87 = 11585350;
	int8_t x88 = -1;

	t20 = (x85<((x86|x87)-x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x90 = 1162LL;
	volatile int8_t x91 = INT8_MIN;
	volatile int8_t x92 = -7;
	int32_t t21 = -14;

	t21 = (x89<((x90|x91)-x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x94 = 1U;
	static volatile int32_t x95 = -115;
	volatile int32_t t22 = -87;

	t22 = (x93<((x94|x95)-x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x97 = INT16_MIN;
	uint16_t x99 = 12U;
	int64_t x100 = -14563LL;
	int32_t t23 = -1;

	t23 = (x97<((x98|x99)-x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = INT32_MIN;
	uint8_t x103 = 0U;
	uint64_t x104 = 183809397LLU;
	volatile int32_t t24 = 1;

	t24 = (x101<((x102|x103)-x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = 3;
	uint16_t x106 = UINT16_MAX;
	int8_t x108 = INT8_MIN;
	volatile int32_t t25 = -4166051;

	t25 = (x105<((x106|x107)-x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = -1;
	static int16_t x110 = INT16_MIN;
	static int32_t x111 = INT32_MIN;
	static int32_t t26 = 6;

	t26 = (x109<((x110|x111)-x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	int16_t x114 = -1;
	int8_t x116 = -1;

	t27 = (x113<((x114|x115)-x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x117 = 60571233U;
	static int32_t x118 = INT32_MIN;
	uint64_t x119 = UINT64_MAX;
	static int64_t x120 = -1LL;
	volatile int32_t t28 = 68;

	t28 = (x117<((x118|x119)-x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x121 = INT16_MIN;
	static int64_t x122 = -4770089932656LL;
	int16_t x123 = 3575;
	int16_t x124 = 17;

	t29 = (x121<((x122|x123)-x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = UINT64_MAX;
	uint16_t x126 = 12U;
	int32_t x127 = -1;
	uint64_t x128 = 9263920LLU;
	static int32_t t30 = 78517;

	t30 = (x125<((x126|x127)-x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x130 = -1;
	volatile int64_t x131 = -1350985275829767LL;
	volatile int32_t t31 = -699;

	t31 = (x129<((x130|x131)-x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MAX;
	volatile int8_t x134 = INT8_MIN;
	static uint64_t x135 = 60190LLU;
	int16_t x136 = INT16_MIN;
	volatile int32_t t32 = -125;

	t32 = (x133<((x134|x135)-x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x138 = INT16_MAX;
	volatile uint64_t x139 = 2818871LLU;
	static int64_t x140 = INT64_MIN;
	int32_t t33 = -1;

	t33 = (x137<((x138|x139)-x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x141 = UINT32_MAX;
	int64_t x142 = -1LL;
	int32_t x143 = -465859;
	static uint32_t x144 = 16622067U;

	t34 = (x141<((x142|x143)-x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MAX;
	volatile uint16_t x146 = UINT16_MAX;
	uint64_t x147 = UINT64_MAX;
	volatile int32_t t35 = 9;

	t35 = (x145<((x146|x147)-x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x149 = -1462;
	int32_t x150 = INT32_MAX;
	int8_t x151 = -1;

	t36 = (x149<((x150|x151)-x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x156 = 676LLU;
	int32_t t37 = 6989;

	t37 = (x153<((x154|x155)-x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x157 = INT64_MIN;
	static uint8_t x158 = 31U;
	int16_t x159 = 708;
	int16_t x160 = INT16_MAX;

	t38 = (x157<((x158|x159)-x160));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = 0;
	uint32_t x162 = 32581212U;
	int64_t x163 = 83529062LL;
	static int32_t t39 = -2;

	t39 = (x161<((x162|x163)-x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x165 = 0U;
	int64_t x167 = -1LL;
	int64_t x168 = INT64_MIN;
	volatile int32_t t40 = -7433;

	t40 = (x165<((x166|x167)-x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = -3790707;
	uint64_t x170 = 362517LLU;
	static int64_t x171 = INT64_MAX;
	uint16_t x172 = 156U;

	t41 = (x169<((x170|x171)-x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x173 = 81U;
	static int64_t x174 = INT64_MIN;
	int8_t x175 = INT8_MIN;
	int64_t x176 = -1LL;
	static volatile int32_t t42 = -1;

	t42 = (x173<((x174|x175)-x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x182 = 1U;
	uint8_t x183 = UINT8_MAX;
	static int8_t x184 = -1;
	int32_t t43 = -20717522;

	t43 = (x181<((x182|x183)-x184));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x186 = INT64_MIN;
	static int32_t x187 = -908;
	int8_t x188 = INT8_MIN;
	int32_t t44 = -5568;

	t44 = (x185<((x186|x187)-x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x189 = 3650U;
	uint16_t x190 = 6U;
	uint16_t x191 = UINT16_MAX;
	uint64_t x192 = 67LLU;
	static volatile int32_t t45 = 497512;

	t45 = (x189<((x190|x191)-x192));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x194 = 3320;
	uint16_t x195 = 45U;
	int64_t x196 = 343775431666233LL;
	static volatile int32_t t46 = -1;

	t46 = (x193<((x194|x195)-x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x198 = 2U;
	static int32_t t47 = -395;

	t47 = (x197<((x198|x199)-x200));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x201 = 11;
	static uint64_t x202 = 28820176031LLU;
	int16_t x203 = -1;
	uint16_t x204 = 31U;
	int32_t t48 = 31;

	t48 = (x201<((x202|x203)-x204));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x206 = -1LL;
	volatile int64_t x207 = INT64_MAX;
	volatile int32_t x208 = -1;
	volatile int32_t t49 = 5;

	t49 = (x205<((x206|x207)-x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = -1;
	volatile int64_t x210 = INT64_MAX;
	int64_t x211 = INT64_MIN;
	int16_t x212 = INT16_MAX;

	t50 = (x209<((x210|x211)-x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = 530559063LLU;
	uint32_t x214 = 14465U;
	int32_t x216 = INT32_MIN;

	t51 = (x213<((x214|x215)-x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x217 = -1;
	volatile uint32_t x218 = 1007658510U;
	static int32_t x219 = 515;
	int8_t x220 = INT8_MAX;
	int32_t t52 = 115;

	t52 = (x217<((x218|x219)-x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x222 = INT32_MAX;
	static int8_t x223 = -6;
	volatile uint64_t x224 = 293299747852LLU;
	static volatile int32_t t53 = 17738303;

	t53 = (x221<((x222|x223)-x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x227 = INT8_MIN;
	static uint32_t x228 = 6U;
	static int32_t t54 = 79185;

	t54 = (x225<((x226|x227)-x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x232 = INT16_MAX;
	volatile int32_t t55 = -1;

	t55 = (x229<((x230|x231)-x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x234 = -948047816LL;
	volatile int32_t x235 = INT32_MIN;
	volatile int32_t x236 = -195608;

	t56 = (x233<((x234|x235)-x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x238 = 4709;
	uint32_t x239 = 18497U;
	int64_t x240 = -24352242LL;
	volatile int32_t t57 = -1110001;

	t57 = (x237<((x238|x239)-x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = INT64_MAX;
	int16_t x246 = 966;
	int32_t t58 = 133575164;

	t58 = (x245<((x246|x247)-x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x250 = INT8_MIN;
	static int32_t x251 = 4013273;
	static volatile int32_t t59 = -233186;

	t59 = (x249<((x250|x251)-x252));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x253 = UINT64_MAX;
	uint64_t x254 = UINT64_MAX;
	static int64_t x255 = -1LL;
	uint64_t x256 = UINT64_MAX;
	int32_t t60 = 204361869;

	t60 = (x253<((x254|x255)-x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x258 = 144LLU;
	static uint64_t x259 = 28902775972651954LLU;
	int16_t x260 = INT16_MIN;
	volatile int32_t t61 = 488;

	t61 = (x257<((x258|x259)-x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x261 = 24U;
	static uint64_t x262 = UINT64_MAX;
	static uint64_t x263 = 139007718111242321LLU;
	int64_t x264 = 0LL;
	volatile int32_t t62 = -3604;

	t62 = (x261<((x262|x263)-x264));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x265 = 80U;
	int32_t x267 = 172324236;
	volatile uint8_t x268 = 41U;
	volatile int32_t t63 = 15916024;

	t63 = (x265<((x266|x267)-x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = 681862LL;
	uint8_t x271 = 1U;

	t64 = (x269<((x270|x271)-x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = -3;
	static uint32_t x275 = 24327U;
	uint64_t x276 = 45968522LLU;
	static volatile int32_t t65 = -898064;

	t65 = (x273<((x274|x275)-x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = INT8_MIN;
	int16_t x278 = INT16_MIN;
	static volatile int8_t x279 = 1;
	volatile int16_t x280 = INT16_MAX;
	int32_t t66 = -12377552;

	t66 = (x277<((x278|x279)-x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x282 = 3789;
	volatile int16_t x283 = -1;
	volatile int32_t t67 = 0;

	t67 = (x281<((x282|x283)-x284));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x285 = UINT16_MAX;
	int16_t x287 = -1;
	uint32_t x288 = 4552419U;
	int32_t t68 = 49;

	t68 = (x285<((x286|x287)-x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x291 = 59;
	uint8_t x292 = UINT8_MAX;
	int32_t t69 = 1616;

	t69 = (x289<((x290|x291)-x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = 60434258LL;
	int64_t x294 = INT64_MAX;
	int32_t x296 = INT32_MIN;
	int32_t t70 = -9;

	t70 = (x293<((x294|x295)-x296));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x297 = 6LL;
	uint16_t x298 = UINT16_MAX;
	int8_t x300 = INT8_MIN;

	t71 = (x297<((x298|x299)-x300));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = 20644065;
	static uint8_t x302 = 0U;
	static uint32_t x303 = UINT32_MAX;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t72 = -11668262;

	t72 = (x301<((x302|x303)-x304));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x310 = -1LL;
	int64_t x311 = INT64_MAX;
	static volatile int32_t t73 = -803253140;

	t73 = (x309<((x310|x311)-x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x313 = INT16_MAX;
	uint64_t x314 = 622489864LLU;
	volatile uint16_t x316 = UINT16_MAX;

	t74 = (x313<((x314|x315)-x316));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x317 = 5051946029LLU;
	uint16_t x318 = 36U;
	static int8_t x319 = INT8_MIN;
	volatile uint32_t x320 = UINT32_MAX;
	int32_t t75 = -2372;

	t75 = (x317<((x318|x319)-x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x322 = INT64_MIN;
	int16_t x323 = -1;
	int32_t t76 = 32151537;

	t76 = (x321<((x322|x323)-x324));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = -3;
	int64_t x326 = -1LL;
	volatile int16_t x327 = INT16_MIN;
	int8_t x328 = -1;
	static volatile int32_t t77 = 1;

	t77 = (x325<((x326|x327)-x328));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x329 = UINT32_MAX;
	int8_t x331 = -1;
	int32_t x332 = INT32_MIN;
	static volatile int32_t t78 = 3;

	t78 = (x329<((x330|x331)-x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x333 = INT8_MIN;
	uint16_t x334 = 6U;
	volatile int8_t x335 = INT8_MIN;
	int16_t x336 = -1;

	t79 = (x333<((x334|x335)-x336));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x337 = INT64_MAX;
	volatile uint64_t x339 = 67169234980094LLU;
	int32_t x340 = 694199;
	volatile int32_t t80 = 51089;

	t80 = (x337<((x338|x339)-x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = INT32_MAX;
	int64_t x342 = 2453054LL;
	uint16_t x343 = UINT16_MAX;
	static int8_t x344 = INT8_MIN;

	t81 = (x341<((x342|x343)-x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = INT64_MIN;
	int8_t x346 = INT8_MIN;
	int32_t x348 = INT32_MIN;
	int32_t t82 = 61433850;

	t82 = (x345<((x346|x347)-x348));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = INT64_MIN;
	int32_t x350 = INT32_MIN;
	volatile int16_t x351 = INT16_MIN;
	volatile int32_t t83 = 3767097;

	t83 = (x349<((x350|x351)-x352));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x353 = 4U;
	int8_t x354 = INT8_MIN;
	volatile int32_t x355 = -1;
	int16_t x356 = -1;
	int32_t t84 = -1;

	t84 = (x353<((x354|x355)-x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x358 = -194;
	int32_t x359 = INT32_MAX;
	volatile int32_t t85 = 10378;

	t85 = (x357<((x358|x359)-x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x365 = -725848;
	uint16_t x366 = 0U;
	uint16_t x367 = 71U;
	volatile int32_t t86 = 973367;

	t86 = (x365<((x366|x367)-x368));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x369 = 8U;
	int64_t x370 = INT64_MIN;
	static int64_t x371 = INT64_MIN;
	volatile uint64_t x372 = UINT64_MAX;
	volatile int32_t t87 = 940;

	t87 = (x369<((x370|x371)-x372));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x373 = INT32_MIN;
	uint64_t x375 = 196LLU;
	int64_t x376 = INT64_MAX;
	static volatile int32_t t88 = 444201032;

	t88 = (x373<((x374|x375)-x376));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x381 = 115517662803898736LLU;
	int64_t x382 = 400LL;
	int8_t x383 = -1;
	int64_t x384 = INT64_MIN;
	volatile int32_t t89 = -83;

	t89 = (x381<((x382|x383)-x384));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x385 = 0U;
	int64_t x386 = INT64_MIN;
	uint8_t x388 = 15U;
	static volatile int32_t t90 = 76239805;

	t90 = (x385<((x386|x387)-x388));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x389 = -1;
	uint8_t x390 = UINT8_MAX;
	uint8_t x391 = UINT8_MAX;
	int8_t x392 = INT8_MAX;
	static volatile int32_t t91 = -44;

	t91 = (x389<((x390|x391)-x392));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x393 = 2;
	int64_t x395 = INT64_MIN;
	int32_t x396 = INT32_MAX;

	t92 = (x393<((x394|x395)-x396));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x397 = UINT32_MAX;
	uint8_t x398 = 50U;
	static int16_t x399 = 0;
	int32_t t93 = 1403477;

	t93 = (x397<((x398|x399)-x400));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x401 = INT64_MAX;
	static uint32_t x402 = 7860066U;
	static int64_t x403 = 1989744LL;
	int32_t t94 = 17730123;

	t94 = (x401<((x402|x403)-x404));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x405 = INT32_MIN;
	int16_t x406 = INT16_MAX;
	int32_t x407 = INT32_MIN;
	int32_t x408 = -1953054;
	int32_t t95 = 692212;

	t95 = (x405<((x406|x407)-x408));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x409 = 105818551;
	static int8_t x410 = INT8_MIN;
	static uint16_t x411 = 19U;
	uint16_t x412 = 99U;
	static volatile int32_t t96 = -25904037;

	t96 = (x409<((x410|x411)-x412));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x414 = 1423363166984LL;
	uint8_t x415 = 1U;
	int32_t x416 = INT32_MAX;
	volatile int32_t t97 = -57353616;

	t97 = (x413<((x414|x415)-x416));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x417 = 41;
	uint32_t x418 = 500U;
	uint64_t x419 = UINT64_MAX;
	int16_t x420 = -150;
	volatile int32_t t98 = 399472213;

	t98 = (x417<((x418|x419)-x420));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x421 = UINT32_MAX;
	uint8_t x422 = UINT8_MAX;
	static int8_t x423 = 0;
	int8_t x424 = INT8_MAX;
	int32_t t99 = 4;

	t99 = (x421<((x422|x423)-x424));

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

