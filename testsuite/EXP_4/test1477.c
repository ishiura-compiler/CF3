#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = 1U;
volatile int32_t t1 = -259384403;
volatile int32_t t2 = -6;
int8_t x15 = INT8_MIN;
int8_t x16 = INT8_MIN;
uint8_t x19 = UINT8_MAX;
uint8_t x24 = 0U;
volatile int16_t x25 = -433;
static int8_t x38 = INT8_MAX;
volatile int64_t x41 = -3248461969721107LL;
static int16_t x52 = INT16_MIN;
static int32_t x53 = -1;
static volatile int64_t x56 = 36248LL;
volatile int32_t t14 = -212645275;
volatile int16_t x66 = -10;
int32_t t16 = 32;
int8_t x69 = INT8_MIN;
int64_t x72 = INT64_MAX;
static volatile int32_t t17 = -576;
int16_t x74 = 14202;
int64_t x76 = -719711387LL;
int64_t x79 = INT64_MAX;
uint16_t x81 = 774U;
volatile int32_t x82 = 18;
uint16_t x90 = 156U;
int8_t x91 = INT8_MAX;
int8_t x96 = INT8_MAX;
int16_t x98 = -1;
uint64_t x100 = UINT64_MAX;
uint16_t x101 = 5U;
static volatile int32_t t25 = 44509238;
int64_t x105 = INT64_MIN;
static volatile int16_t x107 = INT16_MAX;
int8_t x114 = 3;
int32_t t28 = -273;
uint64_t x119 = 82LLU;
volatile int32_t t29 = 0;
volatile int32_t x122 = 23875;
int16_t x124 = 6;
int64_t x128 = -522681LL;
int32_t x129 = INT32_MIN;
static int16_t x134 = 123;
int64_t x139 = -61381LL;
int32_t x140 = INT32_MIN;
int8_t x151 = INT8_MAX;
int8_t x152 = INT8_MAX;
static volatile int16_t x160 = INT16_MAX;
volatile int32_t t40 = -212379371;
int64_t x168 = -1LL;
volatile int32_t t41 = 448331983;
uint8_t x170 = UINT8_MAX;
volatile int32_t t42 = 7;
volatile int8_t x175 = INT8_MIN;
int16_t x176 = -10;
int32_t t43 = -11;
int64_t x179 = 12961LL;
int32_t x184 = INT32_MIN;
int64_t x197 = -1LL;
int64_t x198 = 3916311268706LL;
static uint32_t x201 = 287U;
int32_t t50 = 786;
uint64_t x206 = 88452220965817LLU;
volatile uint32_t x220 = 30348013U;
int8_t x221 = INT8_MAX;
volatile int16_t x227 = -1;
volatile int8_t x228 = 30;
static int32_t t56 = -30;
static int16_t x231 = -1;
int32_t t57 = 1;
uint64_t x237 = UINT64_MAX;
volatile int32_t t59 = 1;
volatile int16_t x242 = -1;
uint32_t x245 = 183768977U;
static volatile int64_t x249 = INT64_MIN;
volatile int64_t x251 = 0LL;
volatile int32_t t63 = -22931859;
static volatile int64_t x257 = INT64_MAX;
int64_t x258 = 3090972LL;
int8_t x262 = -1;
uint8_t x266 = 0U;
static volatile int64_t x270 = INT64_MIN;
uint32_t x272 = 27455U;
static volatile int32_t t67 = 78890015;
volatile uint32_t x276 = 231073122U;
int8_t x285 = 15;
static volatile int32_t t71 = -118886273;
static volatile int32_t t72 = -1667573;
volatile uint32_t x294 = 719977U;
int32_t x295 = -5435107;
volatile int32_t t73 = -493690481;
static uint8_t x299 = 34U;
int16_t x300 = INT16_MIN;
static uint8_t x304 = UINT8_MAX;
static volatile uint64_t x306 = 65359939LLU;
static int64_t x308 = INT64_MIN;
int16_t x328 = INT16_MIN;
volatile int16_t x332 = 4000;
int32_t t82 = -497258;
uint32_t x337 = 1089U;
uint16_t x341 = 2670U;
int16_t x343 = -7;
static volatile int32_t t85 = -1388720;
int32_t x347 = -1;
uint16_t x349 = 442U;
static int16_t x350 = INT16_MAX;
static int8_t x353 = 1;
int16_t x354 = INT16_MIN;
uint16_t x356 = 1752U;
int16_t x358 = INT16_MIN;
int16_t x359 = INT16_MAX;
int16_t x366 = 2991;
volatile uint64_t x367 = 20482813810229LLU;
int64_t x375 = INT64_MIN;
int64_t x381 = INT64_MIN;
static int16_t x387 = INT16_MIN;
int16_t x396 = -59;
uint32_t x400 = UINT32_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int16_t x2 = -1;
	volatile uint8_t x3 = UINT8_MAX;
	int64_t x4 = INT64_MAX;
	volatile int32_t t0 = -10;

	t0 = (x1==(x2<=(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = 11;
	static uint64_t x7 = UINT64_MAX;
	int8_t x8 = INT8_MIN;

	t1 = (x5==(x6<=(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static uint64_t x10 = 29479961197921666LLU;
	uint64_t x11 = UINT64_MAX;
	uint8_t x12 = UINT8_MAX;

	t2 = (x9==(x10<=(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -3;
	uint16_t x14 = 46U;
	volatile int32_t t3 = -78216;

	t3 = (x13==(x14<=(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int8_t x18 = 5;
	uint8_t x20 = 3U;
	int32_t t4 = 419844824;

	t4 = (x17==(x18<=(x19<x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	uint8_t x22 = 5U;
	static int64_t x23 = INT64_MIN;
	int32_t t5 = -694342;

	t5 = (x21==(x22<=(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 15110U;
	int64_t x27 = INT64_MAX;
	static volatile int64_t x28 = INT64_MIN;
	volatile int32_t t6 = 8699784;

	t6 = (x25==(x26<=(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	uint16_t x30 = UINT16_MAX;
	static int64_t x31 = INT64_MIN;
	uint8_t x32 = UINT8_MAX;
	int32_t t7 = -17310;

	t7 = (x29==(x30<=(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	static int32_t x34 = INT32_MAX;
	static int32_t x35 = -1;
	int64_t x36 = 325LL;
	volatile int32_t t8 = -656030180;

	t8 = (x33==(x34<=(x35<x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -1;
	int16_t x39 = -1;
	static int32_t x40 = INT32_MIN;
	int32_t t9 = 17949;

	t9 = (x37==(x38<=(x39<x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = INT64_MIN;
	uint32_t x43 = UINT32_MAX;
	static volatile uint16_t x44 = 190U;
	static int32_t t10 = -63;

	t10 = (x41==(x42<=(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 1899901994U;
	int64_t x46 = INT64_MIN;
	static uint8_t x47 = 1U;
	int64_t x48 = INT64_MIN;
	volatile int32_t t11 = -60;

	t11 = (x45==(x46<=(x47<x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -1;
	uint32_t x50 = UINT32_MAX;
	int64_t x51 = 17385575LL;
	volatile int32_t t12 = -261598555;

	t12 = (x49==(x50<=(x51<x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = 14218981LL;
	volatile uint64_t x55 = UINT64_MAX;
	volatile int32_t t13 = -1;

	t13 = (x53==(x54<=(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	uint32_t x58 = UINT32_MAX;
	static uint32_t x59 = 6996006U;
	int32_t x60 = -4553;

	t14 = (x57==(x58<=(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MIN;
	uint64_t x62 = UINT64_MAX;
	int64_t x63 = INT64_MAX;
	uint16_t x64 = 5449U;
	int32_t t15 = 268512839;

	t15 = (x61==(x62<=(x63<x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 158569949959LL;
	static int8_t x67 = INT8_MIN;
	uint64_t x68 = 48LLU;

	t16 = (x65==(x66<=(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = 7;
	int32_t x71 = INT32_MIN;

	t17 = (x69==(x70<=(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = -1;
	uint16_t x75 = UINT16_MAX;
	int32_t t18 = -78;

	t18 = (x73==(x74<=(x75<x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	int16_t x78 = 1210;
	static int64_t x80 = INT64_MIN;
	int32_t t19 = 232305289;

	t19 = (x77==(x78<=(x79<x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x83 = 121499702LLU;
	static volatile int16_t x84 = INT16_MIN;
	int32_t t20 = 587036559;

	t20 = (x81==(x82<=(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	static uint16_t x86 = UINT16_MAX;
	int16_t x87 = INT16_MIN;
	static uint64_t x88 = UINT64_MAX;
	volatile int32_t t21 = -55681;

	t21 = (x85==(x86<=(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 439140427LLU;
	volatile uint16_t x92 = 227U;
	int32_t t22 = -6085503;

	t22 = (x89==(x90<=(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	int32_t x94 = -1;
	int32_t x95 = -80568;
	volatile int32_t t23 = 0;

	t23 = (x93==(x94<=(x95<x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	uint32_t x99 = 1106106464U;
	volatile int32_t t24 = -117100163;

	t24 = (x97==(x98<=(x99<x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = INT64_MAX;
	uint64_t x103 = 211151114801359517LLU;
	int8_t x104 = -1;

	t25 = (x101==(x102<=(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = UINT32_MAX;
	volatile int64_t x108 = -1LL;
	int32_t t26 = 1;

	t26 = (x105==(x106<=(x107<x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 3695947462769LLU;
	int8_t x110 = INT8_MAX;
	volatile int8_t x111 = -1;
	static int8_t x112 = INT8_MIN;
	int32_t t27 = 7888515;

	t27 = (x109==(x110<=(x111<x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x113 = UINT64_MAX;
	uint8_t x115 = UINT8_MAX;
	static uint64_t x116 = 4386349637259LLU;

	t28 = (x113==(x114<=(x115<x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int8_t x118 = INT8_MIN;
	uint8_t x120 = 0U;

	t29 = (x117==(x118<=(x119<x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	int64_t x123 = 37034506747010570LL;
	int32_t t30 = -200;

	t30 = (x121==(x122<=(x123<x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = 5679473370721LLU;
	int32_t x126 = INT32_MIN;
	static int64_t x127 = 31571LL;
	volatile int32_t t31 = 243331;

	t31 = (x125==(x126<=(x127<x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x130 = 246959023269LL;
	int16_t x131 = INT16_MAX;
	static uint32_t x132 = 76341890U;
	volatile int32_t t32 = 1;

	t32 = (x129==(x130<=(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x133 = UINT8_MAX;
	uint16_t x135 = 0U;
	uint32_t x136 = UINT32_MAX;
	static int32_t t33 = 146415;

	t33 = (x133==(x134<=(x135<x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 7LLU;
	static int64_t x138 = -1LL;
	int32_t t34 = -111278;

	t34 = (x137==(x138<=(x139<x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 8328U;
	static int16_t x142 = 13;
	int64_t x143 = INT64_MIN;
	int64_t x144 = 100744511LL;
	int32_t t35 = 0;

	t35 = (x141==(x142<=(x143<x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	int32_t x146 = -153808;
	static int64_t x147 = INT64_MAX;
	uint32_t x148 = UINT32_MAX;
	static volatile int32_t t36 = 18650;

	t36 = (x145==(x146<=(x147<x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 276970539;
	int8_t x150 = INT8_MIN;
	int32_t t37 = -581213;

	t37 = (x149==(x150<=(x151<x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	uint8_t x154 = UINT8_MAX;
	int16_t x155 = -1;
	int16_t x156 = INT16_MAX;
	volatile int32_t t38 = 30448;

	t38 = (x153==(x154<=(x155<x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 0U;
	int32_t x158 = 2138;
	int32_t x159 = -30419;
	int32_t t39 = 880821;

	t39 = (x157==(x158<=(x159<x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	int8_t x162 = INT8_MIN;
	static volatile uint64_t x163 = 1419052648865LLU;
	static int16_t x164 = INT16_MAX;

	t40 = (x161==(x162<=(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	static int16_t x166 = -1;
	static uint64_t x167 = 1LLU;

	t41 = (x165==(x166<=(x167<x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	uint8_t x171 = 55U;
	static int8_t x172 = INT8_MIN;

	t42 = (x169==(x170<=(x171<x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	static int16_t x174 = 137;

	t43 = (x173==(x174<=(x175<x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	uint64_t x178 = UINT64_MAX;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = -1;

	t44 = (x177==(x178<=(x179<x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = INT32_MAX;
	int8_t x182 = -1;
	int64_t x183 = INT64_MIN;
	volatile int32_t t45 = -2638;

	t45 = (x181==(x182<=(x183<x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	int64_t x186 = INT64_MIN;
	static int64_t x187 = -1104151682LL;
	static volatile int32_t x188 = INT32_MAX;
	volatile int32_t t46 = 48775;

	t46 = (x185==(x186<=(x187<x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 127900303;
	int8_t x190 = INT8_MIN;
	int16_t x191 = INT16_MIN;
	int8_t x192 = 13;
	static int32_t t47 = -65103605;

	t47 = (x189==(x190<=(x191<x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = -1;
	uint64_t x194 = 382430236LLU;
	uint32_t x195 = UINT32_MAX;
	uint64_t x196 = 3320316918734LLU;
	int32_t t48 = 191551482;

	t48 = (x193==(x194<=(x195<x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x199 = INT16_MIN;
	int64_t x200 = -85271LL;
	int32_t t49 = -93603931;

	t49 = (x197==(x198<=(x199<x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = -1;
	int8_t x203 = -1;
	static volatile int64_t x204 = INT64_MIN;

	t50 = (x201==(x202<=(x203<x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -59;
	int8_t x207 = INT8_MIN;
	int32_t x208 = 4221;
	volatile int32_t t51 = 3;

	t51 = (x205==(x206<=(x207<x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 3015U;
	uint32_t x210 = UINT32_MAX;
	int64_t x211 = -1LL;
	int8_t x212 = INT8_MIN;
	int32_t t52 = -32785333;

	t52 = (x209==(x210<=(x211<x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	int8_t x214 = INT8_MIN;
	uint32_t x215 = 509344U;
	volatile int32_t x216 = INT32_MIN;
	int32_t t53 = -54332;

	t53 = (x213==(x214<=(x215<x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	int8_t x218 = INT8_MAX;
	int8_t x219 = -1;
	int32_t t54 = 2225;

	t54 = (x217==(x218<=(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x222 = 5098U;
	uint8_t x223 = 4U;
	int64_t x224 = -1LL;
	int32_t t55 = -915;

	t55 = (x221==(x222<=(x223<x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = 9;
	static int32_t x226 = -1;

	t56 = (x225==(x226<=(x227<x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	static int32_t x230 = INT32_MIN;
	int16_t x232 = INT16_MIN;

	t57 = (x229==(x230<=(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MAX;
	uint64_t x234 = 7218387403980LLU;
	int16_t x235 = INT16_MIN;
	static int32_t x236 = INT32_MIN;
	volatile int32_t t58 = 548612640;

	t58 = (x233==(x234<=(x235<x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x238 = 76U;
	int32_t x239 = -10999;
	int64_t x240 = 6952LL;

	t59 = (x237==(x238<=(x239<x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	static int8_t x243 = 1;
	uint64_t x244 = UINT64_MAX;
	int32_t t60 = 102;

	t60 = (x241==(x242<=(x243<x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x246 = 56U;
	int16_t x247 = INT16_MAX;
	int16_t x248 = INT16_MAX;
	int32_t t61 = 853690;

	t61 = (x245==(x246<=(x247<x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x250 = 19U;
	static int64_t x252 = INT64_MIN;
	static volatile int32_t t62 = 21540680;

	t62 = (x249==(x250<=(x251<x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x253 = INT32_MIN;
	volatile int16_t x254 = -1;
	int16_t x255 = -1;
	static volatile uint64_t x256 = 8164649531517LLU;

	t63 = (x253==(x254<=(x255<x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x259 = -1;
	uint16_t x260 = UINT16_MAX;
	int32_t t64 = 3531;

	t64 = (x257==(x258<=(x259<x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	int16_t x263 = INT16_MAX;
	uint32_t x264 = UINT32_MAX;
	volatile int32_t t65 = -149647313;

	t65 = (x261==(x262<=(x263<x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	static volatile int64_t x267 = -1LL;
	volatile int64_t x268 = -6371277196862LL;
	int32_t t66 = -110832762;

	t66 = (x265==(x266<=(x267<x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	static volatile int64_t x271 = INT64_MAX;

	t67 = (x269==(x270<=(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = INT8_MIN;
	uint64_t x274 = 1821509910060111174LLU;
	int32_t x275 = -55360219;
	int32_t t68 = 52;

	t68 = (x273==(x274<=(x275<x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = -884181;
	int32_t x278 = -1;
	uint64_t x279 = 6985079167828076LLU;
	uint32_t x280 = UINT32_MAX;
	int32_t t69 = -284748472;

	t69 = (x277==(x278<=(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -3;
	uint32_t x282 = 81U;
	uint32_t x283 = UINT32_MAX;
	uint16_t x284 = 21U;
	int32_t t70 = 639;

	t70 = (x281==(x282<=(x283<x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x286 = INT32_MIN;
	int64_t x287 = -26077708025861LL;
	volatile int16_t x288 = 368;

	t71 = (x285==(x286<=(x287<x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 799U;
	static int8_t x290 = INT8_MIN;
	volatile uint8_t x291 = UINT8_MAX;
	int8_t x292 = 0;

	t72 = (x289==(x290<=(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	int16_t x296 = 172;

	t73 = (x293==(x294<=(x295<x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int8_t x298 = -1;
	volatile int32_t t74 = -259353039;

	t74 = (x297==(x298<=(x299<x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1LL;
	static int8_t x302 = INT8_MIN;
	int64_t x303 = 397055586231136LL;
	int32_t t75 = -268205;

	t75 = (x301==(x302<=(x303<x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -18155603946LL;
	uint64_t x307 = 487535LLU;
	volatile int32_t t76 = -22212;

	t76 = (x305==(x306<=(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = INT8_MIN;
	static uint8_t x310 = UINT8_MAX;
	int8_t x311 = INT8_MIN;
	int32_t x312 = 5161;
	int32_t t77 = -747043888;

	t77 = (x309==(x310<=(x311<x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x313 = 3;
	int8_t x314 = 11;
	volatile int16_t x315 = -7;
	volatile int16_t x316 = INT16_MIN;
	int32_t t78 = -2;

	t78 = (x313==(x314<=(x315<x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	int16_t x318 = INT16_MIN;
	static uint32_t x319 = UINT32_MAX;
	uint32_t x320 = 223U;
	static volatile int32_t t79 = 119142;

	t79 = (x317==(x318<=(x319<x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 0U;
	static int32_t x322 = INT32_MAX;
	uint32_t x323 = UINT32_MAX;
	uint16_t x324 = 1U;
	volatile int32_t t80 = -15981766;

	t80 = (x321==(x322<=(x323<x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x325 = 204686380964480LLU;
	volatile uint16_t x326 = UINT16_MAX;
	int32_t x327 = INT32_MAX;
	volatile int32_t t81 = -978106765;

	t81 = (x325==(x326<=(x327<x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -3369;
	int32_t x330 = 91;
	int64_t x331 = INT64_MIN;

	t82 = (x329==(x330<=(x331<x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -2;
	int64_t x334 = -1LL;
	static int32_t x335 = INT32_MAX;
	int32_t x336 = INT32_MIN;
	volatile int32_t t83 = 787356358;

	t83 = (x333==(x334<=(x335<x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x338 = -1;
	static int64_t x339 = 6582538LL;
	int32_t x340 = INT32_MIN;
	int32_t t84 = 9;

	t84 = (x337==(x338<=(x339<x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = INT64_MAX;
	volatile int16_t x344 = -1;

	t85 = (x341==(x342<=(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x345 = 8752U;
	uint64_t x346 = 7541234463LLU;
	volatile int64_t x348 = INT64_MAX;
	volatile int32_t t86 = 1;

	t86 = (x345==(x346<=(x347<x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x351 = INT64_MAX;
	uint16_t x352 = UINT16_MAX;
	int32_t t87 = 339605107;

	t87 = (x349==(x350<=(x351<x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x355 = 89;
	int32_t t88 = 5;

	t88 = (x353==(x354<=(x355<x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x357 = UINT32_MAX;
	uint8_t x360 = 5U;
	int32_t t89 = 536636767;

	t89 = (x357==(x358<=(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MAX;
	volatile int16_t x362 = -11764;
	static uint32_t x363 = 433482586U;
	uint32_t x364 = 12U;
	int32_t t90 = 415783199;

	t90 = (x361==(x362<=(x363<x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = 54570LLU;
	uint32_t x368 = 1114U;
	volatile int32_t t91 = 5845;

	t91 = (x365==(x366<=(x367<x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = UINT16_MAX;
	int8_t x370 = 0;
	int64_t x371 = 27822687706LL;
	uint32_t x372 = 8391U;
	volatile int32_t t92 = -809130;

	t92 = (x369==(x370<=(x371<x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	int64_t x374 = INT64_MIN;
	uint32_t x376 = 5U;
	volatile int32_t t93 = -1360003;

	t93 = (x373==(x374<=(x375<x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = INT64_MAX;
	int8_t x378 = -49;
	volatile int32_t x379 = INT32_MIN;
	uint32_t x380 = UINT32_MAX;
	int32_t t94 = -1;

	t94 = (x377==(x378<=(x379<x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = INT16_MAX;
	uint32_t x383 = 19123U;
	int8_t x384 = INT8_MAX;
	volatile int32_t t95 = 548408;

	t95 = (x381==(x382<=(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	static int32_t x386 = INT32_MIN;
	volatile uint16_t x388 = UINT16_MAX;
	volatile int32_t t96 = -229926;

	t96 = (x385==(x386<=(x387<x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MAX;
	int32_t x390 = -486121;
	uint8_t x391 = 0U;
	uint32_t x392 = UINT32_MAX;
	int32_t t97 = 1;

	t97 = (x389==(x390<=(x391<x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MAX;
	int64_t x394 = -1LL;
	uint32_t x395 = UINT32_MAX;
	static int32_t t98 = 651200;

	t98 = (x393==(x394<=(x395<x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = UINT64_MAX;
	int8_t x398 = INT8_MIN;
	static int64_t x399 = 1LL;
	int32_t t99 = -65199904;

	t99 = (x397==(x398<=(x399<x400)));

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

