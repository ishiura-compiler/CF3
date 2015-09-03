#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = INT8_MAX;
uint64_t x4 = UINT64_MAX;
static int32_t t2 = 827435567;
int8_t x15 = -3;
int16_t x26 = INT16_MIN;
static int8_t x33 = -2;
int16_t x39 = -964;
static int8_t x46 = INT8_MAX;
static uint8_t x51 = 1U;
volatile int8_t x56 = INT8_MIN;
uint32_t x62 = 328U;
int8_t x64 = INT8_MIN;
uint8_t x67 = 0U;
int64_t x68 = -1LL;
static int16_t x72 = INT16_MIN;
uint64_t x74 = 3167779877572LLU;
volatile uint16_t x75 = 862U;
uint16_t x80 = UINT16_MAX;
uint64_t x81 = UINT64_MAX;
static volatile int64_t x90 = -24555LL;
uint32_t x102 = 489U;
uint16_t x106 = 1U;
int8_t x108 = -1;
uint64_t x109 = UINT64_MAX;
volatile uint32_t x111 = UINT32_MAX;
int32_t x112 = INT32_MIN;
int32_t t27 = -485777000;
volatile int64_t x121 = INT64_MIN;
uint64_t x124 = UINT64_MAX;
int64_t x127 = -3009LL;
int8_t x129 = -45;
uint64_t x136 = UINT64_MAX;
uint32_t x139 = 342373U;
volatile int32_t t34 = -659795;
int64_t x141 = -1LL;
int32_t x142 = INT32_MIN;
static int64_t x143 = INT64_MIN;
static volatile int16_t x147 = -4;
int64_t x149 = INT64_MAX;
int8_t x155 = INT8_MIN;
volatile int32_t t38 = 0;
uint32_t x161 = 11148U;
uint64_t x162 = 24512716581291009LLU;
static int64_t x163 = -1LL;
int32_t x166 = INT32_MAX;
int32_t x168 = INT32_MAX;
int32_t t42 = -169;
uint64_t x175 = 452623322106LLU;
volatile int32_t t43 = -197054;
int16_t x186 = -1;
int32_t t46 = -1002;
int8_t x189 = INT8_MIN;
int8_t x197 = INT8_MAX;
static uint8_t x202 = 34U;
int64_t x203 = -76LL;
volatile int32_t t50 = 1022;
int16_t x205 = 485;
int16_t x209 = -8;
static volatile int32_t x211 = -1;
static int32_t x216 = INT32_MIN;
int32_t t54 = 0;
volatile int32_t t57 = -11049381;
int32_t x236 = -1;
volatile int32_t t59 = 419;
int8_t x247 = INT8_MIN;
static uint32_t x248 = 25995U;
static int64_t x252 = INT64_MAX;
int64_t x255 = -1LL;
static int8_t x265 = -1;
uint8_t x266 = UINT8_MAX;
int8_t x268 = INT8_MAX;
int8_t x271 = -1;
uint64_t x275 = 8366135895LLU;
volatile uint8_t x276 = 5U;
uint16_t x277 = 5647U;
volatile int32_t t69 = -27105244;
int8_t x284 = INT8_MIN;
int32_t x286 = 921928;
static uint16_t x288 = 105U;
uint8_t x290 = UINT8_MAX;
uint16_t x294 = 12828U;
int16_t x295 = INT16_MAX;
static volatile int32_t t74 = -182;
static volatile uint64_t x310 = 190646LLU;
uint8_t x314 = UINT8_MAX;
int64_t x320 = -1030935022310LL;
static int32_t t81 = 38;
volatile int8_t x336 = INT8_MIN;
int64_t x339 = -6721633370631633LL;
volatile int32_t x343 = -1;
int32_t x345 = INT32_MIN;
int32_t x346 = INT32_MIN;
int32_t x349 = INT32_MIN;
int64_t x355 = 37897609133LL;
static int32_t t88 = -15207;
volatile uint8_t x359 = UINT8_MAX;
volatile int32_t t89 = -1846020;
static volatile int32_t t90 = 10;
int32_t x365 = INT32_MIN;
static volatile int16_t x368 = -1;
volatile int32_t t91 = 1011114033;
static uint64_t x371 = 28766396566LLU;
int32_t x372 = 84;
int64_t x373 = -32312LL;
int64_t x374 = 4511808LL;
volatile int8_t x376 = 1;
static volatile uint32_t x380 = 57595951U;
uint16_t x383 = UINT16_MAX;
volatile int32_t t96 = -1643;
static volatile int8_t x389 = -53;
volatile int32_t t97 = -73864939;
int32_t t98 = 0;


void f0(void) {
	int32_t x2 = -194347683;
	uint32_t x3 = UINT32_MAX;
	static volatile int32_t t0 = 15628;

	t0 = (x1<(x2<=(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -2;
	int8_t x6 = INT8_MIN;
	uint32_t x7 = UINT32_MAX;
	int32_t x8 = -1;
	int32_t t1 = 49;

	t1 = (x5<(x6<=(x7<x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	int8_t x10 = INT8_MIN;
	uint8_t x11 = UINT8_MAX;
	static volatile int64_t x12 = INT64_MIN;

	t2 = (x9<(x10<=(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 18;
	static uint8_t x14 = UINT8_MAX;
	int8_t x16 = INT8_MIN;
	int32_t t3 = -610551;

	t3 = (x13<(x14<=(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -7;
	int64_t x18 = INT64_MIN;
	int32_t x19 = INT32_MIN;
	volatile uint16_t x20 = 0U;
	volatile int32_t t4 = -15963;

	t4 = (x17<(x18<=(x19<x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = UINT8_MAX;
	volatile int32_t x22 = INT32_MIN;
	volatile int64_t x23 = INT64_MIN;
	volatile uint64_t x24 = UINT64_MAX;
	int32_t t5 = -80310049;

	t5 = (x21<(x22<=(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 56U;
	int64_t x27 = 0LL;
	volatile int64_t x28 = -1LL;
	int32_t t6 = -2;

	t6 = (x25<(x26<=(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	static int64_t x30 = -23755418454LL;
	int8_t x31 = -1;
	uint64_t x32 = 47736927LLU;
	volatile int32_t t7 = 178;

	t7 = (x29<(x30<=(x31<x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x34 = 503817078U;
	static int16_t x35 = INT16_MIN;
	int8_t x36 = 62;
	volatile int32_t t8 = -23764383;

	t8 = (x33<(x34<=(x35<x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -3471119LL;
	uint8_t x38 = UINT8_MAX;
	uint8_t x40 = 29U;
	int32_t t9 = -1831479;

	t9 = (x37<(x38<=(x39<x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	int64_t x42 = INT64_MIN;
	static volatile int16_t x43 = -1;
	int16_t x44 = 1736;
	volatile int32_t t10 = 8;

	t10 = (x41<(x42<=(x43<x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x45 = INT32_MAX;
	int16_t x47 = INT16_MIN;
	static int8_t x48 = INT8_MIN;
	volatile int32_t t11 = -1515740;

	t11 = (x45<(x46<=(x47<x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int64_t x50 = INT64_MAX;
	int32_t x52 = 31910;
	int32_t t12 = -18322296;

	t12 = (x49<(x50<=(x51<x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 1U;
	int8_t x54 = INT8_MIN;
	static int8_t x55 = -57;
	volatile int32_t t13 = -1352887;

	t13 = (x53<(x54<=(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = 1;
	volatile int32_t x58 = INT32_MAX;
	volatile int64_t x59 = -28017716LL;
	uint32_t x60 = 810651U;
	volatile int32_t t14 = 239;

	t14 = (x57<(x58<=(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MAX;
	static int8_t x63 = INT8_MIN;
	int32_t t15 = -18697036;

	t15 = (x61<(x62<=(x63<x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	volatile int16_t x66 = INT16_MIN;
	int32_t t16 = -2711;

	t16 = (x65<(x66<=(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 27U;
	static int8_t x70 = INT8_MIN;
	int16_t x71 = INT16_MIN;
	volatile int32_t t17 = -6476426;

	t17 = (x69<(x70<=(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 402019LLU;
	int8_t x76 = -1;
	int32_t t18 = 3;

	t18 = (x73<(x74<=(x75<x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	static int32_t x78 = INT32_MIN;
	uint16_t x79 = UINT16_MAX;
	volatile int32_t t19 = 22470;

	t19 = (x77<(x78<=(x79<x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MAX;
	uint64_t x83 = UINT64_MAX;
	volatile uint32_t x84 = 303283846U;
	static int32_t t20 = -8586;

	t20 = (x81<(x82<=(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	int32_t x86 = 3465;
	uint64_t x87 = 6654LLU;
	int8_t x88 = 28;
	int32_t t21 = -81;

	t21 = (x85<(x86<=(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	volatile uint16_t x91 = 140U;
	uint16_t x92 = 69U;
	int32_t t22 = -34545;

	t22 = (x89<(x90<=(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	int64_t x94 = -1LL;
	int32_t x95 = 234760;
	uint64_t x96 = UINT64_MAX;
	volatile int32_t t23 = -1;

	t23 = (x93<(x94<=(x95<x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -2;
	int32_t x98 = INT32_MAX;
	int64_t x99 = INT64_MIN;
	int64_t x100 = -249383019871763434LL;
	int32_t t24 = 245261898;

	t24 = (x97<(x98<=(x99<x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 1U;
	int16_t x103 = INT16_MAX;
	int16_t x104 = INT16_MAX;
	volatile int32_t t25 = 23398;

	t25 = (x101<(x102<=(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	uint32_t x107 = 4824U;
	int32_t t26 = -17;

	t26 = (x105<(x106<=(x107<x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = 0U;

	t27 = (x109<(x110<=(x111<x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = -1;
	int32_t x114 = INT32_MIN;
	uint32_t x115 = 193957090U;
	uint16_t x116 = 1348U;
	volatile int32_t t28 = -24361109;

	t28 = (x113<(x114<=(x115<x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MIN;
	uint64_t x118 = 1192159881876972564LLU;
	int16_t x119 = 0;
	uint64_t x120 = UINT64_MAX;
	volatile int32_t t29 = 248129;

	t29 = (x117<(x118<=(x119<x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = -250455757878336086LL;
	static volatile uint64_t x123 = 23831424638251LLU;
	static volatile int32_t t30 = -644744;

	t30 = (x121<(x122<=(x123<x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int16_t x126 = -1;
	int8_t x128 = 1;
	int32_t t31 = -381088985;

	t31 = (x125<(x126<=(x127<x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = INT64_MIN;
	static int64_t x131 = INT64_MAX;
	int16_t x132 = -1;
	volatile int32_t t32 = -4;

	t32 = (x129<(x130<=(x131<x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = 241;
	static uint8_t x134 = UINT8_MAX;
	uint16_t x135 = UINT16_MAX;
	volatile int32_t t33 = 779;

	t33 = (x133<(x134<=(x135<x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 118232215096LLU;
	int32_t x138 = INT32_MIN;
	int16_t x140 = 7;

	t34 = (x137<(x138<=(x139<x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x144 = 1469766704552LL;
	volatile int32_t t35 = 7363771;

	t35 = (x141<(x142<=(x143<x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x145 = INT32_MIN;
	static int64_t x146 = INT64_MIN;
	volatile uint32_t x148 = UINT32_MAX;
	int32_t t36 = 18;

	t36 = (x145<(x146<=(x147<x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x150 = 174862247738509LL;
	static volatile uint64_t x151 = 9809729LLU;
	volatile uint16_t x152 = UINT16_MAX;
	int32_t t37 = 914098;

	t37 = (x149<(x150<=(x151<x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x153 = 2677880U;
	int16_t x154 = INT16_MIN;
	volatile int16_t x156 = INT16_MAX;

	t38 = (x153<(x154<=(x155<x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = -1;
	volatile uint16_t x158 = 13416U;
	volatile int8_t x159 = INT8_MAX;
	int64_t x160 = INT64_MAX;
	volatile int32_t t39 = 51987;

	t39 = (x157<(x158<=(x159<x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x164 = 5315192;
	volatile int32_t t40 = -605559115;

	t40 = (x161<(x162<=(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	static int64_t x167 = 9089LL;
	int32_t t41 = -371;

	t41 = (x165<(x166<=(x167<x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = -1;
	int8_t x170 = INT8_MAX;
	uint16_t x171 = 2033U;
	volatile int64_t x172 = 2103262581471LL;

	t42 = (x169<(x170<=(x171<x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = 3;
	uint16_t x174 = UINT16_MAX;
	volatile int16_t x176 = -17;

	t43 = (x173<(x174<=(x175<x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	uint8_t x178 = 4U;
	int64_t x179 = INT64_MIN;
	uint16_t x180 = 25U;
	int32_t t44 = 830;

	t44 = (x177<(x178<=(x179<x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int64_t x182 = INT64_MIN;
	int16_t x183 = 1;
	int32_t x184 = INT32_MAX;
	static int32_t t45 = -99881;

	t45 = (x181<(x182<=(x183<x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	volatile uint16_t x187 = UINT16_MAX;
	uint64_t x188 = UINT64_MAX;

	t46 = (x185<(x186<=(x187<x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x190 = INT64_MIN;
	uint64_t x191 = 108702522103205236LLU;
	int16_t x192 = INT16_MIN;
	volatile int32_t t47 = 1;

	t47 = (x189<(x190<=(x191<x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = INT64_MIN;
	volatile int8_t x194 = 10;
	volatile uint64_t x195 = 392290856077LLU;
	int8_t x196 = INT8_MIN;
	static int32_t t48 = -2394;

	t48 = (x193<(x194<=(x195<x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = INT64_MAX;
	int32_t x199 = 277685878;
	uint8_t x200 = 1U;
	volatile int32_t t49 = 28;

	t49 = (x197<(x198<=(x199<x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	int16_t x204 = INT16_MIN;

	t50 = (x201<(x202<=(x203<x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = INT16_MIN;
	static int16_t x207 = 108;
	int32_t x208 = -1;
	volatile int32_t t51 = 78985800;

	t51 = (x205<(x206<=(x207<x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x210 = 13U;
	volatile int32_t x212 = -1;
	int32_t t52 = -546;

	t52 = (x209<(x210<=(x211<x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 4310U;
	int32_t x214 = -13712028;
	int16_t x215 = 987;
	int32_t t53 = 28127;

	t53 = (x213<(x214<=(x215<x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = UINT16_MAX;
	uint8_t x218 = 7U;
	static uint64_t x219 = 496716931LLU;
	int16_t x220 = -202;

	t54 = (x217<(x218<=(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint8_t x221 = 5U;
	int32_t x222 = -103424030;
	uint16_t x223 = 1U;
	volatile int32_t x224 = INT32_MIN;
	int32_t t55 = -619172686;

	t55 = (x221<(x222<=(x223<x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 16039U;
	int16_t x226 = -11233;
	int64_t x227 = 246843154LL;
	uint8_t x228 = 1U;
	int32_t t56 = 1;

	t56 = (x225<(x226<=(x227<x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = 25;
	uint16_t x230 = 2142U;
	static int16_t x231 = INT16_MIN;
	int16_t x232 = INT16_MIN;

	t57 = (x229<(x230<=(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	static volatile int64_t x234 = INT64_MIN;
	int64_t x235 = INT64_MAX;
	int32_t t58 = -289643718;

	t58 = (x233<(x234<=(x235<x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x237 = 2U;
	int8_t x238 = INT8_MAX;
	static uint32_t x239 = 61U;
	uint64_t x240 = UINT64_MAX;

	t59 = (x237<(x238<=(x239<x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 1U;
	int16_t x242 = INT16_MAX;
	static int8_t x243 = -1;
	uint32_t x244 = 1910U;
	int32_t t60 = 174366;

	t60 = (x241<(x242<=(x243<x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	volatile uint8_t x246 = 53U;
	int32_t t61 = -8350400;

	t61 = (x245<(x246<=(x247<x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = INT8_MIN;
	int16_t x250 = -667;
	volatile int32_t x251 = 19354;
	int32_t t62 = 2664850;

	t62 = (x249<(x250<=(x251<x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	static uint8_t x254 = 1U;
	int8_t x256 = INT8_MIN;
	int32_t t63 = -392;

	t63 = (x253<(x254<=(x255<x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 5676114610861LLU;
	int32_t x258 = INT32_MAX;
	int16_t x259 = INT16_MAX;
	uint64_t x260 = 15421658496220LLU;
	int32_t t64 = -2981915;

	t64 = (x257<(x258<=(x259<x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -56844067LL;
	int16_t x262 = -4108;
	uint64_t x263 = 325978364716868LLU;
	int16_t x264 = INT16_MIN;
	static volatile int32_t t65 = -2;

	t65 = (x261<(x262<=(x263<x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x267 = -1;
	volatile int32_t t66 = 121813796;

	t66 = (x265<(x266<=(x267<x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x269 = 676174U;
	uint8_t x270 = 30U;
	int32_t x272 = -1;
	static int32_t t67 = 0;

	t67 = (x269<(x270<=(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 190U;
	volatile uint8_t x274 = 6U;
	static int32_t t68 = -87146392;

	t68 = (x273<(x274<=(x275<x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x278 = -1;
	volatile int32_t x279 = 1313246;
	uint8_t x280 = UINT8_MAX;

	t69 = (x277<(x278<=(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = -3;
	int8_t x282 = -1;
	int64_t x283 = -1LL;
	int32_t t70 = 49464126;

	t70 = (x281<(x282<=(x283<x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	volatile int32_t x287 = -1;
	volatile int32_t t71 = -3999573;

	t71 = (x285<(x286<=(x287<x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	int32_t x291 = INT32_MIN;
	int32_t x292 = INT32_MAX;
	int32_t t72 = -168891;

	t72 = (x289<(x290<=(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	uint32_t x296 = 14U;
	int32_t t73 = 1;

	t73 = (x293<(x294<=(x295<x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 4476629LLU;
	int8_t x298 = INT8_MAX;
	static int32_t x299 = INT32_MIN;
	uint32_t x300 = 15969U;

	t74 = (x297<(x298<=(x299<x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -117438507;
	uint8_t x302 = 18U;
	int64_t x303 = -299560046335449941LL;
	uint8_t x304 = 5U;
	volatile int32_t t75 = -181602;

	t75 = (x301<(x302<=(x303<x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 284U;
	uint64_t x306 = UINT64_MAX;
	int16_t x307 = INT16_MIN;
	int16_t x308 = INT16_MIN;
	static volatile int32_t t76 = 1105364;

	t76 = (x305<(x306<=(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 55U;
	volatile int16_t x311 = -3999;
	static int64_t x312 = INT64_MAX;
	volatile int32_t t77 = 106;

	t77 = (x309<(x310<=(x311<x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 39U;
	static int64_t x315 = -408LL;
	static int8_t x316 = -1;
	volatile int32_t t78 = -14108;

	t78 = (x313<(x314<=(x315<x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = 0U;
	int8_t x318 = -1;
	volatile int32_t x319 = 0;
	static volatile int32_t t79 = -2627926;

	t79 = (x317<(x318<=(x319<x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 5930U;
	uint8_t x322 = 0U;
	uint8_t x323 = 14U;
	uint16_t x324 = 75U;
	volatile int32_t t80 = 0;

	t80 = (x321<(x322<=(x323<x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	volatile int32_t x326 = -1;
	int64_t x327 = INT64_MAX;
	int16_t x328 = INT16_MAX;

	t81 = (x325<(x326<=(x327<x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = 16;
	uint32_t x330 = UINT32_MAX;
	int32_t x331 = INT32_MAX;
	uint8_t x332 = 1U;
	int32_t t82 = 0;

	t82 = (x329<(x330<=(x331<x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MAX;
	uint32_t x334 = 6U;
	uint8_t x335 = UINT8_MAX;
	static volatile int32_t t83 = -5;

	t83 = (x333<(x334<=(x335<x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MAX;
	int64_t x338 = -1LL;
	int16_t x340 = INT16_MAX;
	int32_t t84 = 420;

	t84 = (x337<(x338<=(x339<x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x341 = 1U;
	static int64_t x342 = 1LL;
	static int64_t x344 = INT64_MAX;
	static volatile int32_t t85 = 678181;

	t85 = (x341<(x342<=(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x347 = -1LL;
	volatile uint64_t x348 = UINT64_MAX;
	int32_t t86 = 0;

	t86 = (x345<(x346<=(x347<x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x350 = -1LL;
	int32_t x351 = -411804;
	int32_t x352 = -27;
	int32_t t87 = -7971;

	t87 = (x349<(x350<=(x351<x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	uint64_t x354 = 204LLU;
	int8_t x356 = -1;

	t88 = (x353<(x354<=(x355<x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = UINT32_MAX;
	int16_t x358 = -2;
	uint16_t x360 = 22U;

	t89 = (x357<(x358<=(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	uint32_t x362 = 777U;
	uint32_t x363 = 1121189701U;
	uint8_t x364 = 17U;

	t90 = (x361<(x362<=(x363<x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = -1LL;
	volatile int64_t x367 = INT64_MIN;

	t91 = (x365<(x366<=(x367<x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = INT32_MIN;
	int8_t x370 = INT8_MAX;
	int32_t t92 = -2226985;

	t92 = (x369<(x370<=(x371<x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x375 = INT8_MAX;
	volatile int32_t t93 = -360;

	t93 = (x373<(x374<=(x375<x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = -7;
	int16_t x378 = -645;
	int32_t x379 = -315119;
	int32_t t94 = -98432098;

	t94 = (x377<(x378<=(x379<x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x381 = 4385U;
	int8_t x382 = INT8_MAX;
	volatile int16_t x384 = INT16_MAX;
	static int32_t t95 = 23559;

	t95 = (x381<(x382<=(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x385 = UINT64_MAX;
	int8_t x386 = INT8_MIN;
	static int16_t x387 = INT16_MIN;
	int64_t x388 = 22228071213545975LL;

	t96 = (x385<(x386<=(x387<x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x390 = 19855LLU;
	int32_t x391 = 992;
	uint64_t x392 = 5468404929LLU;

	t97 = (x389<(x390<=(x391<x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = UINT8_MAX;
	static int8_t x394 = INT8_MIN;
	int64_t x395 = 167922250LL;
	volatile uint16_t x396 = 32677U;

	t98 = (x393<(x394<=(x395<x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 7373U;
	int8_t x398 = INT8_MAX;
	int16_t x399 = INT16_MIN;
	uint32_t x400 = UINT32_MAX;
	volatile int32_t t99 = -4;

	t99 = (x397<(x398<=(x399<x400)));

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

