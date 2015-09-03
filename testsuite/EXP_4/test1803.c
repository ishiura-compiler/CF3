#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x5 = UINT64_MAX;
static volatile uint16_t x8 = 175U;
uint64_t x10 = 64411LLU;
volatile int64_t x16 = 3589009364LL;
volatile int8_t x22 = INT8_MIN;
int8_t x28 = INT8_MAX;
int64_t x30 = 52885042LL;
int32_t x33 = -4610;
int64_t x34 = INT64_MAX;
int32_t t8 = 250619157;
int32_t x43 = INT32_MIN;
uint16_t x48 = 12U;
uint16_t x51 = 14U;
volatile int16_t x55 = -8031;
volatile int32_t x58 = INT32_MIN;
int16_t x60 = 4819;
volatile int32_t t15 = 77801298;
int64_t x74 = -685310LL;
int16_t x75 = INT16_MIN;
uint64_t x78 = UINT64_MAX;
uint8_t x79 = UINT8_MAX;
int16_t x81 = INT16_MIN;
volatile uint32_t x82 = 22451456U;
static int64_t x92 = INT64_MAX;
static uint32_t x102 = 15834U;
int64_t x103 = -1LL;
int32_t x104 = 14518;
int64_t x106 = -8563978591LL;
int16_t x108 = INT16_MIN;
volatile int64_t x115 = INT64_MAX;
static int64_t x125 = -26677341149925077LL;
int8_t x126 = -24;
static int16_t x127 = -1271;
uint32_t x136 = 1094255490U;
int64_t x142 = INT64_MIN;
uint32_t x145 = UINT32_MAX;
static uint8_t x148 = UINT8_MAX;
int32_t x152 = -1;
int8_t x154 = INT8_MIN;
static volatile int32_t t40 = -7763827;
uint8_t x173 = 122U;
int8_t x181 = 63;
static int32_t x184 = 38;
static volatile int32_t t45 = -5925802;
int16_t x186 = -879;
volatile int32_t t47 = 84402;
int8_t x196 = INT8_MIN;
int32_t x199 = 0;
int16_t x209 = INT16_MAX;
int8_t x213 = INT8_MIN;
int8_t x216 = INT8_MIN;
int8_t x219 = -1;
volatile int32_t t54 = 1040722289;
uint16_t x223 = UINT16_MAX;
static uint8_t x227 = 3U;
int32_t t56 = -1;
int8_t x233 = INT8_MIN;
volatile int32_t t60 = -1;
volatile int32_t t61 = -8082388;
volatile uint8_t x251 = UINT8_MAX;
int32_t x252 = -1;
uint16_t x262 = 49U;
uint64_t x268 = 10639LLU;
volatile int64_t x271 = INT64_MAX;
static volatile int32_t t67 = 964042752;
int8_t x274 = INT8_MAX;
int32_t x286 = 351699;
int32_t t71 = 774;
static int16_t x299 = INT16_MIN;
int16_t x312 = INT16_MIN;
int32_t x316 = INT32_MIN;
int8_t x322 = INT8_MAX;
static int16_t x326 = 427;
static int32_t x328 = INT32_MIN;
static int32_t x330 = INT32_MAX;
volatile int32_t t82 = -48326592;
static volatile int32_t t85 = 52008;
uint64_t x349 = 27341696444LLU;
static int32_t x352 = -1;
uint16_t x354 = 3054U;
static uint32_t x356 = UINT32_MAX;
static uint16_t x357 = UINT16_MAX;
int16_t x359 = INT16_MIN;
int32_t x368 = INT32_MAX;
int8_t x371 = INT8_MIN;
volatile uint64_t x374 = 28LLU;
int64_t x377 = -3841259205134LL;
static int32_t t94 = 7308001;
uint8_t x387 = 31U;
int64_t x397 = -15LL;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int32_t x2 = INT32_MIN;
	volatile int8_t x3 = 16;
	int16_t x4 = 4;
	volatile int32_t t0 = 6888;

	t0 = (x1<(x2<(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	int8_t x7 = INT8_MIN;
	volatile int32_t t1 = -210;

	t1 = (x5<(x6<(x7&x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	uint64_t x11 = 57LLU;
	int64_t x12 = INT64_MIN;
	volatile int32_t t2 = 32503320;

	t2 = (x9<(x10<(x11&x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x13 = 119642LL;
	int8_t x14 = INT8_MAX;
	uint32_t x15 = 40391282U;
	static volatile int32_t t3 = 629296896;

	t3 = (x13<(x14<(x15&x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int64_t x18 = INT64_MAX;
	volatile int16_t x19 = -179;
	static int16_t x20 = -1;
	int32_t t4 = 1664589;

	t4 = (x17<(x18<(x19&x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static int64_t x23 = INT64_MAX;
	uint32_t x24 = UINT32_MAX;
	static volatile int32_t t5 = 0;

	t5 = (x21<(x22<(x23&x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -154909284062946LL;
	volatile int16_t x26 = -48;
	volatile int16_t x27 = INT16_MIN;
	volatile int32_t t6 = -10143729;

	t6 = (x25<(x26<(x27&x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	int16_t x31 = -1;
	static int64_t x32 = INT64_MIN;
	volatile int32_t t7 = -55680;

	t7 = (x29<(x30<(x31&x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x35 = INT64_MIN;
	static uint64_t x36 = 195078877LLU;

	t8 = (x33<(x34<(x35&x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MIN;
	int8_t x38 = INT8_MIN;
	static int32_t x39 = INT32_MIN;
	static int32_t x40 = -1;
	int32_t t9 = 28587559;

	t9 = (x37<(x38<(x39&x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = UINT16_MAX;
	static uint32_t x42 = 347236U;
	volatile int16_t x44 = 1;
	static volatile int32_t t10 = 1638;

	t10 = (x41<(x42<(x43&x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 1173561LL;
	int8_t x46 = -1;
	int64_t x47 = -1LL;
	volatile int32_t t11 = 19353;

	t11 = (x45<(x46<(x47&x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 8U;
	volatile uint8_t x50 = UINT8_MAX;
	volatile int8_t x52 = INT8_MIN;
	int32_t t12 = -65371621;

	t12 = (x49<(x50<(x51&x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -12;
	static int32_t x54 = -1;
	uint16_t x56 = 9U;
	static volatile int32_t t13 = -1;

	t13 = (x53<(x54<(x55&x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MAX;
	int32_t x59 = INT32_MAX;
	volatile int32_t t14 = 107;

	t14 = (x57<(x58<(x59&x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = INT64_MIN;
	int16_t x62 = INT16_MIN;
	uint8_t x63 = 28U;
	volatile int8_t x64 = -1;

	t15 = (x61<(x62<(x63&x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -412076134805434332LL;
	static volatile int8_t x66 = INT8_MIN;
	int32_t x67 = -1;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t16 = 15979;

	t16 = (x65<(x66<(x67&x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 0;
	static int16_t x70 = INT16_MAX;
	int32_t x71 = -1;
	int64_t x72 = INT64_MIN;
	int32_t t17 = -53098802;

	t17 = (x69<(x70<(x71&x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	volatile int16_t x76 = -1;
	volatile int32_t t18 = -831665;

	t18 = (x73<(x74<(x75&x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	int64_t x80 = 31527527LL;
	static volatile int32_t t19 = 18260406;

	t19 = (x77<(x78<(x79&x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x83 = INT16_MIN;
	volatile int8_t x84 = 36;
	static volatile int32_t t20 = -1;

	t20 = (x81<(x82<(x83&x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = INT32_MAX;
	int32_t x86 = INT32_MAX;
	volatile int64_t x87 = INT64_MAX;
	int8_t x88 = -1;
	int32_t t21 = -101055505;

	t21 = (x85<(x86<(x87&x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	uint64_t x90 = 78534297896864925LLU;
	uint8_t x91 = 24U;
	static int32_t t22 = -402;

	t22 = (x89<(x90<(x91&x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	int16_t x94 = -1;
	volatile int32_t x95 = -2;
	int8_t x96 = -1;
	volatile int32_t t23 = -97;

	t23 = (x93<(x94<(x95&x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 22LLU;
	uint64_t x98 = 57LLU;
	int32_t x99 = INT32_MIN;
	volatile int16_t x100 = -1;
	int32_t t24 = 38;

	t24 = (x97<(x98<(x99&x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = 398U;
	volatile int32_t t25 = 5390026;

	t25 = (x101<(x102<(x103&x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	volatile int16_t x107 = -461;
	static int32_t t26 = -353000;

	t26 = (x105<(x106<(x107&x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	static int8_t x110 = 0;
	int64_t x111 = -241653385177223538LL;
	uint16_t x112 = UINT16_MAX;
	int32_t t27 = -37992768;

	t27 = (x109<(x110<(x111&x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	uint32_t x114 = UINT32_MAX;
	int8_t x116 = 0;
	volatile int32_t t28 = 529;

	t28 = (x113<(x114<(x115&x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 1LL;
	int64_t x118 = 51552LL;
	int32_t x119 = 241178375;
	volatile int16_t x120 = -1;
	volatile int32_t t29 = 0;

	t29 = (x117<(x118<(x119&x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -18671913030LL;
	uint32_t x122 = 218U;
	uint16_t x123 = UINT16_MAX;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t30 = 6;

	t30 = (x121<(x122<(x123&x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x128 = 3U;
	volatile int32_t t31 = 0;

	t31 = (x125<(x126<(x127&x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MIN;
	int64_t x130 = INT64_MAX;
	static int64_t x131 = INT64_MAX;
	uint32_t x132 = 3U;
	int32_t t32 = -26;

	t32 = (x129<(x130<(x131&x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x133 = 0U;
	int64_t x134 = -1LL;
	int64_t x135 = 19880385122653LL;
	int32_t t33 = 576356;

	t33 = (x133<(x134<(x135&x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = 25;
	int32_t x138 = INT32_MAX;
	int32_t x139 = 37100;
	int64_t x140 = INT64_MAX;
	int32_t t34 = 3;

	t34 = (x137<(x138<(x139&x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 8632372U;
	uint8_t x143 = 9U;
	int16_t x144 = -1;
	int32_t t35 = -170;

	t35 = (x141<(x142<(x143&x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MAX;
	int64_t x147 = INT64_MIN;
	int32_t t36 = 3;

	t36 = (x145<(x146<(x147&x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MIN;
	volatile uint8_t x150 = 88U;
	int32_t x151 = INT32_MIN;
	int32_t t37 = -38636;

	t37 = (x149<(x150<(x151&x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -531;
	uint8_t x155 = UINT8_MAX;
	uint16_t x156 = 454U;
	volatile int32_t t38 = -121313750;

	t38 = (x153<(x154<(x155&x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = INT16_MIN;
	uint16_t x158 = UINT16_MAX;
	int64_t x159 = -29692129558033LL;
	int32_t x160 = -1;
	volatile int32_t t39 = 110158;

	t39 = (x157<(x158<(x159&x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	int64_t x162 = -1LL;
	int16_t x163 = 17;
	uint8_t x164 = 116U;

	t40 = (x161<(x162<(x163&x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	static volatile int16_t x166 = -4;
	int32_t x167 = INT32_MIN;
	int16_t x168 = INT16_MIN;
	int32_t t41 = 684379;

	t41 = (x165<(x166<(x167&x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 1U;
	uint64_t x170 = UINT64_MAX;
	uint8_t x171 = UINT8_MAX;
	static int64_t x172 = INT64_MIN;
	static int32_t t42 = 492;

	t42 = (x169<(x170<(x171&x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x174 = 2U;
	int32_t x175 = 452;
	int32_t x176 = INT32_MIN;
	volatile int32_t t43 = 7;

	t43 = (x173<(x174<(x175&x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = -1;
	uint64_t x178 = 7886261351LLU;
	uint32_t x179 = 31U;
	int16_t x180 = -70;
	volatile int32_t t44 = -106480664;

	t44 = (x177<(x178<(x179&x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x182 = UINT32_MAX;
	volatile uint16_t x183 = UINT16_MAX;

	t45 = (x181<(x182<(x183&x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MIN;
	uint8_t x187 = 0U;
	int16_t x188 = 177;
	int32_t t46 = -215446349;

	t46 = (x185<(x186<(x187&x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 43U;
	static uint64_t x190 = UINT64_MAX;
	int16_t x191 = INT16_MIN;
	int8_t x192 = INT8_MAX;

	t47 = (x189<(x190<(x191&x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x193 = 83597442U;
	static uint8_t x194 = 14U;
	uint64_t x195 = UINT64_MAX;
	volatile int32_t t48 = 12874;

	t48 = (x193<(x194<(x195&x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x197 = UINT8_MAX;
	static int8_t x198 = 1;
	static int64_t x200 = INT64_MIN;
	int32_t t49 = 3695590;

	t49 = (x197<(x198<(x199&x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	volatile int32_t x202 = INT32_MAX;
	volatile int16_t x203 = INT16_MIN;
	uint64_t x204 = UINT64_MAX;
	volatile int32_t t50 = 0;

	t50 = (x201<(x202<(x203&x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 2U;
	volatile uint32_t x206 = 5044U;
	static uint8_t x207 = UINT8_MAX;
	uint16_t x208 = 6U;
	volatile int32_t t51 = -543778183;

	t51 = (x205<(x206<(x207&x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x210 = 8406165LLU;
	int64_t x211 = -1LL;
	int32_t x212 = -1;
	int32_t t52 = 221;

	t52 = (x209<(x210<(x211&x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x214 = INT16_MIN;
	static uint16_t x215 = 199U;
	int32_t t53 = -6;

	t53 = (x213<(x214<(x215&x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	volatile int16_t x218 = INT16_MIN;
	int64_t x220 = -51711359850999LL;

	t54 = (x217<(x218<(x219&x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	static int16_t x222 = -1;
	volatile uint64_t x224 = 4865745294584LLU;
	static int32_t t55 = -127507;

	t55 = (x221<(x222<(x223&x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 4U;
	int64_t x226 = INT64_MIN;
	volatile int32_t x228 = -1;

	t56 = (x225<(x226<(x227&x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = INT32_MAX;
	int16_t x230 = INT16_MIN;
	int64_t x231 = -5100867329268LL;
	static uint16_t x232 = 12844U;
	int32_t t57 = -6534;

	t57 = (x229<(x230<(x231&x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x234 = 35173U;
	int8_t x235 = INT8_MIN;
	volatile uint32_t x236 = 641175755U;
	int32_t t58 = -9;

	t58 = (x233<(x234<(x235&x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = -2;
	int8_t x238 = 6;
	volatile int64_t x239 = 518608548609035LL;
	volatile int32_t x240 = INT32_MIN;
	int32_t t59 = -3639386;

	t59 = (x237<(x238<(x239&x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	uint8_t x242 = 110U;
	uint32_t x243 = 65077798U;
	static volatile int8_t x244 = INT8_MAX;

	t60 = (x241<(x242<(x243&x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	uint8_t x246 = UINT8_MAX;
	static uint8_t x247 = 8U;
	volatile int32_t x248 = INT32_MAX;

	t61 = (x245<(x246<(x247&x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = -1;
	int8_t x250 = -1;
	volatile int32_t t62 = 6841;

	t62 = (x249<(x250<(x251&x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	uint32_t x254 = 686U;
	static int8_t x255 = INT8_MAX;
	int32_t x256 = INT32_MIN;
	int32_t t63 = -166290;

	t63 = (x253<(x254<(x255&x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	uint64_t x258 = 1988475783LLU;
	int64_t x259 = -1LL;
	static int32_t x260 = 2886;
	volatile int32_t t64 = -681789085;

	t64 = (x257<(x258<(x259&x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = -32;
	uint16_t x263 = UINT16_MAX;
	volatile int32_t x264 = INT32_MIN;
	int32_t t65 = 4291;

	t65 = (x261<(x262<(x263&x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	volatile int64_t x266 = INT64_MIN;
	uint64_t x267 = 125007LLU;
	volatile int32_t t66 = -4365;

	t66 = (x265<(x266<(x267&x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 6121U;
	int16_t x270 = INT16_MIN;
	int16_t x272 = INT16_MIN;

	t67 = (x269<(x270<(x271&x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x273 = 61U;
	volatile int8_t x275 = INT8_MIN;
	int8_t x276 = 1;
	int32_t t68 = -691056883;

	t68 = (x273<(x274<(x275&x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	static int32_t x278 = 2397890;
	int8_t x279 = -1;
	static int16_t x280 = -1;
	volatile int32_t t69 = 537384;

	t69 = (x277<(x278<(x279&x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = 980U;
	volatile uint64_t x282 = UINT64_MAX;
	volatile int32_t x283 = 5848;
	uint64_t x284 = 517337778045564992LLU;
	int32_t t70 = -7;

	t70 = (x281<(x282<(x283&x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = -1;
	int8_t x287 = INT8_MIN;
	uint8_t x288 = UINT8_MAX;

	t71 = (x285<(x286<(x287&x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = UINT32_MAX;
	int64_t x290 = INT64_MIN;
	uint32_t x291 = 0U;
	static uint32_t x292 = 105990827U;
	int32_t t72 = -1774740;

	t72 = (x289<(x290<(x291&x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = 1;
	uint8_t x294 = 4U;
	volatile uint64_t x295 = 223825146LLU;
	volatile uint32_t x296 = UINT32_MAX;
	static volatile int32_t t73 = 2333987;

	t73 = (x293<(x294<(x295&x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = INT8_MAX;
	int64_t x298 = INT64_MIN;
	static uint32_t x300 = 390853374U;
	int32_t t74 = -971;

	t74 = (x297<(x298<(x299&x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	volatile int8_t x302 = INT8_MAX;
	int32_t x303 = INT32_MIN;
	volatile int8_t x304 = 6;
	int32_t t75 = -185313141;

	t75 = (x301<(x302<(x303&x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = INT8_MIN;
	int32_t x306 = INT32_MIN;
	int32_t x307 = INT32_MIN;
	uint32_t x308 = 539487136U;
	volatile int32_t t76 = 0;

	t76 = (x305<(x306<(x307&x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x309 = UINT32_MAX;
	int16_t x310 = 4410;
	uint64_t x311 = UINT64_MAX;
	volatile int32_t t77 = 3;

	t77 = (x309<(x310<(x311&x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 493186508;
	int64_t x314 = INT64_MIN;
	uint64_t x315 = 0LLU;
	static int32_t t78 = -16339;

	t78 = (x313<(x314<(x315&x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = INT32_MIN;
	int64_t x318 = 7439604284LL;
	int32_t x319 = -1;
	int8_t x320 = 53;
	int32_t t79 = -93518;

	t79 = (x317<(x318<(x319&x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	static int8_t x323 = INT8_MIN;
	int64_t x324 = INT64_MIN;
	static volatile int32_t t80 = 29;

	t80 = (x321<(x322<(x323&x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = 20;
	volatile int8_t x327 = -10;
	int32_t t81 = 2285616;

	t81 = (x325<(x326<(x327&x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 178316U;
	int8_t x331 = INT8_MAX;
	int16_t x332 = INT16_MIN;

	t82 = (x329<(x330<(x331&x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	uint64_t x334 = 1319763424884324777LLU;
	static uint16_t x335 = 147U;
	static int64_t x336 = INT64_MAX;
	volatile int32_t t83 = -5242173;

	t83 = (x333<(x334<(x335&x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x337 = 2U;
	volatile int8_t x338 = INT8_MIN;
	int16_t x339 = -1307;
	uint8_t x340 = 35U;
	volatile int32_t t84 = 25862;

	t84 = (x337<(x338<(x339&x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 13U;
	uint64_t x342 = 4621399167LLU;
	int16_t x343 = INT16_MIN;
	int32_t x344 = 105702138;

	t85 = (x341<(x342<(x343&x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 11U;
	int16_t x346 = INT16_MIN;
	int16_t x347 = -995;
	int64_t x348 = 13314412LL;
	volatile int32_t t86 = -64081732;

	t86 = (x345<(x346<(x347&x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x350 = 294U;
	int16_t x351 = INT16_MAX;
	int32_t t87 = 11098;

	t87 = (x349<(x350<(x351&x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x353 = 4068172313025245LLU;
	static volatile int32_t x355 = 1;
	volatile int32_t t88 = -25720263;

	t88 = (x353<(x354<(x355&x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = -1LL;
	int8_t x360 = INT8_MIN;
	static volatile int32_t t89 = -11323;

	t89 = (x357<(x358<(x359&x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -10;
	uint32_t x362 = UINT32_MAX;
	uint64_t x363 = 15736787051672822LLU;
	static uint8_t x364 = UINT8_MAX;
	int32_t t90 = -6135845;

	t90 = (x361<(x362<(x363&x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = 11433812290493LL;
	static int8_t x366 = INT8_MIN;
	int64_t x367 = -1LL;
	volatile int32_t t91 = -7;

	t91 = (x365<(x366<(x367&x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x369 = UINT8_MAX;
	volatile uint32_t x370 = 658822530U;
	volatile uint32_t x372 = UINT32_MAX;
	volatile int32_t t92 = -4;

	t92 = (x369<(x370<(x371&x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 42U;
	static uint32_t x375 = 1630U;
	volatile int32_t x376 = -1;
	static int32_t t93 = 1;

	t93 = (x373<(x374<(x375&x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x378 = 987U;
	static uint64_t x379 = 10658LLU;
	volatile uint16_t x380 = UINT16_MAX;

	t94 = (x377<(x378<(x379&x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = INT8_MIN;
	uint32_t x382 = 65U;
	int8_t x383 = INT8_MIN;
	volatile int16_t x384 = -1;
	volatile int32_t t95 = 246902;

	t95 = (x381<(x382<(x383&x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = -2;
	static volatile int8_t x388 = INT8_MAX;
	volatile int32_t t96 = 222;

	t96 = (x385<(x386<(x387&x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	static int16_t x390 = INT16_MIN;
	uint64_t x391 = UINT64_MAX;
	uint32_t x392 = UINT32_MAX;
	static int32_t t97 = -112496;

	t97 = (x389<(x390<(x391&x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = 0;
	int8_t x394 = -1;
	volatile uint32_t x395 = UINT32_MAX;
	volatile uint8_t x396 = 2U;
	volatile int32_t t98 = 7;

	t98 = (x393<(x394<(x395&x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x398 = 1630160U;
	int32_t x399 = -310763;
	int64_t x400 = 2972325055118235LL;
	volatile int32_t t99 = -12;

	t99 = (x397<(x398<(x399&x400)));

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

