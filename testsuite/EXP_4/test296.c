#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x1 = 20060LLU;
static uint16_t x3 = 1U;
int32_t x8 = INT32_MAX;
static int8_t x11 = -1;
uint32_t x12 = UINT32_MAX;
volatile int32_t t2 = 58935164;
static uint8_t x15 = UINT8_MAX;
static int32_t t3 = 18;
int32_t x38 = INT32_MIN;
volatile int32_t t9 = -6;
uint16_t x41 = UINT16_MAX;
int32_t x49 = -490358;
uint16_t x53 = UINT16_MAX;
uint16_t x56 = 379U;
volatile int32_t t13 = 375783946;
static int8_t x57 = 0;
volatile uint8_t x60 = 42U;
volatile int8_t x63 = -1;
volatile int8_t x67 = INT8_MAX;
volatile int32_t t17 = 936;
static int64_t x74 = 1746286622LL;
uint64_t x78 = UINT64_MAX;
volatile int32_t x90 = 452591231;
int64_t x105 = INT64_MIN;
int8_t x108 = INT8_MAX;
int64_t x111 = 1380507868LL;
uint32_t x116 = 237893U;
volatile int32_t t25 = -7274;
static uint64_t x119 = 36619167LLU;
uint32_t x122 = 17565072U;
int32_t t28 = -938822515;
int16_t x133 = -14;
static uint16_t x134 = UINT16_MAX;
static volatile int32_t t29 = -64739;
uint32_t x137 = 179606520U;
static int32_t x138 = INT32_MAX;
volatile uint64_t x141 = UINT64_MAX;
int8_t x151 = INT8_MIN;
uint8_t x152 = UINT8_MAX;
static int32_t t33 = 26;
int16_t x155 = -1;
volatile int16_t x156 = INT16_MIN;
volatile uint64_t x158 = 8062356906283LLU;
int16_t x161 = -1;
uint16_t x163 = UINT16_MAX;
uint8_t x164 = 3U;
static int32_t x165 = INT32_MAX;
volatile uint64_t x168 = UINT64_MAX;
int32_t t37 = 27288;
int32_t t40 = -3;
static int16_t x181 = 1809;
int32_t x185 = -180791;
uint64_t x188 = 231675090740LLU;
uint32_t x189 = UINT32_MAX;
uint64_t x190 = UINT64_MAX;
int64_t x192 = -1LL;
int32_t t43 = -28213846;
uint8_t x193 = UINT8_MAX;
volatile uint8_t x203 = 7U;
volatile int64_t x205 = -1LL;
int8_t x214 = 17;
int32_t x215 = INT32_MIN;
static uint64_t x224 = 70LLU;
static int32_t t50 = -1;
volatile uint64_t x229 = 1907LLU;
volatile int64_t x232 = -74965945431059LL;
int8_t x234 = -50;
int16_t x242 = -1;
volatile int64_t x244 = -10425801LL;
static volatile int32_t t55 = 21411;
int32_t x267 = INT32_MAX;
int16_t x268 = INT16_MAX;
int32_t x271 = -1;
uint8_t x280 = UINT8_MAX;
volatile uint64_t x283 = 21258LLU;
int8_t x284 = -1;
volatile int32_t t61 = -389;
uint16_t x286 = 11172U;
int8_t x293 = INT8_MIN;
static volatile int8_t x298 = INT8_MAX;
int64_t x299 = -1LL;
uint32_t x300 = 251U;
static int64_t x301 = INT64_MIN;
int32_t x303 = INT32_MAX;
uint32_t x305 = UINT32_MAX;
int64_t x306 = INT64_MIN;
int8_t x308 = INT8_MIN;
volatile int8_t x325 = INT8_MIN;
int64_t x330 = -15762LL;
uint16_t x332 = 0U;
int32_t x333 = -35;
static int16_t x334 = INT16_MIN;
int32_t t72 = -55402593;
static uint16_t x346 = 2U;
volatile uint16_t x348 = 1186U;
volatile int32_t t76 = -2974;
uint32_t x359 = 933731284U;
static uint64_t x360 = 43723941947LLU;
int64_t x361 = 204155LL;
volatile int32_t x365 = -1;
int32_t x368 = 0;
int16_t x381 = -1;
uint32_t x391 = 1966U;
volatile int32_t t83 = -15;
static int8_t x404 = INT8_MAX;
volatile uint64_t x409 = 3211573324LLU;
int16_t x411 = INT16_MIN;
uint16_t x420 = 32U;
static uint16_t x421 = 263U;
volatile int32_t t89 = 102690;
static uint32_t x427 = UINT32_MAX;
static int16_t x431 = -1;
volatile int32_t t91 = 231;
volatile int32_t x433 = INT32_MAX;
uint8_t x438 = UINT8_MAX;
int32_t x441 = INT32_MIN;
int16_t x442 = 25;
int64_t x446 = INT64_MAX;
int64_t x457 = -1LL;


void f0(void) {
	int8_t x2 = -1;
	int8_t x4 = INT8_MAX;
	int32_t t0 = 6386;

	t0 = (x1<=(x2<=(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -28;
	uint8_t x6 = 7U;
	uint8_t x7 = 2U;
	volatile int32_t t1 = 1553162;

	t1 = (x5<=(x6<=(x7-x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 10;
	uint16_t x10 = 3148U;

	t2 = (x9<=(x10<=(x11-x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = -1;
	uint32_t x14 = 59344U;
	uint8_t x16 = 58U;

	t3 = (x13<=(x14<=(x15-x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 8570LLU;
	int32_t x18 = -604602540;
	int32_t x19 = -90;
	uint16_t x20 = UINT16_MAX;
	int32_t t4 = 3739;

	t4 = (x17<=(x18<=(x19-x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -836950230000LL;
	volatile uint8_t x22 = UINT8_MAX;
	static uint32_t x23 = 420975U;
	static uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = -2257480;

	t5 = (x21<=(x22<=(x23-x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	volatile int8_t x26 = -1;
	static volatile int64_t x27 = -1718688404LL;
	static uint8_t x28 = 55U;
	int32_t t6 = 48;

	t6 = (x25<=(x26<=(x27-x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 11;
	uint32_t x30 = UINT32_MAX;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = 1;
	volatile int32_t t7 = 2222011;

	t7 = (x29<=(x30<=(x31-x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	volatile uint32_t x34 = 63466U;
	uint8_t x35 = 99U;
	static int64_t x36 = 287806LL;
	volatile int32_t t8 = -15405535;

	t8 = (x33<=(x34<=(x35-x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MIN;
	volatile int8_t x39 = 3;
	uint32_t x40 = UINT32_MAX;

	t9 = (x37<=(x38<=(x39-x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x42 = INT32_MIN;
	int8_t x43 = INT8_MAX;
	uint16_t x44 = 1U;
	volatile int32_t t10 = -288165925;

	t10 = (x41<=(x42<=(x43-x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int32_t x46 = -1;
	int8_t x47 = -1;
	int64_t x48 = INT64_MIN;
	static int32_t t11 = 1766410;

	t11 = (x45<=(x46<=(x47-x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x50 = UINT16_MAX;
	int32_t x51 = -49301007;
	static int16_t x52 = INT16_MAX;
	volatile int32_t t12 = -86;

	t12 = (x49<=(x50<=(x51-x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = -10171;
	int64_t x55 = -864915655222523040LL;

	t13 = (x53<=(x54<=(x55-x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MAX;
	int16_t x59 = 1579;
	int32_t t14 = -101746129;

	t14 = (x57<=(x58<=(x59-x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	int8_t x62 = -1;
	int32_t x64 = INT32_MIN;
	int32_t t15 = 573046;

	t15 = (x61<=(x62<=(x63-x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 0U;
	int16_t x66 = -26;
	static int8_t x68 = -1;
	static volatile int32_t t16 = 5364123;

	t16 = (x65<=(x66<=(x67-x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 3U;
	volatile int8_t x70 = -9;
	static int16_t x71 = -1;
	uint8_t x72 = UINT8_MAX;

	t17 = (x69<=(x70<=(x71-x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	static int16_t x75 = INT16_MIN;
	int8_t x76 = 0;
	volatile int32_t t18 = 169616;

	t18 = (x73<=(x74<=(x75-x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MAX;
	int8_t x79 = INT8_MIN;
	uint32_t x80 = 261U;
	int32_t t19 = 0;

	t19 = (x77<=(x78<=(x79-x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MAX;
	int64_t x91 = INT64_MAX;
	uint16_t x92 = UINT16_MAX;
	static volatile int32_t t20 = -85877920;

	t20 = (x89<=(x90<=(x91-x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -1;
	static volatile int32_t x94 = 472;
	int64_t x95 = INT64_MIN;
	static int64_t x96 = INT64_MIN;
	int32_t t21 = 778034882;

	t21 = (x93<=(x94<=(x95-x96)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x97 = INT8_MAX;
	static uint32_t x98 = 1081634339U;
	static uint32_t x99 = 1616190U;
	uint64_t x100 = 3120081329025058718LLU;
	int32_t t22 = 16;

	t22 = (x97<=(x98<=(x99-x100)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x106 = INT64_MAX;
	int8_t x107 = -1;
	volatile int32_t t23 = 252;

	t23 = (x105<=(x106<=(x107-x108)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x109 = 225U;
	volatile int16_t x110 = INT16_MAX;
	int32_t x112 = INT32_MIN;
	volatile int32_t t24 = 14357001;

	t24 = (x109<=(x110<=(x111-x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x113 = -39935723LL;
	int8_t x114 = 0;
	static volatile uint32_t x115 = 77U;

	t25 = (x113<=(x114<=(x115-x116)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = INT8_MIN;
	uint8_t x118 = 123U;
	uint16_t x120 = 0U;
	int32_t t26 = 41505546;

	t26 = (x117<=(x118<=(x119-x120)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = UINT16_MAX;
	volatile int8_t x123 = INT8_MIN;
	int64_t x124 = -786534LL;
	static int32_t t27 = -1;

	t27 = (x121<=(x122<=(x123-x124)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = -5033;
	uint64_t x126 = UINT64_MAX;
	uint32_t x127 = 3U;
	static volatile int32_t x128 = INT32_MIN;

	t28 = (x125<=(x126<=(x127-x128)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x135 = 4U;
	static uint64_t x136 = 4190261422172545828LLU;

	t29 = (x133<=(x134<=(x135-x136)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x139 = 49283155903LL;
	int8_t x140 = -14;
	static volatile int32_t t30 = 12645;

	t30 = (x137<=(x138<=(x139-x140)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x142 = INT16_MIN;
	static uint16_t x143 = 1830U;
	static volatile uint32_t x144 = UINT32_MAX;
	volatile int32_t t31 = -18;

	t31 = (x141<=(x142<=(x143-x144)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = -80989932860581083LL;
	static uint64_t x146 = 253728LLU;
	int32_t x147 = -994879;
	volatile uint8_t x148 = UINT8_MAX;
	static int32_t t32 = 0;

	t32 = (x145<=(x146<=(x147-x148)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x149 = INT32_MAX;
	uint64_t x150 = 4803637663669545LLU;

	t33 = (x149<=(x150<=(x151-x152)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = 1063180U;
	int16_t x154 = -23;
	volatile int32_t t34 = -1;

	t34 = (x153<=(x154<=(x155-x156)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = INT8_MAX;
	int32_t x159 = 1;
	int8_t x160 = -1;
	int32_t t35 = 107;

	t35 = (x157<=(x158<=(x159-x160)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x162 = -22918666LL;
	volatile int32_t t36 = -154;

	t36 = (x161<=(x162<=(x163-x164)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x166 = 1;
	static int32_t x167 = 158;

	t37 = (x165<=(x166<=(x167-x168)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x169 = INT16_MAX;
	int8_t x170 = -1;
	uint8_t x171 = 1U;
	int16_t x172 = INT16_MIN;
	volatile int32_t t38 = -198481510;

	t38 = (x169<=(x170<=(x171-x172)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x173 = 0LLU;
	static uint8_t x174 = 47U;
	volatile int32_t x175 = INT32_MIN;
	int16_t x176 = -58;
	static volatile int32_t t39 = 75238;

	t39 = (x173<=(x174<=(x175-x176)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = INT16_MIN;
	volatile int16_t x178 = -1;
	volatile int32_t x179 = 82;
	uint16_t x180 = 5057U;

	t40 = (x177<=(x178<=(x179-x180)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x182 = INT8_MAX;
	volatile int16_t x183 = INT16_MIN;
	int32_t x184 = INT32_MIN;
	int32_t t41 = 9052;

	t41 = (x181<=(x182<=(x183-x184)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x186 = INT32_MIN;
	volatile int8_t x187 = 0;
	volatile int32_t t42 = -944087164;

	t42 = (x185<=(x186<=(x187-x188)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x191 = INT16_MIN;

	t43 = (x189<=(x190<=(x191-x192)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x194 = UINT32_MAX;
	static int32_t x195 = INT32_MAX;
	int16_t x196 = 0;
	int32_t t44 = -32161;

	t44 = (x193<=(x194<=(x195-x196)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = -1LL;
	int32_t x198 = INT32_MAX;
	int32_t x199 = INT32_MIN;
	int16_t x200 = INT16_MIN;
	int32_t t45 = 1851235;

	t45 = (x197<=(x198<=(x199-x200)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = 4859820LLU;
	int16_t x202 = 1;
	int8_t x204 = 0;
	volatile int32_t t46 = -785084;

	t46 = (x201<=(x202<=(x203-x204)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x206 = INT32_MIN;
	uint8_t x207 = 1U;
	static uint32_t x208 = 31801320U;
	volatile int32_t t47 = 0;

	t47 = (x205<=(x206<=(x207-x208)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x209 = UINT16_MAX;
	int32_t x210 = -1086335;
	uint8_t x211 = UINT8_MAX;
	static int16_t x212 = INT16_MIN;
	int32_t t48 = 105;

	t48 = (x209<=(x210<=(x211-x212)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = 0;
	uint32_t x216 = 5431081U;
	volatile int32_t t49 = 31;

	t49 = (x213<=(x214<=(x215-x216)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x221 = INT64_MIN;
	volatile int32_t x222 = INT32_MIN;
	int8_t x223 = INT8_MIN;

	t50 = (x221<=(x222<=(x223-x224)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x225 = INT16_MIN;
	volatile uint64_t x226 = UINT64_MAX;
	int16_t x227 = -1;
	uint8_t x228 = 1U;
	volatile int32_t t51 = 112042231;

	t51 = (x225<=(x226<=(x227-x228)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x230 = -1;
	static uint8_t x231 = 1U;
	volatile int32_t t52 = 107382;

	t52 = (x229<=(x230<=(x231-x232)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x233 = INT16_MIN;
	static int16_t x235 = -9854;
	volatile int16_t x236 = INT16_MAX;
	static int32_t t53 = 38687721;

	t53 = (x233<=(x234<=(x235-x236)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x241 = UINT64_MAX;
	int8_t x243 = INT8_MAX;
	int32_t t54 = -5;

	t54 = (x241<=(x242<=(x243-x244)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x245 = UINT8_MAX;
	static int8_t x246 = INT8_MAX;
	int32_t x247 = -191295245;
	static int32_t x248 = 652292526;

	t55 = (x245<=(x246<=(x247-x248)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = 49;
	volatile uint16_t x250 = 100U;
	int16_t x251 = -1;
	int16_t x252 = INT16_MAX;
	int32_t t56 = -16;

	t56 = (x249<=(x250<=(x251-x252)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x261 = 17U;
	static int16_t x262 = INT16_MIN;
	volatile int16_t x263 = -3507;
	volatile int64_t x264 = -1LL;
	int32_t t57 = -281544;

	t57 = (x261<=(x262<=(x263-x264)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x265 = UINT32_MAX;
	int8_t x266 = 6;
	static int32_t t58 = -33244791;

	t58 = (x265<=(x266<=(x267-x268)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x269 = 1441;
	int32_t x270 = INT32_MAX;
	static uint8_t x272 = UINT8_MAX;
	volatile int32_t t59 = -1417;

	t59 = (x269<=(x270<=(x271-x272)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x277 = INT8_MAX;
	int32_t x278 = -4071310;
	volatile uint64_t x279 = UINT64_MAX;
	int32_t t60 = -1305810;

	t60 = (x277<=(x278<=(x279-x280)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x281 = 1092;
	int8_t x282 = INT8_MAX;

	t61 = (x281<=(x282<=(x283-x284)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x285 = -57053463;
	volatile int16_t x287 = -5;
	volatile uint64_t x288 = 132471379503LLU;
	volatile int32_t t62 = -30220;

	t62 = (x285<=(x286<=(x287-x288)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x289 = 681841635LL;
	static volatile int16_t x290 = 11369;
	int16_t x291 = INT16_MAX;
	int32_t x292 = -1;
	volatile int32_t t63 = 21;

	t63 = (x289<=(x290<=(x291-x292)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x294 = INT32_MIN;
	int64_t x295 = 58960426791LL;
	int64_t x296 = INT64_MAX;
	static volatile int32_t t64 = 3504;

	t64 = (x293<=(x294<=(x295-x296)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x297 = INT16_MIN;
	volatile int32_t t65 = -2825;

	t65 = (x297<=(x298<=(x299-x300)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x302 = INT32_MIN;
	int32_t x304 = 2;
	static volatile int32_t t66 = -48369;

	t66 = (x301<=(x302<=(x303-x304)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x307 = 0U;
	volatile int32_t t67 = -1;

	t67 = (x305<=(x306<=(x307-x308)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x309 = 989876976LLU;
	static uint32_t x310 = 461446609U;
	uint32_t x311 = 18701U;
	int16_t x312 = -1;
	volatile int32_t t68 = -64172896;

	t68 = (x309<=(x310<=(x311-x312)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x313 = 1;
	static int8_t x314 = INT8_MAX;
	uint64_t x315 = 22LLU;
	uint8_t x316 = 73U;
	static int32_t t69 = 69360932;

	t69 = (x313<=(x314<=(x315-x316)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x326 = 3662U;
	uint16_t x327 = UINT16_MAX;
	int16_t x328 = -47;
	int32_t t70 = -132603939;

	t70 = (x325<=(x326<=(x327-x328)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x329 = INT64_MAX;
	static int16_t x331 = INT16_MIN;
	int32_t t71 = 5693381;

	t71 = (x329<=(x330<=(x331-x332)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x335 = UINT64_MAX;
	int8_t x336 = INT8_MIN;

	t72 = (x333<=(x334<=(x335-x336)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x337 = INT32_MAX;
	int16_t x338 = 3;
	static volatile int8_t x339 = 9;
	uint32_t x340 = 33U;
	volatile int32_t t73 = -1406970;

	t73 = (x337<=(x338<=(x339-x340)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x341 = 465420587688LL;
	static int32_t x342 = 32452427;
	static uint16_t x343 = 2U;
	volatile uint8_t x344 = 123U;
	volatile int32_t t74 = 863;

	t74 = (x341<=(x342<=(x343-x344)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x345 = INT32_MAX;
	int32_t x347 = 1;
	static int32_t t75 = -207329;

	t75 = (x345<=(x346<=(x347-x348)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x353 = -1LL;
	uint16_t x354 = 3U;
	int8_t x355 = INT8_MIN;
	int8_t x356 = 30;

	t76 = (x353<=(x354<=(x355-x356)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x357 = 8175623938300421616LLU;
	static volatile int64_t x358 = INT64_MIN;
	static int32_t t77 = -56322770;

	t77 = (x357<=(x358<=(x359-x360)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x362 = 5641847884759LL;
	int16_t x363 = -325;
	int16_t x364 = INT16_MIN;
	int32_t t78 = -45746949;

	t78 = (x361<=(x362<=(x363-x364)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x366 = INT64_MIN;
	volatile int32_t x367 = -1;
	volatile int32_t t79 = 28;

	t79 = (x365<=(x366<=(x367-x368)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x369 = INT32_MIN;
	static int8_t x370 = INT8_MIN;
	static uint8_t x371 = 49U;
	static uint16_t x372 = 5516U;
	int32_t t80 = 0;

	t80 = (x369<=(x370<=(x371-x372)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x382 = -1;
	int64_t x383 = 2791783842983LL;
	static volatile int8_t x384 = 0;
	volatile int32_t t81 = -70795086;

	t81 = (x381<=(x382<=(x383-x384)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x385 = INT8_MIN;
	int32_t x386 = INT32_MAX;
	uint16_t x387 = 113U;
	int32_t x388 = -14;
	volatile int32_t t82 = -228150;

	t82 = (x385<=(x386<=(x387-x388)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x389 = -1LL;
	static uint16_t x390 = 0U;
	static uint16_t x392 = 203U;

	t83 = (x389<=(x390<=(x391-x392)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x393 = 0U;
	volatile uint32_t x394 = 2038387U;
	uint8_t x395 = UINT8_MAX;
	int8_t x396 = 39;
	static volatile int32_t t84 = -33;

	t84 = (x393<=(x394<=(x395-x396)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x401 = 5628613U;
	uint16_t x402 = 52U;
	int32_t x403 = 8;
	volatile int32_t t85 = -61;

	t85 = (x401<=(x402<=(x403-x404)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x410 = -200577645LL;
	int32_t x412 = 3138419;
	static volatile int32_t t86 = -53496556;

	t86 = (x409<=(x410<=(x411-x412)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x413 = -213;
	uint8_t x414 = 21U;
	int16_t x415 = INT16_MIN;
	static volatile uint16_t x416 = 131U;
	int32_t t87 = 122374;

	t87 = (x413<=(x414<=(x415-x416)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x417 = 1766U;
	static int8_t x418 = 54;
	volatile int8_t x419 = 0;
	static volatile int32_t t88 = 51445092;

	t88 = (x417<=(x418<=(x419-x420)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x422 = 455U;
	int8_t x423 = INT8_MIN;
	static uint8_t x424 = 1U;

	t89 = (x421<=(x422<=(x423-x424)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x425 = INT64_MIN;
	int16_t x426 = -1;
	static uint8_t x428 = 2U;
	volatile int32_t t90 = 0;

	t90 = (x425<=(x426<=(x427-x428)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x429 = -13845;
	uint64_t x430 = UINT64_MAX;
	int16_t x432 = 14219;

	t91 = (x429<=(x430<=(x431-x432)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x434 = -1;
	volatile int8_t x435 = INT8_MAX;
	int32_t x436 = -694;
	int32_t t92 = 1;

	t92 = (x433<=(x434<=(x435-x436)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x437 = INT8_MIN;
	int64_t x439 = -1LL;
	static uint64_t x440 = UINT64_MAX;
	int32_t t93 = 3;

	t93 = (x437<=(x438<=(x439-x440)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x443 = UINT32_MAX;
	int8_t x444 = -5;
	int32_t t94 = 0;

	t94 = (x441<=(x442<=(x443-x444)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x445 = -253LL;
	int32_t x447 = INT32_MIN;
	int8_t x448 = -1;
	static int32_t t95 = -214;

	t95 = (x445<=(x446<=(x447-x448)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x449 = INT32_MIN;
	int8_t x450 = INT8_MAX;
	static uint64_t x451 = UINT64_MAX;
	int32_t x452 = INT32_MIN;
	int32_t t96 = 13497596;

	t96 = (x449<=(x450<=(x451-x452)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x453 = 102U;
	int16_t x454 = INT16_MAX;
	volatile int16_t x455 = -519;
	volatile uint16_t x456 = 10819U;
	int32_t t97 = -732030;

	t97 = (x453<=(x454<=(x455-x456)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x458 = INT64_MIN;
	int32_t x459 = INT32_MIN;
	int32_t x460 = INT32_MIN;
	static int32_t t98 = 636808;

	t98 = (x457<=(x458<=(x459-x460)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x461 = INT16_MAX;
	static int64_t x462 = INT64_MAX;
	volatile int64_t x463 = -6554567978632LL;
	int8_t x464 = 0;
	volatile int32_t t99 = 42;

	t99 = (x461<=(x462<=(x463-x464)));

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

