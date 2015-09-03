#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x2 = UINT64_MAX;
uint8_t x5 = 10U;
int32_t t1 = 22433020;
volatile int16_t x9 = INT16_MAX;
static uint32_t x21 = 138985054U;
int64_t x23 = -1LL;
volatile int32_t t5 = -963629;
int32_t t6 = -109627111;
uint64_t x31 = UINT64_MAX;
int16_t x40 = INT16_MAX;
int8_t x41 = INT8_MAX;
static volatile int16_t x47 = 2;
int16_t x49 = -1;
int16_t x52 = -1;
uint64_t x57 = UINT64_MAX;
int16_t x65 = INT16_MAX;
int16_t x66 = 9;
uint16_t x74 = 3U;
int32_t x76 = -144333;
volatile int32_t t18 = -99;
uint64_t x78 = UINT64_MAX;
uint16_t x83 = 3695U;
static volatile int8_t x84 = -1;
int32_t t21 = -79167325;
int32_t t23 = -23559;
static int32_t t27 = 26726;
int8_t x117 = INT8_MIN;
uint64_t x119 = 899179817215LLU;
volatile int32_t t29 = 150281;
int16_t x125 = -1;
int8_t x126 = INT8_MIN;
static uint64_t x131 = 4768455701033920LLU;
uint16_t x132 = UINT16_MAX;
int32_t x133 = -1;
uint32_t x135 = 1666U;
int16_t x138 = -1;
int32_t t35 = -199954559;
volatile int16_t x145 = 1;
int16_t x149 = INT16_MIN;
int8_t x156 = 0;
volatile uint16_t x158 = UINT16_MAX;
uint8_t x161 = UINT8_MAX;
static int8_t x162 = INT8_MAX;
int32_t t42 = 1344;
int32_t x177 = INT32_MIN;
static int64_t x178 = INT64_MIN;
static int64_t x184 = INT64_MAX;
static int64_t x191 = -131554533LL;
int64_t x192 = INT64_MIN;
int32_t t47 = 420349;
static uint16_t x197 = 892U;
int8_t x199 = INT8_MIN;
static uint64_t x201 = UINT64_MAX;
volatile int32_t t51 = 27008517;
int32_t x209 = INT32_MAX;
volatile int32_t t52 = 6183709;
static int8_t x218 = INT8_MIN;
int32_t x228 = 2123261;
volatile uint16_t x234 = 3563U;
int8_t x239 = -1;
volatile uint16_t x242 = 24U;
volatile int64_t x244 = INT64_MIN;
static int32_t x245 = -1;
uint32_t x246 = 58049U;
int8_t x255 = -1;
volatile int32_t t63 = 198588068;
uint16_t x257 = UINT16_MAX;
static int32_t x260 = -19899;
static int8_t x266 = 46;
int64_t x270 = INT64_MIN;
int32_t x279 = INT32_MIN;
int8_t x282 = 17;
volatile int32_t t71 = 116;
int8_t x293 = INT8_MAX;
volatile int8_t x296 = 7;
int32_t x307 = INT32_MIN;
static int32_t x312 = 5635;
uint64_t x322 = 6622054617909LLU;
int32_t x324 = INT32_MIN;
int32_t t80 = 1;
static int64_t x332 = -14LL;
static volatile int32_t x339 = -8;
int64_t x341 = INT64_MIN;
int32_t t85 = -8019;
volatile int32_t x347 = -1;
int8_t x350 = INT8_MIN;
int64_t x353 = -911LL;
static volatile int32_t t89 = 19928;
static int32_t x373 = INT32_MIN;
volatile int32_t t93 = -101763;
static volatile int32_t x383 = -1;
static uint8_t x391 = 12U;
uint32_t x393 = UINT32_MAX;
int16_t x395 = 5;
uint16_t x399 = 1U;


void f0(void) {
	static uint8_t x1 = 35U;
	int32_t x3 = -1;
	int16_t x4 = INT16_MIN;
	static int32_t t0 = -7286;

	t0 = (x1<=(x2^(x3==x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x6 = 51383834063LLU;
	int16_t x7 = -111;
	static int16_t x8 = INT16_MIN;

	t1 = (x5<=(x6^(x7==x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = 2;
	int32_t x11 = -3361526;
	volatile uint16_t x12 = 6799U;
	volatile int32_t t2 = -1854;

	t2 = (x9<=(x10^(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MAX;
	uint16_t x14 = 6229U;
	uint32_t x15 = 1182330797U;
	static int16_t x16 = 4757;
	int32_t t3 = -106920;

	t3 = (x13<=(x14^(x15==x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 2;
	int8_t x18 = INT8_MIN;
	volatile int16_t x19 = INT16_MIN;
	volatile int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -1;

	t4 = (x17<=(x18^(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x22 = 1221312382307233109LL;
	uint8_t x24 = 98U;

	t5 = (x21<=(x22^(x23==x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	int64_t x26 = -56368212932705144LL;
	uint32_t x27 = 820U;
	volatile int32_t x28 = -19;

	t6 = (x25<=(x26^(x27==x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = 177088LLU;
	int32_t x30 = -1;
	int64_t x32 = INT64_MAX;
	volatile int32_t t7 = -495344325;

	t7 = (x29<=(x30^(x31==x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -3;
	int8_t x34 = 0;
	uint64_t x35 = 7316768142745LLU;
	uint64_t x36 = UINT64_MAX;
	volatile int32_t t8 = -418031368;

	t8 = (x33<=(x34^(x35==x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 931U;
	int32_t x38 = -1;
	volatile int16_t x39 = INT16_MAX;
	int32_t t9 = 66;

	t9 = (x37<=(x38^(x39==x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = -443226602;
	int16_t x43 = -1;
	int16_t x44 = INT16_MIN;
	int32_t t10 = -610;

	t10 = (x41<=(x42^(x43==x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int8_t x46 = INT8_MAX;
	static int32_t x48 = INT32_MIN;
	int32_t t11 = 0;

	t11 = (x45<=(x46^(x47==x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -1699LL;
	int64_t x51 = 123LL;
	int32_t t12 = 343015949;

	t12 = (x49<=(x50^(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int32_t x54 = INT32_MIN;
	static uint8_t x55 = UINT8_MAX;
	static uint32_t x56 = 2861U;
	volatile int32_t t13 = 162;

	t13 = (x53<=(x54^(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x58 = INT16_MAX;
	volatile int32_t x59 = INT32_MAX;
	volatile int64_t x60 = INT64_MIN;
	volatile int32_t t14 = 222;

	t14 = (x57<=(x58^(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	static uint64_t x62 = UINT64_MAX;
	int32_t x63 = -1;
	volatile int8_t x64 = -1;
	int32_t t15 = 98;

	t15 = (x61<=(x62^(x63==x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x67 = INT64_MIN;
	int64_t x68 = INT64_MIN;
	volatile int32_t t16 = -26659980;

	t16 = (x65<=(x66^(x67==x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	uint32_t x70 = 4092U;
	int16_t x71 = -2721;
	int8_t x72 = INT8_MIN;
	static int32_t t17 = -1;

	t17 = (x69<=(x70^(x71==x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 17U;
	int8_t x75 = -1;

	t18 = (x73<=(x74^(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 52;
	static uint64_t x79 = UINT64_MAX;
	int64_t x80 = INT64_MIN;
	int32_t t19 = 107;

	t19 = (x77<=(x78^(x79==x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	int16_t x82 = INT16_MAX;
	static int32_t t20 = 26046;

	t20 = (x81<=(x82^(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 242U;
	static int32_t x86 = INT32_MIN;
	int64_t x87 = INT64_MAX;
	uint32_t x88 = 265U;

	t21 = (x85<=(x86^(x87==x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int64_t x90 = 6LL;
	static int64_t x91 = 4033819797309563LL;
	int32_t x92 = INT32_MAX;
	int32_t t22 = 45;

	t22 = (x89<=(x90^(x91==x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	volatile int8_t x94 = INT8_MIN;
	static int64_t x95 = INT64_MAX;
	static int64_t x96 = -1LL;

	t23 = (x93<=(x94^(x95==x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = INT64_MAX;
	int16_t x98 = -891;
	int8_t x99 = INT8_MIN;
	volatile uint16_t x100 = 1U;
	int32_t t24 = -347269939;

	t24 = (x97<=(x98^(x99==x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = 125;
	int64_t x104 = INT64_MAX;
	volatile int32_t t25 = -44170;

	t25 = (x101<=(x102^(x103==x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x105 = UINT32_MAX;
	static volatile int16_t x106 = -3024;
	uint32_t x107 = UINT32_MAX;
	int8_t x108 = INT8_MIN;
	static volatile int32_t t26 = -6054;

	t26 = (x105<=(x106^(x107==x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x109 = UINT16_MAX;
	uint32_t x110 = UINT32_MAX;
	int8_t x111 = 0;
	volatile int32_t x112 = -1;

	t27 = (x109<=(x110^(x111==x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	volatile uint32_t x114 = UINT32_MAX;
	volatile int16_t x115 = INT16_MIN;
	int8_t x116 = -14;
	int32_t t28 = -474;

	t28 = (x113<=(x114^(x115==x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x118 = 1U;
	volatile int8_t x120 = -1;

	t29 = (x117<=(x118^(x119==x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	int64_t x122 = -784788700889728LL;
	uint64_t x123 = 3801771521LLU;
	uint8_t x124 = UINT8_MAX;
	static volatile int32_t t30 = -6538;

	t30 = (x121<=(x122^(x123==x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x127 = 38065548616744LLU;
	static uint64_t x128 = 4731164801321275079LLU;
	volatile int32_t t31 = 58375;

	t31 = (x125<=(x126^(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 3;
	volatile int8_t x130 = INT8_MIN;
	int32_t t32 = -452;

	t32 = (x129<=(x130^(x131==x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = -1;
	int16_t x136 = -1;
	static int32_t t33 = -565884;

	t33 = (x133<=(x134^(x135==x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MAX;
	int16_t x139 = 243;
	uint8_t x140 = 3U;
	volatile int32_t t34 = -543422601;

	t34 = (x137<=(x138^(x139==x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	int16_t x142 = -1;
	volatile uint32_t x143 = UINT32_MAX;
	static int32_t x144 = INT32_MIN;

	t35 = (x141<=(x142^(x143==x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x146 = -254;
	int16_t x147 = INT16_MIN;
	int16_t x148 = 2713;
	int32_t t36 = 7;

	t36 = (x145<=(x146^(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x150 = 2062628U;
	uint32_t x151 = 178995727U;
	int8_t x152 = 19;
	volatile int32_t t37 = -1673;

	t37 = (x149<=(x150^(x151==x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	static int8_t x154 = INT8_MAX;
	volatile int32_t x155 = INT32_MIN;
	static volatile int32_t t38 = -394109;

	t38 = (x153<=(x154^(x155==x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = INT8_MIN;
	volatile int32_t x159 = INT32_MAX;
	static volatile int16_t x160 = INT16_MIN;
	volatile int32_t t39 = -1;

	t39 = (x157<=(x158^(x159==x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x163 = 24LLU;
	static int32_t x164 = 87214157;
	int32_t t40 = -1143;

	t40 = (x161<=(x162^(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 84;
	int32_t x166 = INT32_MAX;
	static volatile int8_t x167 = -1;
	int16_t x168 = INT16_MIN;
	volatile int32_t t41 = -7735;

	t41 = (x165<=(x166^(x167==x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 4;
	volatile int32_t x170 = INT32_MIN;
	static uint32_t x171 = 110723U;
	static int64_t x172 = INT64_MIN;

	t42 = (x169<=(x170^(x171==x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = -1;
	static volatile int16_t x174 = -1;
	int32_t x175 = INT32_MAX;
	uint8_t x176 = 0U;
	static volatile int32_t t43 = 30426973;

	t43 = (x173<=(x174^(x175==x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x179 = UINT64_MAX;
	volatile int64_t x180 = INT64_MIN;
	int32_t t44 = -3034;

	t44 = (x177<=(x178^(x179==x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 15U;
	int64_t x182 = INT64_MIN;
	uint16_t x183 = 88U;
	int32_t t45 = -11275;

	t45 = (x181<=(x182^(x183==x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	int32_t x186 = 51872659;
	static uint16_t x187 = UINT16_MAX;
	int64_t x188 = INT64_MIN;
	static int32_t t46 = 13574;

	t46 = (x185<=(x186^(x187==x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	static int16_t x190 = INT16_MIN;

	t47 = (x189<=(x190^(x191==x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x193 = 227U;
	int32_t x194 = -3147;
	int64_t x195 = INT64_MAX;
	static volatile int8_t x196 = INT8_MIN;
	volatile int32_t t48 = 30839;

	t48 = (x193<=(x194^(x195==x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x198 = INT32_MIN;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = -8254;

	t49 = (x197<=(x198^(x199==x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = -1;
	int8_t x203 = INT8_MIN;
	int8_t x204 = INT8_MIN;
	static volatile int32_t t50 = 13740994;

	t50 = (x201<=(x202^(x203==x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = -1;
	uint32_t x206 = UINT32_MAX;
	int8_t x207 = -1;
	uint16_t x208 = 11U;

	t51 = (x205<=(x206^(x207==x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = -18577;
	static int64_t x211 = INT64_MAX;
	int64_t x212 = -485650090495LL;

	t52 = (x209<=(x210^(x211==x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	int16_t x214 = INT16_MAX;
	int64_t x215 = INT64_MAX;
	int8_t x216 = INT8_MAX;
	int32_t t53 = 425826;

	t53 = (x213<=(x214^(x215==x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x217 = 3778172918921384938LLU;
	int64_t x219 = INT64_MAX;
	static volatile int8_t x220 = INT8_MIN;
	int32_t t54 = 426905;

	t54 = (x217<=(x218^(x219==x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 3696U;
	volatile int8_t x222 = 2;
	int8_t x223 = -1;
	volatile int64_t x224 = INT64_MAX;
	int32_t t55 = -12822;

	t55 = (x221<=(x222^(x223==x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = -142;
	uint64_t x226 = 606772518LLU;
	int64_t x227 = INT64_MIN;
	volatile int32_t t56 = -1507437;

	t56 = (x225<=(x226^(x227==x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -474065LL;
	uint32_t x230 = 607U;
	static volatile int32_t x231 = INT32_MAX;
	uint8_t x232 = UINT8_MAX;
	static int32_t t57 = -27;

	t57 = (x229<=(x230^(x231==x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	static volatile int16_t x235 = INT16_MAX;
	volatile int16_t x236 = INT16_MIN;
	int32_t t58 = -1038004713;

	t58 = (x233<=(x234^(x235==x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x237 = UINT16_MAX;
	uint16_t x238 = 102U;
	uint32_t x240 = 82377U;
	volatile int32_t t59 = 761059;

	t59 = (x237<=(x238^(x239==x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 14U;
	volatile int8_t x243 = INT8_MIN;
	int32_t t60 = -7168;

	t60 = (x241<=(x242^(x243==x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x247 = INT16_MIN;
	uint8_t x248 = 15U;
	int32_t t61 = 1596;

	t61 = (x245<=(x246^(x247==x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -51LL;
	int32_t x250 = INT32_MIN;
	int8_t x251 = INT8_MIN;
	int16_t x252 = -1;
	volatile int32_t t62 = 1019890614;

	t62 = (x249<=(x250^(x251==x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = UINT64_MAX;
	static int8_t x254 = -1;
	uint64_t x256 = 39246229LLU;

	t63 = (x253<=(x254^(x255==x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x258 = 498246011637LLU;
	uint16_t x259 = 2U;
	int32_t t64 = 985792;

	t64 = (x257<=(x258^(x259==x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = -1;
	uint16_t x262 = 21U;
	uint32_t x263 = 17U;
	uint16_t x264 = UINT16_MAX;
	int32_t t65 = -1826;

	t65 = (x261<=(x262^(x263==x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 125384U;
	int64_t x267 = 5632503LL;
	volatile int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 1;

	t66 = (x265<=(x266^(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = -1;
	uint16_t x271 = UINT16_MAX;
	int32_t x272 = INT32_MAX;
	volatile int32_t t67 = 17099;

	t67 = (x269<=(x270^(x271==x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -78945376LL;
	int8_t x274 = INT8_MIN;
	uint64_t x275 = 6582486223991926889LLU;
	uint8_t x276 = 0U;
	static volatile int32_t t68 = 323743893;

	t68 = (x273<=(x274^(x275==x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -27LL;
	static int16_t x278 = 0;
	volatile int32_t x280 = INT32_MAX;
	volatile int32_t t69 = 57274501;

	t69 = (x277<=(x278^(x279==x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = 118;
	volatile int8_t x283 = 25;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t70 = 63;

	t70 = (x281<=(x282^(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x285 = 15702281LLU;
	int16_t x286 = 467;
	int32_t x287 = -6977797;
	int64_t x288 = INT64_MIN;

	t71 = (x285<=(x286^(x287==x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x289 = 91U;
	static int64_t x290 = INT64_MAX;
	volatile int16_t x291 = INT16_MIN;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t72 = -15;

	t72 = (x289<=(x290^(x291==x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = INT32_MIN;
	int8_t x295 = 3;
	int32_t t73 = -44441;

	t73 = (x293<=(x294^(x295==x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -6786688;
	int16_t x298 = INT16_MIN;
	volatile uint64_t x299 = UINT64_MAX;
	int8_t x300 = INT8_MAX;
	volatile int32_t t74 = 18;

	t74 = (x297<=(x298^(x299==x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = INT64_MIN;
	int64_t x302 = 976740LL;
	static int64_t x303 = -1LL;
	int32_t x304 = INT32_MIN;
	static int32_t t75 = -242273;

	t75 = (x301<=(x302^(x303==x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = -866189537630LL;
	uint32_t x306 = 395508815U;
	static int64_t x308 = INT64_MIN;
	static int32_t t76 = -71;

	t76 = (x305<=(x306^(x307==x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x309 = UINT16_MAX;
	uint64_t x310 = 8474132043403LLU;
	static uint64_t x311 = 16202506LLU;
	int32_t t77 = -287519;

	t77 = (x309<=(x310^(x311==x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1LL;
	uint64_t x314 = UINT64_MAX;
	int32_t x315 = -3;
	int8_t x316 = 1;
	volatile int32_t t78 = 2850;

	t78 = (x313<=(x314^(x315==x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 4670U;
	int32_t x318 = 685578507;
	volatile int32_t x319 = INT32_MIN;
	uint64_t x320 = UINT64_MAX;
	int32_t t79 = -85826;

	t79 = (x317<=(x318^(x319==x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	static int16_t x323 = INT16_MIN;

	t80 = (x321<=(x322^(x323==x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 28;
	int8_t x326 = INT8_MIN;
	int16_t x327 = INT16_MIN;
	int16_t x328 = -973;
	volatile int32_t t81 = -288875;

	t81 = (x325<=(x326^(x327==x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MIN;
	volatile int16_t x330 = INT16_MAX;
	int8_t x331 = INT8_MIN;
	int32_t t82 = -1513934;

	t82 = (x329<=(x330^(x331==x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = INT8_MIN;
	int64_t x334 = -1LL;
	static int64_t x335 = -1LL;
	volatile int16_t x336 = -1;
	static volatile int32_t t83 = 3663911;

	t83 = (x333<=(x334^(x335==x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = 4163830197LL;
	uint32_t x338 = 27290555U;
	static int16_t x340 = INT16_MIN;
	int32_t t84 = -22;

	t84 = (x337<=(x338^(x339==x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x342 = -1;
	static uint32_t x343 = 318678861U;
	int64_t x344 = INT64_MIN;

	t85 = (x341<=(x342^(x343==x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = INT16_MIN;
	int8_t x346 = INT8_MIN;
	volatile int64_t x348 = INT64_MAX;
	volatile int32_t t86 = 13346165;

	t86 = (x345<=(x346^(x347==x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int16_t x351 = INT16_MAX;
	int16_t x352 = INT16_MIN;
	volatile int32_t t87 = -1;

	t87 = (x349<=(x350^(x351==x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = INT64_MIN;
	int8_t x355 = INT8_MIN;
	volatile int16_t x356 = -4;
	int32_t t88 = 48474;

	t88 = (x353<=(x354^(x355==x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = INT32_MAX;
	volatile uint16_t x358 = 269U;
	volatile int64_t x359 = -512585236126LL;
	int64_t x360 = INT64_MIN;

	t89 = (x357<=(x358^(x359==x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = UINT8_MAX;
	volatile uint32_t x362 = 271262852U;
	int8_t x363 = INT8_MAX;
	int64_t x364 = -326304933024204557LL;
	int32_t t90 = -1289871;

	t90 = (x361<=(x362^(x363==x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	volatile uint32_t x366 = 108854U;
	static uint64_t x367 = 563127090680LLU;
	int16_t x368 = 9;
	int32_t t91 = -1053611;

	t91 = (x365<=(x366^(x367==x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = 196090;
	int32_t x370 = INT32_MIN;
	uint32_t x371 = 159844U;
	uint64_t x372 = 184LLU;
	static volatile int32_t t92 = 1520;

	t92 = (x369<=(x370^(x371==x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = 22848796905707655LL;
	int64_t x375 = INT64_MAX;
	volatile int32_t x376 = INT32_MAX;

	t93 = (x373<=(x374^(x375==x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -1LL;
	int16_t x378 = -58;
	int16_t x379 = -1;
	uint32_t x380 = UINT32_MAX;
	int32_t t94 = -328198493;

	t94 = (x377<=(x378^(x379==x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = INT16_MIN;
	volatile uint64_t x382 = 18138986LLU;
	int64_t x384 = -980LL;
	volatile int32_t t95 = -8044001;

	t95 = (x381<=(x382^(x383==x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 173LLU;
	int8_t x386 = INT8_MIN;
	static uint32_t x387 = 15446U;
	int32_t x388 = -44028;
	static int32_t t96 = -62835;

	t96 = (x385<=(x386^(x387==x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = 68U;
	volatile uint64_t x390 = 12202469195541590LLU;
	int32_t x392 = INT32_MIN;
	volatile int32_t t97 = -353243;

	t97 = (x389<=(x390^(x391==x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x394 = INT32_MAX;
	volatile uint8_t x396 = 52U;
	volatile int32_t t98 = 675330;

	t98 = (x393<=(x394^(x395==x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = 24;
	static int16_t x398 = INT16_MIN;
	volatile int16_t x400 = -1;
	volatile int32_t t99 = 18;

	t99 = (x397<=(x398^(x399==x400)));

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

