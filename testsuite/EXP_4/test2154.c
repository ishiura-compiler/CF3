#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = -902288LL;
static volatile int32_t t1 = 1;
volatile int64_t x15 = INT64_MIN;
static volatile int16_t x18 = 15;
uint16_t x19 = UINT16_MAX;
volatile int32_t t5 = 509;
uint32_t x25 = 46U;
int32_t t6 = -6773;
volatile int32_t t7 = 2221733;
static volatile uint32_t x35 = 1U;
static uint64_t x41 = UINT64_MAX;
volatile int32_t x43 = 59;
int32_t t10 = 12306749;
static volatile int32_t x53 = -1713;
int16_t x58 = INT16_MIN;
volatile int32_t t17 = 14;
uint32_t x75 = 57U;
static volatile int32_t t18 = 160;
volatile int32_t t19 = -8;
volatile int8_t x82 = -1;
int8_t x91 = -5;
int16_t x98 = -1;
int64_t x99 = -1LL;
uint64_t x104 = UINT64_MAX;
int64_t x105 = INT64_MIN;
volatile int8_t x115 = 2;
volatile uint8_t x119 = UINT8_MAX;
volatile int32_t t30 = 4120336;
int32_t x129 = INT32_MIN;
static int32_t x131 = INT32_MIN;
int64_t x133 = 2449LL;
int16_t x142 = INT16_MIN;
uint16_t x143 = 10523U;
static uint64_t x144 = 527898313221084453LLU;
static volatile int8_t x147 = INT8_MIN;
int32_t t37 = 0;
uint16_t x155 = UINT16_MAX;
int8_t x156 = -1;
volatile uint32_t x160 = UINT32_MAX;
int64_t x164 = 433141LL;
volatile int32_t t41 = 3265;
static int16_t x172 = INT16_MIN;
static uint16_t x180 = 14121U;
static int32_t t44 = 809;
int32_t x182 = INT32_MIN;
volatile int16_t x184 = INT16_MIN;
int32_t x190 = INT32_MIN;
volatile int32_t x191 = INT32_MAX;
int64_t x196 = -1LL;
int32_t x201 = 3430966;
volatile int32_t t52 = 3399399;
int32_t x216 = -457;
int64_t x217 = -1LL;
volatile int16_t x227 = 9;
static int32_t t58 = -185011;
int32_t x246 = INT32_MIN;
int64_t x252 = -1LL;
int32_t x254 = INT32_MIN;
int64_t x258 = -108805282300024LL;
static int64_t x259 = INT64_MIN;
volatile int32_t x261 = INT32_MAX;
int64_t x267 = -1LL;
static uint16_t x273 = 142U;
uint16_t x275 = 812U;
int16_t x279 = -1;
uint32_t x280 = 73U;
static int32_t t70 = -7;
static int32_t t72 = 502;
uint64_t x295 = 118478226449556326LLU;
int16_t x297 = -21;
uint64_t x302 = 10747654LLU;
static volatile int32_t x303 = 7712843;
static int64_t x307 = 21084253678LL;
int32_t x308 = -1;
volatile int32_t t76 = -14307103;
uint64_t x309 = UINT64_MAX;
int32_t x310 = INT32_MIN;
volatile uint8_t x316 = 2U;
volatile int32_t t78 = 63899136;
int16_t x319 = INT16_MIN;
uint16_t x320 = 5157U;
volatile int32_t t79 = -6731318;
int16_t x322 = INT16_MIN;
volatile int8_t x327 = -1;
int32_t t81 = 1;
int8_t x334 = INT8_MIN;
volatile int32_t x341 = INT32_MIN;
int16_t x347 = -1;
int32_t x350 = INT32_MIN;
static int8_t x351 = INT8_MAX;
int16_t x354 = -1;
int32_t x356 = INT32_MIN;
volatile int64_t x357 = 0LL;
volatile int32_t t90 = 5118428;
volatile int8_t x371 = -1;
volatile int32_t x376 = INT32_MAX;
volatile int32_t t93 = -1;
int16_t x384 = 376;
volatile int32_t t95 = 26042;
int32_t x394 = INT32_MAX;
uint32_t x398 = UINT32_MAX;


void f0(void) {
	int32_t x1 = 30259779;
	static uint64_t x3 = UINT64_MAX;
	int16_t x4 = INT16_MIN;
	static int32_t t0 = 282419;

	t0 = (x1<(x2<=(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MAX;
	int16_t x6 = -1;
	volatile uint16_t x7 = 11U;
	volatile int32_t x8 = -5505;

	t1 = (x5<(x6<=(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -24643000492256LL;
	int8_t x10 = -11;
	volatile uint64_t x11 = UINT64_MAX;
	int32_t x12 = INT32_MAX;
	static volatile int32_t t2 = 1;

	t2 = (x9<(x10<=(x11^x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	int64_t x14 = INT64_MIN;
	static uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = 54652361;

	t3 = (x13<(x14<=(x15^x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MAX;
	int16_t x20 = -1;
	volatile int32_t t4 = -2213914;

	t4 = (x17<(x18<=(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int16_t x22 = INT16_MAX;
	uint16_t x23 = UINT16_MAX;
	int16_t x24 = INT16_MIN;

	t5 = (x21<(x22<=(x23^x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x26 = INT16_MIN;
	int64_t x27 = INT64_MAX;
	uint16_t x28 = 4U;

	t6 = (x25<(x26<=(x27^x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 65065387LLU;
	int64_t x30 = 14776562LL;
	volatile uint64_t x31 = 2996861599987278LLU;
	static uint8_t x32 = UINT8_MAX;

	t7 = (x29<(x30<=(x31^x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int8_t x34 = INT8_MAX;
	static uint32_t x36 = 3383605U;
	static int32_t t8 = -44896;

	t8 = (x33<(x34<=(x35^x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 18;
	int64_t x38 = -1LL;
	static int32_t x39 = INT32_MIN;
	int8_t x40 = -1;
	volatile int32_t t9 = 1035;

	t9 = (x37<(x38<=(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x42 = -7672;
	static int64_t x44 = -31LL;

	t10 = (x41<(x42<=(x43^x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static int16_t x46 = INT16_MIN;
	int32_t x47 = INT32_MAX;
	uint64_t x48 = 33746929185LLU;
	volatile int32_t t11 = 2238789;

	t11 = (x45<(x46<=(x47^x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -148;
	volatile int64_t x50 = 192929267857390LL;
	static volatile uint32_t x51 = 323U;
	int32_t x52 = -1;
	volatile int32_t t12 = -9327;

	t12 = (x49<(x50<=(x51^x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MIN;
	int16_t x55 = INT16_MIN;
	int8_t x56 = INT8_MAX;
	volatile int32_t t13 = -1869771;

	t13 = (x53<(x54<=(x55^x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = INT64_MIN;
	static uint32_t x59 = 10102995U;
	int32_t x60 = -1;
	static volatile int32_t t14 = 87835;

	t14 = (x57<(x58<=(x59^x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	uint32_t x62 = UINT32_MAX;
	int64_t x63 = INT64_MAX;
	int64_t x64 = 1226081374004085LL;
	static volatile int32_t t15 = 886;

	t15 = (x61<(x62<=(x63^x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 762283678541LLU;
	volatile uint64_t x66 = 5574452661LLU;
	uint16_t x67 = 294U;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = -5570;

	t16 = (x65<(x66<=(x67^x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	int16_t x70 = -1;
	int64_t x71 = INT64_MIN;
	volatile uint32_t x72 = 22858766U;

	t17 = (x69<(x70<=(x71^x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -4;
	volatile int8_t x74 = INT8_MAX;
	int32_t x76 = -242;

	t18 = (x73<(x74<=(x75^x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = INT8_MIN;
	uint16_t x78 = 7U;
	volatile int64_t x79 = 4362809745605058LL;
	static volatile int8_t x80 = 47;

	t19 = (x77<(x78<=(x79^x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = -1;
	int8_t x83 = 23;
	uint64_t x84 = 10027707749620LLU;
	volatile int32_t t20 = 83848;

	t20 = (x81<(x82<=(x83^x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	int64_t x86 = -1LL;
	int8_t x87 = -1;
	volatile int8_t x88 = 48;
	int32_t t21 = 434043628;

	t21 = (x85<(x86<=(x87^x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	volatile int16_t x90 = INT16_MIN;
	volatile int16_t x92 = INT16_MAX;
	int32_t t22 = 1;

	t22 = (x89<(x90<=(x91^x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	int8_t x94 = -8;
	uint16_t x95 = 248U;
	static volatile int8_t x96 = INT8_MIN;
	int32_t t23 = -1150;

	t23 = (x93<(x94<=(x95^x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 3U;
	int64_t x100 = INT64_MIN;
	volatile int32_t t24 = -52867486;

	t24 = (x97<(x98<=(x99^x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	int16_t x102 = -1;
	int8_t x103 = -4;
	volatile int32_t t25 = 114;

	t25 = (x101<(x102<=(x103^x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = 251468;
	int8_t x107 = INT8_MIN;
	static uint8_t x108 = 108U;
	volatile int32_t t26 = 53298;

	t26 = (x105<(x106<=(x107^x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	volatile uint64_t x110 = UINT64_MAX;
	uint32_t x111 = 357398U;
	int16_t x112 = 813;
	int32_t t27 = -3187;

	t27 = (x109<(x110<=(x111^x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 737;
	uint32_t x114 = UINT32_MAX;
	int16_t x116 = INT16_MIN;
	int32_t t28 = -51956768;

	t28 = (x113<(x114<=(x115^x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 1;
	uint8_t x118 = 69U;
	int64_t x120 = -452945LL;
	static volatile int32_t t29 = 130642;

	t29 = (x117<(x118<=(x119^x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = 645LL;
	uint64_t x122 = 1885921797946LLU;
	static int32_t x123 = -861853332;
	uint16_t x124 = 1U;

	t30 = (x121<(x122<=(x123^x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = -1;
	int8_t x126 = 6;
	int8_t x127 = INT8_MIN;
	uint64_t x128 = UINT64_MAX;
	int32_t t31 = -839570;

	t31 = (x125<(x126<=(x127^x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x130 = INT16_MIN;
	uint32_t x132 = UINT32_MAX;
	int32_t t32 = -244;

	t32 = (x129<(x130<=(x131^x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x134 = UINT64_MAX;
	static int64_t x135 = INT64_MAX;
	int16_t x136 = -1;
	int32_t t33 = -12547;

	t33 = (x133<(x134<=(x135^x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 17905498932860762LL;
	int16_t x138 = INT16_MIN;
	int8_t x139 = INT8_MIN;
	int16_t x140 = 103;
	int32_t t34 = 768;

	t34 = (x137<(x138<=(x139^x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = -1;
	volatile int32_t t35 = -16158964;

	t35 = (x141<(x142<=(x143^x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = INT64_MIN;
	int64_t x146 = 5742652LL;
	volatile uint32_t x148 = UINT32_MAX;
	int32_t t36 = -139;

	t36 = (x145<(x146<=(x147^x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MIN;
	int16_t x150 = -1;
	static volatile int32_t x151 = -1;
	int16_t x152 = 14493;

	t37 = (x149<(x150<=(x151^x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = 132;
	volatile uint32_t x154 = 4826U;
	volatile int32_t t38 = 826210;

	t38 = (x153<(x154<=(x155^x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -139;
	uint8_t x158 = 3U;
	int32_t x159 = INT32_MIN;
	static int32_t t39 = 9295;

	t39 = (x157<(x158<=(x159^x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	int64_t x162 = 360566404LL;
	int8_t x163 = -1;
	static int32_t t40 = 32429671;

	t40 = (x161<(x162<=(x163^x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = 4728LLU;
	uint16_t x166 = 509U;
	int16_t x167 = INT16_MIN;
	int32_t x168 = INT32_MAX;

	t41 = (x165<(x166<=(x167^x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = INT64_MAX;
	volatile int8_t x170 = 6;
	volatile int16_t x171 = -1;
	int32_t t42 = -7;

	t42 = (x169<(x170<=(x171^x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 7LL;
	int32_t x174 = INT32_MIN;
	uint16_t x175 = 1U;
	int32_t x176 = INT32_MIN;
	static int32_t t43 = -256083;

	t43 = (x173<(x174<=(x175^x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 1;
	volatile int8_t x178 = INT8_MAX;
	int8_t x179 = INT8_MAX;

	t44 = (x177<(x178<=(x179^x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	volatile int32_t x183 = -1;
	int32_t t45 = -6232911;

	t45 = (x181<(x182<=(x183^x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	int32_t x186 = INT32_MAX;
	int64_t x187 = -772LL;
	uint8_t x188 = 100U;
	volatile int32_t t46 = -497617;

	t46 = (x185<(x186<=(x187^x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MAX;
	uint8_t x192 = 20U;
	int32_t t47 = 17047;

	t47 = (x189<(x190<=(x191^x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int8_t x194 = INT8_MIN;
	static int32_t x195 = INT32_MIN;
	static volatile int32_t t48 = -283469942;

	t48 = (x193<(x194<=(x195^x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -18;
	int8_t x198 = INT8_MIN;
	static int16_t x199 = INT16_MAX;
	uint64_t x200 = UINT64_MAX;
	int32_t t49 = 179;

	t49 = (x197<(x198<=(x199^x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = INT16_MAX;
	static int64_t x203 = INT64_MAX;
	volatile int64_t x204 = -1LL;
	volatile int32_t t50 = 6;

	t50 = (x201<(x202<=(x203^x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	uint32_t x206 = 504374790U;
	int64_t x207 = -1LL;
	int64_t x208 = INT64_MIN;
	volatile int32_t t51 = -8944;

	t51 = (x205<(x206<=(x207^x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = 7;
	int32_t x210 = INT32_MAX;
	static int16_t x211 = INT16_MIN;
	int64_t x212 = INT64_MIN;

	t52 = (x209<(x210<=(x211^x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	uint32_t x214 = 1955216U;
	volatile uint64_t x215 = 45535303802LLU;
	volatile int32_t t53 = 23557960;

	t53 = (x213<(x214<=(x215^x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x218 = UINT8_MAX;
	uint8_t x219 = UINT8_MAX;
	uint8_t x220 = 1U;
	volatile int32_t t54 = -2360;

	t54 = (x217<(x218<=(x219^x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 76U;
	volatile int32_t x222 = 42501052;
	int16_t x223 = 1;
	int8_t x224 = INT8_MIN;
	int32_t t55 = -1522;

	t55 = (x221<(x222<=(x223^x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x225 = UINT8_MAX;
	uint16_t x226 = UINT16_MAX;
	static int32_t x228 = -1;
	volatile int32_t t56 = -608082;

	t56 = (x225<(x226<=(x227^x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	int32_t x230 = 0;
	int64_t x231 = INT64_MIN;
	static int32_t x232 = INT32_MIN;
	static int32_t t57 = 60140;

	t57 = (x229<(x230<=(x231^x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	int16_t x234 = INT16_MAX;
	static int8_t x235 = INT8_MIN;
	uint8_t x236 = UINT8_MAX;

	t58 = (x233<(x234<=(x235^x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -2LL;
	int16_t x238 = INT16_MIN;
	uint32_t x239 = 118881U;
	volatile uint32_t x240 = 385769U;
	int32_t t59 = -606467369;

	t59 = (x237<(x238<=(x239^x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	uint64_t x242 = UINT64_MAX;
	volatile int32_t x243 = -663;
	volatile int8_t x244 = INT8_MIN;
	int32_t t60 = -50403;

	t60 = (x241<(x242<=(x243^x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 2U;
	uint64_t x247 = UINT64_MAX;
	uint64_t x248 = 3056862LLU;
	static int32_t t61 = 7;

	t61 = (x245<(x246<=(x247^x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = INT16_MIN;
	int64_t x250 = -91834194026218070LL;
	uint64_t x251 = 1798341945482LLU;
	volatile int32_t t62 = 2;

	t62 = (x249<(x250<=(x251^x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 1U;
	int64_t x255 = -1LL;
	static uint16_t x256 = UINT16_MAX;
	volatile int32_t t63 = 0;

	t63 = (x253<(x254<=(x255^x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MAX;
	int8_t x260 = 11;
	volatile int32_t t64 = -34390802;

	t64 = (x257<(x258<=(x259^x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x262 = UINT64_MAX;
	uint32_t x263 = 21U;
	int16_t x264 = INT16_MIN;
	int32_t t65 = -1274639;

	t65 = (x261<(x262<=(x263^x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 8873LLU;
	uint8_t x266 = 3U;
	int8_t x268 = -1;
	int32_t t66 = -863842;

	t66 = (x265<(x266<=(x267^x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = UINT8_MAX;
	static int64_t x270 = -3299654557LL;
	uint16_t x271 = 25806U;
	int16_t x272 = INT16_MIN;
	volatile int32_t t67 = 1680;

	t67 = (x269<(x270<=(x271^x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x274 = 3U;
	volatile int64_t x276 = -1LL;
	int32_t t68 = -4;

	t68 = (x273<(x274<=(x275^x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	int64_t x278 = 30492281LL;
	volatile int32_t t69 = 1845004;

	t69 = (x277<(x278<=(x279^x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = 11;
	static uint16_t x282 = 1032U;
	int16_t x283 = -1;
	static int32_t x284 = INT32_MIN;

	t70 = (x281<(x282<=(x283^x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x285 = 57108245U;
	int32_t x286 = -1;
	int32_t x287 = INT32_MIN;
	int64_t x288 = INT64_MIN;
	int32_t t71 = 241118970;

	t71 = (x285<(x286<=(x287^x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = -1;
	int16_t x290 = -1;
	int32_t x291 = INT32_MIN;
	uint64_t x292 = 12744786LLU;

	t72 = (x289<(x290<=(x291^x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = 0;
	int32_t x294 = -1;
	uint8_t x296 = 8U;
	static int32_t t73 = -466743;

	t73 = (x293<(x294<=(x295^x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x298 = -7LL;
	static int16_t x299 = 0;
	volatile int32_t x300 = -51;
	volatile int32_t t74 = -15175309;

	t74 = (x297<(x298<=(x299^x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MAX;
	uint16_t x304 = UINT16_MAX;
	int32_t t75 = 28546;

	t75 = (x301<(x302<=(x303^x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = -1;
	uint16_t x306 = 2U;

	t76 = (x305<(x306<=(x307^x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x311 = UINT64_MAX;
	static uint32_t x312 = 2144902299U;
	volatile int32_t t77 = -1015;

	t77 = (x309<(x310<=(x311^x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -3;
	int64_t x314 = INT64_MAX;
	uint8_t x315 = 1U;

	t78 = (x313<(x314<=(x315^x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	volatile int8_t x318 = INT8_MIN;

	t79 = (x317<(x318<=(x319^x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	int8_t x323 = -1;
	int64_t x324 = INT64_MAX;
	static int32_t t80 = -1452;

	t80 = (x321<(x322<=(x323^x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x325 = UINT32_MAX;
	int32_t x326 = INT32_MIN;
	static int16_t x328 = -1;

	t81 = (x325<(x326<=(x327^x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -7;
	int64_t x330 = INT64_MIN;
	uint16_t x331 = 7114U;
	int16_t x332 = INT16_MIN;
	static volatile int32_t t82 = -31;

	t82 = (x329<(x330<=(x331^x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x333 = UINT8_MAX;
	int32_t x335 = -417815796;
	volatile int8_t x336 = 31;
	volatile int32_t t83 = 456;

	t83 = (x333<(x334<=(x335^x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MIN;
	static int64_t x338 = INT64_MIN;
	static int8_t x339 = -1;
	static uint16_t x340 = 251U;
	int32_t t84 = 7;

	t84 = (x337<(x338<=(x339^x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = INT32_MAX;
	uint8_t x343 = 1U;
	volatile uint64_t x344 = 30LLU;
	int32_t t85 = 774;

	t85 = (x341<(x342<=(x343^x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	int32_t x346 = INT32_MIN;
	uint32_t x348 = 10175U;
	volatile int32_t t86 = -754;

	t86 = (x345<(x346<=(x347^x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 4U;
	int32_t x352 = -5132;
	static volatile int32_t t87 = 993;

	t87 = (x349<(x350<=(x351^x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x353 = 3341650006LLU;
	int8_t x355 = -1;
	static int32_t t88 = -13583764;

	t88 = (x353<(x354<=(x355^x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x358 = 94U;
	int32_t x359 = INT32_MAX;
	int16_t x360 = 150;
	static volatile int32_t t89 = -1;

	t89 = (x357<(x358<=(x359^x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x361 = 29U;
	volatile int8_t x362 = INT8_MAX;
	static int64_t x363 = INT64_MIN;
	int64_t x364 = -1LL;

	t90 = (x361<(x362<=(x363^x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 2273825U;
	volatile int8_t x366 = INT8_MIN;
	static volatile int16_t x367 = 1;
	static uint32_t x368 = UINT32_MAX;
	int32_t t91 = 21;

	t91 = (x365<(x366<=(x367^x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = UINT16_MAX;
	int32_t x370 = -1;
	volatile int32_t x372 = -96245;
	volatile int32_t t92 = 375;

	t92 = (x369<(x370<=(x371^x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -14LL;
	int16_t x374 = INT16_MIN;
	int16_t x375 = INT16_MAX;

	t93 = (x373<(x374<=(x375^x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int16_t x378 = INT16_MIN;
	volatile int8_t x379 = INT8_MAX;
	static int16_t x380 = -1;
	int32_t t94 = 221637;

	t94 = (x377<(x378<=(x379^x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 376705504;
	uint32_t x382 = 108514900U;
	int32_t x383 = INT32_MIN;

	t95 = (x381<(x382<=(x383^x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	uint64_t x386 = 19LLU;
	volatile uint8_t x387 = UINT8_MAX;
	static int16_t x388 = -881;
	volatile int32_t t96 = -78171955;

	t96 = (x385<(x386<=(x387^x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 1U;
	int32_t x390 = INT32_MIN;
	static int8_t x391 = INT8_MIN;
	uint16_t x392 = 14U;
	int32_t t97 = -175091681;

	t97 = (x389<(x390<=(x391^x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 2U;
	int64_t x395 = -1LL;
	volatile int32_t x396 = 22;
	volatile int32_t t98 = 594360;

	t98 = (x393<(x394<=(x395^x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = 1LL;
	static int32_t x399 = INT32_MIN;
	static int8_t x400 = -1;
	int32_t t99 = -338;

	t99 = (x397<(x398<=(x399^x400)));

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

