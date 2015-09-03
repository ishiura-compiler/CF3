#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = -459;
static int64_t x11 = INT64_MIN;
int64_t x14 = -1LL;
static int32_t t3 = -1709682;
volatile int32_t x18 = -1;
int32_t t4 = -12;
int8_t x26 = INT8_MIN;
int32_t x28 = INT32_MIN;
int16_t x31 = 6;
int32_t x39 = INT32_MAX;
uint8_t x42 = UINT8_MAX;
static int32_t x44 = -10893204;
static int16_t x46 = -34;
static volatile uint64_t x48 = 8875034363216LLU;
static uint8_t x54 = UINT8_MAX;
int64_t x56 = 132650369548LL;
int16_t x73 = 117;
static int16_t x77 = 47;
volatile int32_t x80 = -1;
uint8_t x81 = UINT8_MAX;
int64_t x90 = INT64_MIN;
int32_t x91 = INT32_MIN;
int32_t x96 = INT32_MIN;
uint64_t x98 = 4170166587318142LLU;
int64_t x102 = 189715122LL;
uint16_t x103 = 14677U;
static int32_t x109 = 1390292;
uint16_t x113 = 7U;
int32_t t28 = 24821;
int32_t x117 = INT32_MAX;
volatile int8_t x128 = -4;
int32_t t31 = -1401318;
uint16_t x130 = UINT16_MAX;
uint16_t x134 = 38U;
uint8_t x156 = UINT8_MAX;
int64_t x159 = INT64_MIN;
int8_t x163 = -1;
static int32_t t40 = 3;
int8_t x173 = INT8_MIN;
volatile int64_t x174 = INT64_MIN;
static int64_t x176 = INT64_MAX;
int32_t t43 = 1084992;
int32_t t44 = 0;
uint64_t x181 = 48965000LLU;
int16_t x194 = INT16_MIN;
int16_t x195 = -1;
static int32_t x204 = INT32_MIN;
uint64_t x208 = UINT64_MAX;
int32_t t53 = -10;
int32_t x222 = INT32_MAX;
int64_t x225 = -274506LL;
volatile uint16_t x233 = 423U;
volatile int32_t t58 = 19919;
uint32_t x237 = 73799168U;
int8_t x243 = INT8_MIN;
static int32_t x244 = -1785127;
volatile int32_t t60 = 4438738;
volatile uint16_t x246 = 32336U;
static int64_t x247 = INT64_MAX;
int16_t x251 = INT16_MIN;
int64_t x252 = -1LL;
int32_t t63 = -153;
static int64_t x258 = -1603890879336563LL;
volatile uint8_t x260 = UINT8_MAX;
static volatile int32_t t64 = 479704772;
uint16_t x262 = 0U;
static int32_t t65 = -5866;
int64_t x269 = -1LL;
int8_t x271 = 1;
int32_t t67 = 23;
volatile int32_t t69 = -130863340;
volatile int8_t x281 = INT8_MIN;
int32_t t70 = 0;
volatile int16_t x286 = -1889;
volatile int16_t x299 = INT16_MIN;
int8_t x301 = -12;
volatile uint32_t x305 = 389555U;
static volatile int32_t t76 = 1;
int64_t x310 = -16698569LL;
uint16_t x311 = 48U;
volatile int32_t t77 = 35094;
int16_t x315 = INT16_MAX;
int16_t x317 = -157;
int64_t x318 = -2LL;
volatile int32_t t80 = 109;
static int32_t t81 = 51;
static volatile int32_t x330 = INT32_MIN;
int64_t x333 = -1LL;
uint8_t x336 = UINT8_MAX;
static uint8_t x338 = 6U;
int32_t x339 = INT32_MAX;
uint32_t x341 = 38U;
volatile int32_t t85 = -34543;
int8_t x348 = INT8_MIN;
volatile int16_t x350 = INT16_MAX;
int16_t x359 = INT16_MIN;
int16_t x367 = 9;
int16_t x371 = 3;
volatile int32_t t94 = 4427692;
static uint64_t x383 = 32513460326219815LLU;
uint8_t x387 = 7U;
uint64_t x388 = 701427LLU;
int16_t x391 = -1;
volatile int32_t t97 = 813901;
volatile int32_t t98 = 62999;
static uint8_t x397 = 107U;
volatile int64_t x400 = INT64_MAX;
static int32_t t99 = -6;


void f0(void) {
	static int64_t x1 = -1LL;
	uint64_t x2 = 3501035717090316062LLU;
	uint16_t x3 = 3U;
	int64_t x4 = -1LL;
	volatile int32_t t0 = -2;

	t0 = (x1<(x2<=(x3==x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	int32_t x7 = INT32_MAX;
	static int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 252964;

	t1 = (x5<(x6<=(x7==x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint32_t x10 = 3686870U;
	int64_t x12 = INT64_MAX;
	volatile int32_t t2 = -10409;

	t2 = (x9<(x10<=(x11==x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 1295U;
	volatile int8_t x15 = 1;
	volatile int32_t x16 = 3;

	t3 = (x13<(x14<=(x15==x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint32_t x19 = 641U;
	int64_t x20 = -1LL;

	t4 = (x17<(x18<=(x19==x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	static int32_t x22 = -2544;
	int8_t x23 = INT8_MAX;
	uint8_t x24 = 9U;
	static int32_t t5 = -126;

	t5 = (x21<(x22<=(x23==x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 57U;
	volatile uint8_t x27 = 20U;
	int32_t t6 = 23092369;

	t6 = (x25<(x26<=(x27==x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 20;
	int64_t x30 = INT64_MIN;
	int32_t x32 = INT32_MAX;
	volatile int32_t t7 = 1345153;

	t7 = (x29<(x30<=(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = UINT32_MAX;
	static int64_t x34 = -652631135LL;
	static int8_t x35 = 17;
	int8_t x36 = -1;
	int32_t t8 = -6;

	t8 = (x33<(x34<=(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 251210355U;
	volatile int64_t x38 = -1LL;
	int64_t x40 = -6214942953LL;
	static volatile int32_t t9 = 243048349;

	t9 = (x37<(x38<=(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	volatile int8_t x43 = -1;
	volatile int32_t t10 = 84120;

	t10 = (x41<(x42<=(x43==x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static volatile uint16_t x47 = 62U;
	volatile int32_t t11 = -1;

	t11 = (x45<(x46<=(x47==x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	uint32_t x50 = UINT32_MAX;
	int8_t x51 = -1;
	static int8_t x52 = -1;
	int32_t t12 = -91;

	t12 = (x49<(x50<=(x51==x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	static uint16_t x55 = 2U;
	volatile int32_t t13 = 1;

	t13 = (x53<(x54<=(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	uint64_t x58 = 10505790779LLU;
	uint8_t x59 = UINT8_MAX;
	int32_t x60 = 466252;
	int32_t t14 = 335827638;

	t14 = (x57<(x58<=(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 177U;
	static int16_t x62 = INT16_MIN;
	static int64_t x63 = -1LL;
	uint16_t x64 = UINT16_MAX;
	int32_t t15 = -418692;

	t15 = (x61<(x62<=(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	uint64_t x66 = 17181056409757167LLU;
	int8_t x67 = -5;
	uint8_t x68 = 1U;
	static int32_t t16 = 155;

	t16 = (x65<(x66<=(x67==x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 74104U;
	uint32_t x70 = 52U;
	volatile int8_t x71 = -1;
	int8_t x72 = INT8_MIN;
	volatile int32_t t17 = 326368726;

	t17 = (x69<(x70<=(x71==x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = 649U;
	volatile int64_t x75 = INT64_MAX;
	int8_t x76 = 23;
	int32_t t18 = 96;

	t18 = (x73<(x74<=(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = -4;
	int16_t x79 = -1;
	int32_t t19 = 25881;

	t19 = (x77<(x78<=(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = 190;
	int32_t x83 = -7965;
	int32_t x84 = INT32_MAX;
	static int32_t t20 = -532;

	t20 = (x81<(x82<=(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int8_t x86 = INT8_MIN;
	int32_t x87 = 944;
	uint64_t x88 = 8902431567118647604LLU;
	int32_t t21 = 43;

	t21 = (x85<(x86<=(x87==x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	volatile int64_t x92 = -1LL;
	static volatile int32_t t22 = 44384531;

	t22 = (x89<(x90<=(x91==x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MAX;
	int32_t x94 = 6714043;
	uint32_t x95 = 1767U;
	volatile int32_t t23 = 7786;

	t23 = (x93<(x94<=(x95==x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x97 = 127U;
	uint16_t x99 = 2369U;
	int64_t x100 = INT64_MIN;
	volatile int32_t t24 = -228709320;

	t24 = (x97<(x98<=(x99==x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MAX;
	static volatile int64_t x104 = -8107590708557LL;
	int32_t t25 = 144835;

	t25 = (x101<(x102<=(x103==x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	static int8_t x106 = 52;
	int8_t x107 = -9;
	volatile int32_t x108 = -1;
	volatile int32_t t26 = -4;

	t26 = (x105<(x106<=(x107==x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = INT32_MIN;
	static int32_t x111 = -1020365;
	int8_t x112 = INT8_MIN;
	static int32_t t27 = -10;

	t27 = (x109<(x110<=(x111==x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x114 = 1U;
	uint32_t x115 = UINT32_MAX;
	uint16_t x116 = 123U;

	t28 = (x113<(x114<=(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = INT16_MAX;
	volatile int64_t x119 = INT64_MIN;
	int8_t x120 = -10;
	int32_t t29 = 1;

	t29 = (x117<(x118<=(x119==x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 2U;
	uint32_t x122 = 238U;
	int32_t x123 = INT32_MAX;
	static int16_t x124 = INT16_MIN;
	static volatile int32_t t30 = -1471360;

	t30 = (x121<(x122<=(x123==x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = INT8_MIN;
	uint64_t x126 = 1212LLU;
	uint32_t x127 = 101210987U;

	t31 = (x125<(x126<=(x127==x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 322U;
	int32_t x131 = -1;
	int16_t x132 = -2;
	static int32_t t32 = -715;

	t32 = (x129<(x130<=(x131==x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = INT8_MAX;
	uint8_t x135 = 0U;
	static volatile int64_t x136 = INT64_MAX;
	volatile int32_t t33 = 402229;

	t33 = (x133<(x134<=(x135==x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 7LLU;
	int64_t x138 = 13502LL;
	int16_t x139 = -1;
	int16_t x140 = -1;
	volatile int32_t t34 = -8073;

	t34 = (x137<(x138<=(x139==x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -157813LL;
	static volatile int32_t x142 = -27;
	uint8_t x143 = 16U;
	int8_t x144 = 43;
	int32_t t35 = -28394;

	t35 = (x141<(x142<=(x143==x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	volatile uint8_t x146 = UINT8_MAX;
	int16_t x147 = INT16_MAX;
	volatile uint64_t x148 = 4796588LLU;
	volatile int32_t t36 = -44460694;

	t36 = (x145<(x146<=(x147==x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MIN;
	int16_t x150 = INT16_MIN;
	uint64_t x151 = 22865397186942LLU;
	uint64_t x152 = 0LLU;
	volatile int32_t t37 = 3971968;

	t37 = (x149<(x150<=(x151==x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x153 = 13954U;
	int8_t x154 = INT8_MIN;
	int32_t x155 = -5768805;
	volatile int32_t t38 = 28759;

	t38 = (x153<(x154<=(x155==x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MAX;
	uint64_t x158 = UINT64_MAX;
	uint8_t x160 = 3U;
	int32_t t39 = -238;

	t39 = (x157<(x158<=(x159==x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x161 = UINT8_MAX;
	volatile int8_t x162 = -1;
	int16_t x164 = -1;

	t40 = (x161<(x162<=(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	uint32_t x166 = 8U;
	int64_t x167 = -1LL;
	int64_t x168 = INT64_MAX;
	volatile int32_t t41 = -1;

	t41 = (x165<(x166<=(x167==x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 1U;
	int64_t x170 = INT64_MIN;
	int8_t x171 = 2;
	int32_t x172 = 490693492;
	volatile int32_t t42 = -1293;

	t42 = (x169<(x170<=(x171==x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x175 = UINT64_MAX;

	t43 = (x173<(x174<=(x175==x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int64_t x178 = -1592904LL;
	static uint16_t x179 = UINT16_MAX;
	int16_t x180 = INT16_MIN;

	t44 = (x177<(x178<=(x179==x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x182 = INT32_MIN;
	volatile int8_t x183 = INT8_MIN;
	static volatile int16_t x184 = -9565;
	volatile int32_t t45 = 115;

	t45 = (x181<(x182<=(x183==x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 0LLU;
	int8_t x186 = INT8_MIN;
	int32_t x187 = -1;
	int16_t x188 = -1;
	static volatile int32_t t46 = -10141394;

	t46 = (x185<(x186<=(x187==x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1735943655LL;
	int8_t x190 = INT8_MAX;
	int16_t x191 = -1;
	uint64_t x192 = 398783257493502554LLU;
	int32_t t47 = 1071706455;

	t47 = (x189<(x190<=(x191==x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int8_t x196 = INT8_MAX;
	int32_t t48 = -6;

	t48 = (x193<(x194<=(x195==x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = -1;
	int16_t x198 = -9637;
	int32_t x199 = INT32_MIN;
	uint8_t x200 = 0U;
	volatile int32_t t49 = 12170;

	t49 = (x197<(x198<=(x199==x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 8LL;
	int32_t x202 = INT32_MIN;
	volatile int16_t x203 = INT16_MIN;
	int32_t t50 = -20836817;

	t50 = (x201<(x202<=(x203==x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	int16_t x206 = -1;
	volatile int16_t x207 = -1;
	int32_t t51 = 2;

	t51 = (x205<(x206<=(x207==x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	uint16_t x210 = 7U;
	uint64_t x211 = 1024595180823010LLU;
	static int32_t x212 = INT32_MIN;
	int32_t t52 = 0;

	t52 = (x209<(x210<=(x211==x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 935873812;
	uint16_t x214 = 9429U;
	volatile uint64_t x215 = 1704LLU;
	static uint64_t x216 = 2661LLU;

	t53 = (x213<(x214<=(x215==x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 5U;
	uint32_t x218 = 416977U;
	uint8_t x219 = 1U;
	volatile int16_t x220 = INT16_MIN;
	volatile int32_t t54 = 28820;

	t54 = (x217<(x218<=(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	volatile int32_t x223 = -1;
	uint8_t x224 = 8U;
	volatile int32_t t55 = 2638;

	t55 = (x221<(x222<=(x223==x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = 212;
	int8_t x227 = 15;
	static int64_t x228 = INT64_MAX;
	int32_t t56 = 7830296;

	t56 = (x225<(x226<=(x227==x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	int32_t x230 = -1;
	static int8_t x231 = INT8_MIN;
	static int16_t x232 = INT16_MAX;
	static int32_t t57 = -2;

	t57 = (x229<(x230<=(x231==x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = INT64_MAX;
	int64_t x235 = INT64_MIN;
	static uint32_t x236 = 111780711U;

	t58 = (x233<(x234<=(x235==x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x238 = INT32_MIN;
	static int8_t x239 = -15;
	int64_t x240 = -49356770773202520LL;
	int32_t t59 = 5436015;

	t59 = (x237<(x238<=(x239==x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MAX;
	int32_t x242 = INT32_MIN;

	t60 = (x241<(x242<=(x243==x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int32_t x248 = INT32_MIN;
	static int32_t t61 = 81349;

	t61 = (x245<(x246<=(x247==x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 29;
	volatile int16_t x250 = 7;
	int32_t t62 = 14;

	t62 = (x249<(x250<=(x251==x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	uint8_t x254 = 12U;
	int32_t x255 = INT32_MIN;
	int32_t x256 = INT32_MAX;

	t63 = (x253<(x254<=(x255==x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 2U;
	uint64_t x259 = UINT64_MAX;

	t64 = (x257<(x258<=(x259==x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	int64_t x263 = INT64_MAX;
	int32_t x264 = 32;

	t65 = (x261<(x262<=(x263==x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = INT8_MIN;
	uint64_t x266 = UINT64_MAX;
	volatile int32_t x267 = INT32_MIN;
	int16_t x268 = -1;
	volatile int32_t t66 = -161641;

	t66 = (x265<(x266<=(x267==x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x270 = INT64_MAX;
	int8_t x272 = -1;

	t67 = (x269<(x270<=(x271==x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = INT32_MAX;
	volatile uint32_t x274 = 61971U;
	int32_t x275 = -6;
	uint16_t x276 = 39U;
	static volatile int32_t t68 = 3;

	t68 = (x273<(x274<=(x275==x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MIN;
	static int16_t x278 = INT16_MAX;
	uint8_t x279 = UINT8_MAX;
	int32_t x280 = -24397435;

	t69 = (x277<(x278<=(x279==x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x282 = -1;
	static uint16_t x283 = 4857U;
	int8_t x284 = 1;

	t70 = (x281<(x282<=(x283==x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -1;
	uint16_t x287 = UINT16_MAX;
	uint8_t x288 = 124U;
	volatile int32_t t71 = 0;

	t71 = (x285<(x286<=(x287==x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = 4;
	volatile int8_t x290 = INT8_MAX;
	static int64_t x291 = INT64_MAX;
	static uint8_t x292 = 8U;
	int32_t t72 = 1067382796;

	t72 = (x289<(x290<=(x291==x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x293 = -1;
	int64_t x294 = INT64_MAX;
	static int64_t x295 = INT64_MIN;
	int16_t x296 = INT16_MIN;
	volatile int32_t t73 = 1291;

	t73 = (x293<(x294<=(x295==x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 1U;
	uint64_t x298 = 609357289136286LLU;
	uint16_t x300 = 33U;
	int32_t t74 = -434597464;

	t74 = (x297<(x298<=(x299==x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x302 = 4;
	uint8_t x303 = 8U;
	volatile int32_t x304 = 5573329;
	int32_t t75 = -5231;

	t75 = (x301<(x302<=(x303==x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = INT16_MIN;
	static int8_t x307 = 57;
	volatile int16_t x308 = -2;

	t76 = (x305<(x306<=(x307==x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int8_t x312 = 1;

	t77 = (x309<(x310<=(x311==x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1LL;
	int32_t x314 = -1;
	uint8_t x316 = 1U;
	volatile int32_t t78 = -7;

	t78 = (x313<(x314<=(x315==x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x319 = UINT8_MAX;
	static uint16_t x320 = 7834U;
	volatile int32_t t79 = -11002;

	t79 = (x317<(x318<=(x319==x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	static int8_t x322 = INT8_MIN;
	uint64_t x323 = UINT64_MAX;
	uint32_t x324 = 9U;

	t80 = (x321<(x322<=(x323==x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 157874124LL;
	static volatile uint64_t x326 = 306576LLU;
	int64_t x327 = 34227365LL;
	static uint16_t x328 = UINT16_MAX;

	t81 = (x325<(x326<=(x327==x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = 1040U;
	volatile int32_t x331 = INT32_MIN;
	uint64_t x332 = 148LLU;
	int32_t t82 = -276165;

	t82 = (x329<(x330<=(x331==x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x334 = INT16_MIN;
	uint64_t x335 = 116LLU;
	volatile int32_t t83 = -9;

	t83 = (x333<(x334<=(x335==x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = -1LL;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t84 = 24046;

	t84 = (x337<(x338<=(x339==x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = -1LL;
	int16_t x343 = 0;
	uint64_t x344 = UINT64_MAX;

	t85 = (x341<(x342<=(x343==x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = UINT16_MAX;
	int32_t x346 = INT32_MIN;
	static uint8_t x347 = UINT8_MAX;
	volatile int32_t t86 = 27152668;

	t86 = (x345<(x346<=(x347==x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	int16_t x351 = INT16_MIN;
	int16_t x352 = INT16_MIN;
	volatile int32_t t87 = 0;

	t87 = (x349<(x350<=(x351==x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	int64_t x354 = INT64_MIN;
	int8_t x355 = -4;
	int32_t x356 = -1;
	int32_t t88 = 30;

	t88 = (x353<(x354<=(x355==x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = UINT8_MAX;
	int16_t x358 = -3139;
	static int16_t x360 = INT16_MAX;
	volatile int32_t t89 = 735132589;

	t89 = (x357<(x358<=(x359==x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x361 = UINT64_MAX;
	uint16_t x362 = UINT16_MAX;
	volatile int32_t x363 = INT32_MAX;
	volatile int8_t x364 = -4;
	static int32_t t90 = 622;

	t90 = (x361<(x362<=(x363==x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MAX;
	uint64_t x366 = 2524245117LLU;
	int64_t x368 = INT64_MIN;
	static volatile int32_t t91 = 15585;

	t91 = (x365<(x366<=(x367==x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -1;
	int16_t x370 = INT16_MAX;
	static volatile int64_t x372 = INT64_MIN;
	volatile int32_t t92 = -510;

	t92 = (x369<(x370<=(x371==x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 4681;
	int64_t x374 = 26LL;
	int64_t x375 = 389501LL;
	uint32_t x376 = 2U;
	int32_t t93 = -2;

	t93 = (x373<(x374<=(x375==x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 1261LLU;
	int64_t x378 = 3728811690561LL;
	volatile int8_t x379 = INT8_MIN;
	int64_t x380 = -199439LL;

	t94 = (x377<(x378<=(x379==x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MIN;
	int16_t x382 = INT16_MIN;
	int8_t x384 = 63;
	volatile int32_t t95 = -9623;

	t95 = (x381<(x382<=(x383==x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 30616994U;
	volatile uint32_t x386 = 1436352U;
	static int32_t t96 = 1358;

	t96 = (x385<(x386<=(x387==x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = -5;
	uint16_t x390 = 2U;
	volatile uint8_t x392 = 125U;

	t97 = (x389<(x390<=(x391==x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	uint16_t x394 = UINT16_MAX;
	volatile int16_t x395 = -1;
	int32_t x396 = INT32_MAX;

	t98 = (x393<(x394<=(x395==x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x398 = -750;
	int16_t x399 = -862;

	t99 = (x397<(x398<=(x399==x400)));

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

