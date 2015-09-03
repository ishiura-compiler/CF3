#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = -1LL;
volatile int32_t t0 = 12634;
volatile int16_t x5 = -1;
int64_t x6 = -770093724637343LL;
volatile int32_t x7 = INT32_MAX;
volatile int32_t x14 = 1144;
int32_t t4 = -509;
volatile int8_t x22 = INT8_MIN;
int16_t x32 = -1;
int16_t x33 = INT16_MAX;
int16_t x34 = INT16_MIN;
int16_t x39 = 1;
int32_t t9 = -2700529;
uint32_t x51 = 369U;
int8_t x62 = INT8_MIN;
static int16_t x63 = 1;
volatile uint32_t x64 = 406U;
int64_t x65 = 10042872921936LL;
volatile int32_t t19 = 1206430;
uint16_t x82 = 260U;
uint64_t x83 = 102861926LLU;
int32_t t22 = -17678;
static int32_t t24 = 775392;
volatile uint16_t x103 = 113U;
static uint8_t x104 = UINT8_MAX;
static int16_t x110 = 211;
static volatile int64_t x112 = INT64_MAX;
volatile int32_t t27 = 3;
int64_t x114 = INT64_MIN;
int32_t x126 = INT32_MAX;
static volatile int32_t t32 = -67212734;
uint16_t x138 = 759U;
uint64_t x146 = 52174200272585608LLU;
static int16_t x147 = INT16_MIN;
int32_t t38 = 1052083662;
volatile int32_t x160 = INT32_MIN;
uint64_t x172 = 25436504034283LLU;
volatile int32_t t42 = -50;
int32_t x179 = INT32_MIN;
int16_t x180 = INT16_MIN;
static volatile uint32_t x181 = 1U;
int64_t x188 = INT64_MIN;
int16_t x190 = INT16_MIN;
static int64_t x194 = INT64_MIN;
int64_t x195 = INT64_MAX;
volatile int64_t x199 = 61607028510379LL;
volatile int32_t x204 = 1;
int32_t x206 = -1;
static int32_t x207 = INT32_MIN;
int8_t x209 = INT8_MIN;
int64_t x211 = INT64_MIN;
int16_t x215 = INT16_MAX;
int8_t x216 = -2;
int32_t t54 = 58950;
volatile int8_t x221 = INT8_MIN;
static uint8_t x222 = 14U;
static uint64_t x224 = 5949362179LLU;
int32_t t55 = -30080;
int64_t x226 = -1LL;
volatile int32_t t56 = -3234;
uint64_t x232 = UINT64_MAX;
int32_t t58 = -121;
static int32_t t59 = 1793690;
uint64_t x245 = 1176015051504151164LLU;
volatile uint64_t x246 = 337874181361LLU;
volatile uint64_t x249 = UINT64_MAX;
int16_t x250 = -192;
volatile int32_t t62 = 3195525;
uint8_t x253 = 79U;
uint8_t x256 = UINT8_MAX;
static volatile int32_t t63 = 339376283;
uint8_t x263 = UINT8_MAX;
static int32_t x264 = INT32_MIN;
volatile uint64_t x272 = UINT64_MAX;
volatile int32_t t67 = -2;
static uint8_t x274 = 2U;
volatile uint16_t x276 = UINT16_MAX;
int32_t x278 = INT32_MAX;
int64_t x280 = 2500LL;
int32_t t70 = 3333;
int16_t x289 = 6964;
uint8_t x290 = UINT8_MAX;
static volatile uint64_t x292 = UINT64_MAX;
int8_t x302 = -1;
int32_t x309 = INT32_MIN;
static volatile int32_t t77 = 61285;
volatile int64_t x314 = INT64_MIN;
int16_t x323 = 1;
volatile uint8_t x327 = UINT8_MAX;
int8_t x344 = INT8_MIN;
static volatile int16_t x363 = -1;
volatile int32_t x367 = INT32_MIN;
int8_t x371 = INT8_MAX;
int8_t x373 = -1;
int8_t x377 = INT8_MAX;
static volatile int64_t x381 = 643951LL;
uint64_t x384 = 2LLU;
uint8_t x389 = 3U;
uint8_t x391 = UINT8_MAX;
int8_t x394 = 0;


void f0(void) {
	volatile uint8_t x1 = 31U;
	int8_t x2 = INT8_MIN;
	int16_t x4 = -1;

	t0 = (x1<=(x2&(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x8 = INT8_MIN;
	int32_t t1 = -90;

	t1 = (x5<=(x6&(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	static int64_t x10 = 5554LL;
	volatile uint64_t x11 = UINT64_MAX;
	uint64_t x12 = 76713LLU;
	volatile int32_t t2 = 4972;

	t2 = (x9<=(x10&(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	static int16_t x15 = INT16_MAX;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -6171988;

	t3 = (x13<=(x14&(x15^x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -7;
	static int64_t x18 = INT64_MAX;
	int8_t x19 = -1;
	uint64_t x20 = 432449LLU;

	t4 = (x17<=(x18&(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -6;
	uint64_t x23 = UINT64_MAX;
	int8_t x24 = 1;
	static volatile int32_t t5 = -1;

	t5 = (x21<=(x22&(x23^x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -2465;
	static uint32_t x26 = UINT32_MAX;
	int64_t x27 = INT64_MAX;
	uint32_t x28 = 30U;
	volatile int32_t t6 = 954;

	t6 = (x25<=(x26&(x27^x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = 31363132971561LL;
	volatile uint64_t x30 = 6LLU;
	uint16_t x31 = 31696U;
	volatile int32_t t7 = -5069972;

	t7 = (x29<=(x30&(x31^x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x35 = INT8_MIN;
	int16_t x36 = INT16_MAX;
	volatile int32_t t8 = -436;

	t8 = (x33<=(x34&(x35^x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	static uint64_t x38 = 899140215485LLU;
	uint64_t x40 = 2LLU;

	t9 = (x37<=(x38&(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -90490213;
	volatile int16_t x42 = -2;
	int16_t x43 = INT16_MIN;
	int32_t x44 = INT32_MIN;
	int32_t t10 = 15;

	t10 = (x41<=(x42&(x43^x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 916415LLU;
	uint16_t x46 = UINT16_MAX;
	int64_t x47 = -1LL;
	int64_t x48 = INT64_MAX;
	int32_t t11 = 827617;

	t11 = (x45<=(x46&(x47^x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 244U;
	int16_t x50 = INT16_MIN;
	uint16_t x52 = 3143U;
	int32_t t12 = -45;

	t12 = (x49<=(x50&(x51^x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MAX;
	uint16_t x54 = 3410U;
	uint16_t x55 = UINT16_MAX;
	int8_t x56 = 5;
	int32_t t13 = 493;

	t13 = (x53<=(x54&(x55^x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = 17;
	int64_t x58 = INT64_MIN;
	int8_t x59 = INT8_MIN;
	static int64_t x60 = -1LL;
	volatile int32_t t14 = -4;

	t14 = (x57<=(x58&(x59^x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -577828LL;
	int32_t t15 = -2981;

	t15 = (x61<=(x62&(x63^x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = -1;
	static volatile int64_t x67 = INT64_MAX;
	volatile int64_t x68 = 3250589305LL;
	volatile int32_t t16 = 50;

	t16 = (x65<=(x66&(x67^x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = -5;
	uint64_t x70 = 651802744773LLU;
	int8_t x71 = INT8_MAX;
	int16_t x72 = INT16_MIN;
	static volatile int32_t t17 = -1;

	t17 = (x69<=(x70&(x71^x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -367654373;
	int64_t x74 = 447844395256198904LL;
	int64_t x75 = 42985576LL;
	uint32_t x76 = 1657282U;
	volatile int32_t t18 = 44132444;

	t18 = (x73<=(x74&(x75^x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 22U;
	static int8_t x78 = -1;
	int32_t x79 = -1;
	int64_t x80 = -747105124993LL;

	t19 = (x77<=(x78&(x79^x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x81 = INT8_MAX;
	uint8_t x84 = UINT8_MAX;
	static volatile int32_t t20 = -1810509;

	t20 = (x81<=(x82&(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int16_t x86 = -1;
	uint8_t x87 = 26U;
	volatile int16_t x88 = -109;
	static volatile int32_t t21 = -626838;

	t21 = (x85<=(x86&(x87^x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 4653140U;
	static uint8_t x90 = 2U;
	int32_t x91 = INT32_MAX;
	int8_t x92 = 61;

	t22 = (x89<=(x90&(x91^x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int8_t x94 = INT8_MIN;
	uint16_t x95 = UINT16_MAX;
	int64_t x96 = -1LL;
	volatile int32_t t23 = 5683;

	t23 = (x93<=(x94&(x95^x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int64_t x98 = INT64_MAX;
	int32_t x99 = -1;
	int64_t x100 = 319195LL;

	t24 = (x97<=(x98&(x99^x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -2503;
	static int16_t x102 = INT16_MAX;
	int32_t t25 = 328;

	t25 = (x101<=(x102&(x103^x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x105 = 260U;
	volatile uint16_t x106 = 2577U;
	int64_t x107 = INT64_MIN;
	volatile uint16_t x108 = UINT16_MAX;
	int32_t t26 = -2;

	t26 = (x105<=(x106&(x107^x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = -1;
	uint16_t x111 = 27U;

	t27 = (x109<=(x110&(x111^x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 1;
	int32_t x115 = -1;
	int16_t x116 = -1;
	volatile int32_t t28 = 961964;

	t28 = (x113<=(x114&(x115^x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 14410583609489667LLU;
	int64_t x118 = INT64_MIN;
	volatile int64_t x119 = -1LL;
	volatile int16_t x120 = 7471;
	int32_t t29 = -992073;

	t29 = (x117<=(x118&(x119^x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	static int32_t x122 = -1329383;
	volatile int32_t x123 = INT32_MAX;
	int64_t x124 = -1818384916251LL;
	volatile int32_t t30 = 125573010;

	t30 = (x121<=(x122&(x123^x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 0;
	int64_t x127 = 3055067209LL;
	static uint64_t x128 = 15976877615628426LLU;
	int32_t t31 = 94;

	t31 = (x125<=(x126&(x127^x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = INT16_MIN;
	int8_t x130 = -1;
	int64_t x131 = -1LL;
	int8_t x132 = INT8_MIN;

	t32 = (x129<=(x130&(x131^x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int8_t x134 = INT8_MIN;
	uint64_t x135 = 31561569LLU;
	volatile uint16_t x136 = 2401U;
	static volatile int32_t t33 = 2;

	t33 = (x133<=(x134&(x135^x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x137 = -1;
	static volatile int32_t x139 = INT32_MIN;
	volatile int8_t x140 = -4;
	static int32_t t34 = -31838843;

	t34 = (x137<=(x138&(x139^x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	uint64_t x142 = 315761803116897LLU;
	int16_t x143 = 1044;
	static uint16_t x144 = 11U;
	volatile int32_t t35 = -7517;

	t35 = (x141<=(x142&(x143^x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = INT8_MIN;
	int32_t x148 = INT32_MIN;
	int32_t t36 = 0;

	t36 = (x145<=(x146&(x147^x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MIN;
	volatile uint32_t x150 = UINT32_MAX;
	static int64_t x151 = -1LL;
	uint8_t x152 = 1U;
	volatile int32_t t37 = -159341616;

	t37 = (x149<=(x150&(x151^x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	volatile int16_t x154 = INT16_MIN;
	uint8_t x155 = UINT8_MAX;
	int32_t x156 = -483645;

	t38 = (x153<=(x154&(x155^x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 5788;
	uint8_t x158 = 2U;
	volatile uint32_t x159 = 9U;
	volatile int32_t t39 = -481708;

	t39 = (x157<=(x158&(x159^x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	int64_t x162 = INT64_MIN;
	volatile int32_t x163 = INT32_MIN;
	volatile uint8_t x164 = UINT8_MAX;
	static int32_t t40 = -238346828;

	t40 = (x161<=(x162&(x163^x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	volatile uint32_t x166 = UINT32_MAX;
	static int8_t x167 = -1;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = 1;

	t41 = (x165<=(x166&(x167^x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -19059;
	int16_t x170 = 28;
	static uint16_t x171 = 305U;

	t42 = (x169<=(x170&(x171^x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 48521LL;
	int64_t x174 = 832261230995773LL;
	volatile uint32_t x175 = 8070U;
	int8_t x176 = INT8_MAX;
	volatile int32_t t43 = -1634;

	t43 = (x173<=(x174&(x175^x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	int32_t x178 = 230745;
	int32_t t44 = -35755047;

	t44 = (x177<=(x178&(x179^x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = INT8_MIN;
	int32_t x183 = INT32_MIN;
	static int16_t x184 = INT16_MIN;
	int32_t t45 = -129;

	t45 = (x181<=(x182&(x183^x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 317173U;
	uint32_t x186 = 268493194U;
	volatile int16_t x187 = INT16_MAX;
	volatile int32_t t46 = 114740663;

	t46 = (x185<=(x186&(x187^x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x189 = 266015308U;
	int64_t x191 = INT64_MAX;
	static volatile int32_t x192 = INT32_MIN;
	int32_t t47 = -280464;

	t47 = (x189<=(x190&(x191^x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	volatile int64_t x196 = 2003290861587LL;
	volatile int32_t t48 = -1;

	t48 = (x193<=(x194&(x195^x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = INT16_MIN;
	int32_t x198 = 466397;
	volatile int8_t x200 = -1;
	int32_t t49 = 10262;

	t49 = (x197<=(x198&(x199^x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	int16_t x202 = INT16_MIN;
	int16_t x203 = 33;
	volatile int32_t t50 = -12096010;

	t50 = (x201<=(x202&(x203^x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 307U;
	int32_t x208 = 16;
	int32_t t51 = 250275712;

	t51 = (x205<=(x206&(x207^x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = INT32_MAX;
	static volatile int16_t x212 = -1;
	int32_t t52 = -9295620;

	t52 = (x209<=(x210&(x211^x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 4829976232189785128LLU;
	uint32_t x214 = 1206200U;
	volatile int32_t t53 = 878;

	t53 = (x213<=(x214&(x215^x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 1360679546415732LLU;
	int8_t x218 = INT8_MAX;
	int32_t x219 = -17363955;
	int64_t x220 = INT64_MIN;

	t54 = (x217<=(x218&(x219^x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x223 = INT8_MIN;

	t55 = (x221<=(x222&(x223^x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	int16_t x227 = -24;
	static volatile int32_t x228 = INT32_MIN;

	t56 = (x225<=(x226&(x227^x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	int32_t x230 = INT32_MIN;
	int8_t x231 = -1;
	volatile int32_t t57 = 4178796;

	t57 = (x229<=(x230&(x231^x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x233 = 57955991LLU;
	int32_t x234 = INT32_MIN;
	int64_t x235 = INT64_MIN;
	volatile int16_t x236 = -1;

	t58 = (x233<=(x234&(x235^x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x237 = 59U;
	volatile int32_t x238 = INT32_MIN;
	int64_t x239 = INT64_MIN;
	uint32_t x240 = 7808U;

	t59 = (x237<=(x238&(x239^x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	static uint16_t x242 = 325U;
	static int16_t x243 = -64;
	int32_t x244 = -273;
	int32_t t60 = -26532367;

	t60 = (x241<=(x242&(x243^x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x247 = 423U;
	int64_t x248 = -1LL;
	int32_t t61 = 0;

	t61 = (x245<=(x246&(x247^x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x251 = -33;
	uint8_t x252 = 34U;

	t62 = (x249<=(x250&(x251^x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x254 = UINT16_MAX;
	int16_t x255 = -80;

	t63 = (x253<=(x254&(x255^x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 3371U;
	int32_t x258 = -3;
	int64_t x259 = -1LL;
	static int64_t x260 = 47680LL;
	int32_t t64 = 18;

	t64 = (x257<=(x258&(x259^x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 1353615054471885109LLU;
	int64_t x262 = -1LL;
	volatile int32_t t65 = 74537641;

	t65 = (x261<=(x262&(x263^x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -6;
	static uint64_t x266 = UINT64_MAX;
	int32_t x267 = INT32_MIN;
	int16_t x268 = -3328;
	static int32_t t66 = 5229586;

	t66 = (x265<=(x266&(x267^x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = INT16_MAX;
	static int32_t x270 = -1;
	int16_t x271 = INT16_MIN;

	t67 = (x269<=(x270&(x271^x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x273 = UINT64_MAX;
	int8_t x275 = -4;
	volatile int32_t t68 = -3867974;

	t68 = (x273<=(x274&(x275^x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 57103694U;
	uint64_t x279 = 186959LLU;
	static int32_t t69 = -8371;

	t69 = (x277<=(x278&(x279^x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	uint64_t x282 = 374912463667466563LLU;
	static uint64_t x283 = 70593878489LLU;
	int32_t x284 = -1;

	t70 = (x281<=(x282&(x283^x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = INT16_MIN;
	uint8_t x286 = 1U;
	int64_t x287 = 89144398106708LL;
	int16_t x288 = INT16_MAX;
	int32_t t71 = -201699;

	t71 = (x285<=(x286&(x287^x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x291 = INT32_MIN;
	int32_t t72 = -50;

	t72 = (x289<=(x290&(x291^x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = INT8_MIN;
	int16_t x294 = INT16_MIN;
	uint8_t x295 = UINT8_MAX;
	int16_t x296 = 1;
	volatile int32_t t73 = -54497;

	t73 = (x293<=(x294&(x295^x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	static uint32_t x298 = UINT32_MAX;
	static uint8_t x299 = 12U;
	uint32_t x300 = UINT32_MAX;
	int32_t t74 = 37;

	t74 = (x297<=(x298&(x299^x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	int32_t x303 = -324;
	uint32_t x304 = 21137522U;
	volatile int32_t t75 = -9;

	t75 = (x301<=(x302&(x303^x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MIN;
	uint64_t x306 = UINT64_MAX;
	static uint8_t x307 = UINT8_MAX;
	volatile uint32_t x308 = UINT32_MAX;
	static int32_t t76 = -239;

	t76 = (x305<=(x306&(x307^x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = INT8_MIN;
	uint32_t x311 = 3103652U;
	uint64_t x312 = 2LLU;

	t77 = (x309<=(x310&(x311^x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = 3189320558636581LL;
	int32_t x315 = -1;
	volatile int16_t x316 = 41;
	volatile int32_t t78 = 14150394;

	t78 = (x313<=(x314&(x315^x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 10LLU;
	int32_t x318 = INT32_MAX;
	int32_t x319 = INT32_MAX;
	uint16_t x320 = UINT16_MAX;
	int32_t t79 = -3332030;

	t79 = (x317<=(x318&(x319^x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MAX;
	uint16_t x322 = 3441U;
	uint8_t x324 = 0U;
	int32_t t80 = 234185;

	t80 = (x321<=(x322&(x323^x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	uint8_t x326 = 3U;
	volatile int64_t x328 = INT64_MIN;
	int32_t t81 = 534;

	t81 = (x325<=(x326&(x327^x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = INT8_MAX;
	int16_t x330 = -53;
	static int32_t x331 = 17769817;
	uint32_t x332 = 248660U;
	volatile int32_t t82 = 638579;

	t82 = (x329<=(x330&(x331^x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = 777286011;
	uint16_t x334 = UINT16_MAX;
	uint8_t x335 = 0U;
	uint16_t x336 = 16376U;
	volatile int32_t t83 = 2129680;

	t83 = (x333<=(x334&(x335^x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x337 = 61U;
	uint32_t x338 = UINT32_MAX;
	int16_t x339 = INT16_MAX;
	volatile int16_t x340 = INT16_MAX;
	volatile int32_t t84 = 607595;

	t84 = (x337<=(x338&(x339^x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 52522LLU;
	uint16_t x342 = 425U;
	uint8_t x343 = UINT8_MAX;
	volatile int32_t t85 = 59775933;

	t85 = (x341<=(x342&(x343^x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x345 = 30203159U;
	int32_t x346 = -1;
	static volatile uint32_t x347 = 5U;
	volatile int32_t x348 = INT32_MAX;
	volatile int32_t t86 = 35054332;

	t86 = (x345<=(x346&(x347^x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int8_t x350 = INT8_MIN;
	int32_t x351 = INT32_MIN;
	uint16_t x352 = 4U;
	int32_t t87 = 27;

	t87 = (x349<=(x350&(x351^x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 0U;
	int8_t x354 = -35;
	int16_t x355 = -1;
	int16_t x356 = INT16_MIN;
	static volatile int32_t t88 = -36365;

	t88 = (x353<=(x354&(x355^x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = -371413386;
	volatile int64_t x358 = INT64_MAX;
	uint32_t x359 = UINT32_MAX;
	volatile uint32_t x360 = UINT32_MAX;
	volatile int32_t t89 = -1;

	t89 = (x357<=(x358&(x359^x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	uint64_t x362 = UINT64_MAX;
	volatile int16_t x364 = INT16_MAX;
	static volatile int32_t t90 = -36;

	t90 = (x361<=(x362&(x363^x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -752842;
	uint16_t x366 = 0U;
	volatile uint64_t x368 = 247094LLU;
	int32_t t91 = 105640383;

	t91 = (x365<=(x366&(x367^x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	uint16_t x370 = UINT16_MAX;
	int8_t x372 = INT8_MIN;
	int32_t t92 = 85;

	t92 = (x369<=(x370&(x371^x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x374 = 41602649;
	int8_t x375 = 1;
	uint8_t x376 = 62U;
	int32_t t93 = 2905726;

	t93 = (x373<=(x374&(x375^x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x378 = -1;
	uint8_t x379 = UINT8_MAX;
	int16_t x380 = -27;
	int32_t t94 = -1631501;

	t94 = (x377<=(x378&(x379^x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x382 = 35724LL;
	static int32_t x383 = INT32_MIN;
	volatile int32_t t95 = -13;

	t95 = (x381<=(x382&(x383^x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	uint16_t x386 = 22U;
	uint32_t x387 = UINT32_MAX;
	int8_t x388 = INT8_MAX;
	volatile int32_t t96 = 3;

	t96 = (x385<=(x386&(x387^x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = 25709LL;
	int32_t x392 = -206;
	static volatile int32_t t97 = -110225312;

	t97 = (x389<=(x390&(x391^x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x393 = UINT16_MAX;
	uint32_t x395 = 555135U;
	static uint8_t x396 = UINT8_MAX;
	int32_t t98 = 186493214;

	t98 = (x393<=(x394&(x395^x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 81149U;
	int16_t x398 = -12;
	uint32_t x399 = UINT32_MAX;
	volatile int8_t x400 = INT8_MAX;
	volatile int32_t t99 = -686133;

	t99 = (x397<=(x398&(x399^x400)));

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

