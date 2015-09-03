#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -1;
volatile int32_t t0 = -215;
int64_t x5 = -22LL;
int32_t x12 = INT32_MIN;
int32_t t2 = -139460;
int8_t x14 = INT8_MIN;
volatile int32_t x17 = -702;
volatile int8_t x23 = INT8_MAX;
static int16_t x24 = 6;
int16_t x27 = 1823;
uint32_t x34 = 1862743650U;
int16_t x36 = INT16_MIN;
int8_t x51 = -38;
int8_t x53 = INT8_MIN;
static volatile int32_t t13 = -61;
int32_t x65 = -1;
int8_t x74 = INT8_MIN;
static volatile int64_t t16 = 4525278LL;
uint8_t x80 = 0U;
volatile int32_t t17 = 3;
static volatile int32_t x81 = -1;
int8_t x82 = INT8_MAX;
uint16_t x93 = UINT16_MAX;
int32_t x98 = INT32_MIN;
static volatile int64_t x100 = -124LL;
volatile int64_t t20 = -96LL;
volatile int16_t x103 = INT16_MIN;
uint32_t x111 = UINT32_MAX;
volatile int32_t t23 = -4711;
uint64_t x117 = 4675199285453370696LLU;
static volatile uint8_t x119 = 24U;
static int64_t x120 = -1LL;
int32_t x123 = INT32_MIN;
volatile int32_t x127 = INT32_MAX;
int16_t x128 = -1;
static volatile int32_t x129 = INT32_MAX;
volatile uint16_t x130 = 0U;
volatile int32_t t28 = -512236408;
volatile int16_t x140 = 45;
static int64_t x152 = 10050897636670520LL;
int16_t x153 = INT16_MIN;
uint64_t x159 = UINT64_MAX;
int64_t x161 = -1LL;
static int64_t t35 = -271136571222LL;
uint32_t x165 = UINT32_MAX;
int32_t x166 = INT32_MIN;
int64_t x167 = 0LL;
int16_t x170 = 63;
int16_t x176 = INT16_MIN;
uint8_t x181 = 44U;
static int16_t x188 = -1;
int64_t t43 = INT64_MAX;
int8_t x201 = -1;
uint64_t x204 = 1LLU;
int32_t x210 = INT32_MIN;
static volatile int32_t t48 = 2007602;
static uint16_t x217 = UINT16_MAX;
volatile uint16_t x221 = 164U;
int8_t x223 = 1;
uint32_t x226 = 129264650U;
static uint16_t x227 = 1305U;
int16_t x236 = INT16_MIN;
int8_t x247 = INT8_MIN;
volatile int32_t t55 = -796369;
int32_t x255 = -39;
int32_t t57 = -4;
int32_t t58 = -1;
int16_t x261 = 7848;
int64_t x270 = 3822288146662097LL;
static volatile int64_t x272 = INT64_MIN;
int32_t t60 = -23;
int32_t x273 = 14487235;
int32_t t61 = 3904;
static uint8_t x277 = 0U;
uint32_t x278 = 37739920U;
int16_t x283 = INT16_MIN;
uint32_t x287 = 1052881402U;
uint16_t x289 = 3U;
static int32_t x290 = INT32_MAX;
int8_t x291 = 0;
volatile int32_t t65 = -32718455;
int64_t x293 = 328561093064094LL;
uint8_t x294 = 63U;
int8_t x297 = 10;
static uint8_t x300 = 3U;
int32_t t67 = 354997;
uint32_t x303 = 380548U;
volatile int32_t x310 = -3990;
int8_t x315 = 3;
int8_t x316 = 0;
int64_t x325 = INT64_MAX;
static int64_t x330 = INT64_MIN;
volatile int32_t t74 = -1;
volatile int32_t x333 = -1;
int32_t t75 = 89828;
static int16_t x361 = -1;
int32_t x363 = -138329292;
uint8_t x370 = UINT8_MAX;
int32_t x382 = 31347047;
static volatile int16_t x384 = INT16_MIN;
volatile int32_t t84 = 293934477;
uint16_t x391 = UINT16_MAX;
int64_t x398 = INT64_MAX;
uint64_t x403 = UINT64_MAX;
int32_t x407 = -1;
volatile int64_t x410 = INT64_MIN;
int16_t x414 = INT16_MAX;
int16_t x415 = -62;
volatile int32_t t91 = 1;
volatile int64_t x420 = 14914526665917083LL;
int64_t x423 = 1559059532260LL;
int64_t x443 = 1586054880684LL;
int32_t x444 = -1;
int32_t x447 = 74097;
uint32_t x450 = 127U;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	int8_t x2 = INT8_MIN;
	static int64_t x4 = -1LL;

	t0 = (x1|(x2<(x3+x4)));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x6 = INT8_MIN;
	int16_t x7 = -1;
	static volatile uint32_t x8 = UINT32_MAX;
	int64_t t1 = -356252LL;

	t1 = (x5|(x6<(x7+x8)));

	if (t1 != -21LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	uint64_t x10 = 38410897190925413LLU;
	static uint64_t x11 = UINT64_MAX;

	t2 = (x9|(x10<(x11+x12)));

	if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	uint64_t x15 = 305967LLU;
	volatile int64_t x16 = INT64_MIN;
	volatile int64_t t3 = INT64_MAX;

	t3 = (x13|(x14<(x15+x16)));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x18 = INT64_MAX;
	static int8_t x19 = 4;
	volatile int8_t x20 = 2;
	int32_t t4 = -28;

	t4 = (x17|(x18<(x19+x20)));

	if (t4 != -702) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = -1;
	uint8_t x22 = UINT8_MAX;
	volatile int32_t t5 = -133969934;

	t5 = (x21|(x22<(x23+x24)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MAX;
	int8_t x26 = INT8_MAX;
	static uint64_t x28 = 4740279902LLU;
	volatile int64_t t6 = INT64_MAX;

	t6 = (x25|(x26<(x27+x28)));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint16_t x30 = UINT16_MAX;
	int8_t x31 = 1;
	uint32_t x32 = 2057460U;
	int32_t t7 = -981921728;

	t7 = (x29|(x30<(x31+x32)));

	if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	volatile uint32_t x35 = 14U;
	int32_t t8 = 3809421;

	t8 = (x33|(x34<(x35+x36)));

	if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x37 = INT32_MAX;
	volatile int32_t x38 = -1;
	uint64_t x39 = UINT64_MAX;
	int32_t x40 = INT32_MIN;
	int32_t t9 = INT32_MAX;

	t9 = (x37|(x38<(x39+x40)));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = UINT8_MAX;
	volatile int64_t x42 = INT64_MAX;
	static int8_t x43 = -58;
	static int64_t x44 = -1LL;
	static int32_t t10 = 8310;

	t10 = (x41|(x42<(x43+x44)));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int64_t x46 = -1LL;
	int64_t x47 = -1LL;
	int8_t x48 = -42;
	static volatile int32_t t11 = INT32_MAX;

	t11 = (x45|(x46<(x47+x48)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int16_t x50 = INT16_MAX;
	int64_t x52 = -1LL;
	int64_t t12 = INT64_MIN;

	t12 = (x49|(x50<(x51+x52)));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = -1;
	int32_t x55 = INT32_MAX;
	int16_t x56 = -1;

	t13 = (x53|(x54<(x55+x56)));

	if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x61 = 22039LLU;
	static uint8_t x62 = 4U;
	volatile int16_t x63 = INT16_MAX;
	int32_t x64 = 460284184;
	uint64_t t14 = 158845750604LLU;

	t14 = (x61|(x62<(x63+x64)));

	if (t14 != 22039LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x66 = 150U;
	int8_t x67 = INT8_MAX;
	int64_t x68 = INT64_MIN;
	int32_t t15 = 3849133;

	t15 = (x65|(x66<(x67+x68)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x73 = -1LL;
	static uint64_t x75 = UINT64_MAX;
	int8_t x76 = INT8_MIN;

	t16 = (x73|(x74<(x75+x76)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x77 = -1;
	static int64_t x78 = 1317462899489116401LL;
	static int64_t x79 = INT64_MAX;

	t17 = (x77|(x78<(x79+x80)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x83 = -1;
	static uint32_t x84 = 195U;
	volatile int32_t t18 = 764440243;

	t18 = (x81|(x82<(x83+x84)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x94 = INT16_MAX;
	static volatile uint8_t x95 = UINT8_MAX;
	volatile int16_t x96 = INT16_MIN;
	int32_t t19 = 2232532;

	t19 = (x93|(x94<(x95+x96)));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x97 = -95833165023LL;
	int32_t x99 = INT32_MIN;

	t20 = (x97|(x98<(x99+x100)));

	if (t20 != -95833165023LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x101 = UINT64_MAX;
	volatile int64_t x102 = 1LL;
	int8_t x104 = INT8_MIN;
	uint64_t t21 = UINT64_MAX;

	t21 = (x101|(x102<(x103+x104)));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = 152U;
	int8_t x106 = INT8_MIN;
	volatile int8_t x107 = -1;
	int64_t x108 = INT64_MAX;
	int32_t t22 = 8958;

	t22 = (x105|(x106<(x107+x108)));

	if (t22 != 153) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x109 = 99U;
	volatile int8_t x110 = INT8_MIN;
	static volatile int32_t x112 = 0;

	t23 = (x109|(x110<(x111+x112)));

	if (t23 != 99) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x118 = 9;
	uint64_t t24 = 30191LLU;

	t24 = (x117|(x118<(x119+x120)));

	if (t24 != 4675199285453370697LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = INT8_MAX;
	int32_t x122 = -9247;
	static uint64_t x124 = 631785893164219370LLU;
	volatile int32_t t25 = 2968;

	t25 = (x121|(x122<(x123+x124)));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x125 = 1U;
	int32_t x126 = -1;
	static int32_t t26 = 3;

	t26 = (x125|(x126<(x127+x128)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x131 = UINT8_MAX;
	int8_t x132 = 8;
	volatile int32_t t27 = INT32_MAX;

	t27 = (x129|(x130<(x131+x132)));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x133 = INT32_MIN;
	volatile int16_t x134 = INT16_MAX;
	uint16_t x135 = UINT16_MAX;
	uint16_t x136 = 17U;

	t28 = (x133|(x134<(x135+x136)));

	if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x137 = INT32_MAX;
	int16_t x138 = INT16_MAX;
	volatile int64_t x139 = INT64_MIN;
	volatile int32_t t29 = INT32_MAX;

	t29 = (x137|(x138<(x139+x140)));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = -22LL;
	int16_t x142 = INT16_MIN;
	static int8_t x143 = INT8_MIN;
	volatile uint8_t x144 = 13U;
	volatile int64_t t30 = -1246100792LL;

	t30 = (x141|(x142<(x143+x144)));

	if (t30 != -21LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = 1663571780679109LL;
	int64_t x146 = 1LL;
	static int64_t x147 = 44015576LL;
	static int16_t x148 = 906;
	int64_t t31 = 0LL;

	t31 = (x145|(x146<(x147+x148)));

	if (t31 != 1663571780679109LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = INT16_MIN;
	volatile int16_t x150 = INT16_MAX;
	int64_t x151 = 15009829018481233LL;
	volatile int32_t t32 = 380;

	t32 = (x149|(x150<(x151+x152)));

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x154 = INT8_MIN;
	uint64_t x155 = 798LLU;
	int8_t x156 = INT8_MIN;
	int32_t t33 = -8543;

	t33 = (x153|(x154<(x155+x156)));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x157 = UINT8_MAX;
	uint8_t x158 = 7U;
	int64_t x160 = INT64_MIN;
	int32_t t34 = -2305;

	t34 = (x157|(x158<(x159+x160)));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x162 = INT8_MIN;
	int8_t x163 = -1;
	uint16_t x164 = UINT16_MAX;

	t35 = (x161|(x162<(x163+x164)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x168 = -1;
	static volatile uint32_t t36 = UINT32_MAX;

	t36 = (x165|(x166<(x167+x168)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x169 = 213U;
	int8_t x171 = -1;
	static volatile int32_t x172 = 0;
	static int32_t t37 = 392577;

	t37 = (x169|(x170<(x171+x172)));

	if (t37 != 213) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = -1LL;
	uint64_t x174 = 2075554117196540913LLU;
	volatile int16_t x175 = -1;
	static volatile int64_t t38 = -4349465984467490037LL;

	t38 = (x173|(x174<(x175+x176)));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = INT32_MIN;
	static uint64_t x178 = 31998393548627315LLU;
	int16_t x179 = INT16_MAX;
	uint16_t x180 = UINT16_MAX;
	int32_t t39 = INT32_MIN;

	t39 = (x177|(x178<(x179+x180)));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x182 = INT16_MAX;
	static int32_t x183 = INT32_MAX;
	int16_t x184 = -9939;
	volatile int32_t t40 = 6287149;

	t40 = (x181|(x182<(x183+x184)));

	if (t40 != 45) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x185 = 898088LLU;
	volatile int64_t x186 = INT64_MIN;
	uint16_t x187 = 3614U;
	uint64_t t41 = 2782732810LLU;

	t41 = (x185|(x186<(x187+x188)));

	if (t41 != 898089LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = INT64_MAX;
	static uint64_t x190 = 54049LLU;
	uint8_t x191 = UINT8_MAX;
	static int32_t x192 = -1;
	int64_t t42 = INT64_MAX;

	t42 = (x189|(x190<(x191+x192)));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = INT64_MAX;
	int64_t x194 = INT64_MAX;
	int16_t x195 = -1;
	int8_t x196 = INT8_MIN;

	t43 = (x193|(x194<(x195+x196)));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x197 = 44478378U;
	uint16_t x198 = UINT16_MAX;
	int64_t x199 = 2504446LL;
	volatile int32_t x200 = INT32_MIN;
	static uint32_t t44 = 0U;

	t44 = (x197|(x198<(x199+x200)));

	if (t44 != 44478378U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x202 = -4123;
	int16_t x203 = -26;
	int32_t t45 = -38105;

	t45 = (x201|(x202<(x203+x204)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x205 = 75U;
	uint16_t x206 = 219U;
	int64_t x207 = -1LL;
	uint16_t x208 = 32U;
	uint32_t t46 = 3U;

	t46 = (x205|(x206<(x207+x208)));

	if (t46 != 75U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = 2057813578577533975LL;
	static int32_t x211 = INT32_MIN;
	uint32_t x212 = UINT32_MAX;
	volatile int64_t t47 = 512727766LL;

	t47 = (x209|(x210<(x211+x212)));

	if (t47 != 2057813578577533975LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = 0;
	volatile int64_t x214 = INT64_MAX;
	uint16_t x215 = 15124U;
	int32_t x216 = -397859099;

	t48 = (x213|(x214<(x215+x216)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x218 = 13240;
	uint64_t x219 = UINT64_MAX;
	uint64_t x220 = 3317540666466532743LLU;
	volatile int32_t t49 = 28635267;

	t49 = (x217|(x218<(x219+x220)));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x222 = 976U;
	volatile int32_t x224 = -401;
	static volatile int32_t t50 = 18;

	t50 = (x221|(x222<(x223+x224)));

	if (t50 != 164) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x225 = 689;
	volatile int8_t x228 = -1;
	int32_t t51 = 1708;

	t51 = (x225|(x226<(x227+x228)));

	if (t51 != 689) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x229 = 1252U;
	uint16_t x230 = 3771U;
	uint8_t x231 = UINT8_MAX;
	int8_t x232 = INT8_MIN;
	volatile int32_t t52 = -3;

	t52 = (x229|(x230<(x231+x232)));

	if (t52 != 1252) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x233 = -1;
	int8_t x234 = -14;
	uint64_t x235 = 6693345205233371LLU;
	static int32_t t53 = -74348;

	t53 = (x233|(x234<(x235+x236)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x237 = 6379U;
	int16_t x238 = INT16_MIN;
	uint64_t x239 = 466434670062306846LLU;
	int32_t x240 = -1;
	volatile int32_t t54 = -59987;

	t54 = (x237|(x238<(x239+x240)));

	if (t54 != 6379) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x245 = INT8_MAX;
	static volatile uint8_t x246 = 1U;
	uint32_t x248 = UINT32_MAX;

	t55 = (x245|(x246<(x247+x248)));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x249 = 32549014U;
	int8_t x250 = INT8_MIN;
	volatile int8_t x251 = 6;
	int8_t x252 = INT8_MIN;
	static volatile uint32_t t56 = 43U;

	t56 = (x249|(x250<(x251+x252)));

	if (t56 != 32549015U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x253 = 44U;
	volatile uint32_t x254 = 1133526U;
	static int32_t x256 = 5;

	t57 = (x253|(x254<(x255+x256)));

	if (t57 != 45) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x257 = 0;
	static volatile int8_t x258 = INT8_MAX;
	int32_t x259 = INT32_MIN;
	volatile int8_t x260 = 1;

	t58 = (x257|(x258<(x259+x260)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x262 = 1LLU;
	static int16_t x263 = INT16_MAX;
	uint8_t x264 = UINT8_MAX;
	int32_t t59 = -1;

	t59 = (x261|(x262<(x263+x264)));

	if (t59 != 7849) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x269 = -3326;
	uint8_t x271 = 1U;

	t60 = (x269|(x270<(x271+x272)));

	if (t60 != -3326) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x274 = 52;
	int8_t x275 = -15;
	int16_t x276 = INT16_MIN;

	t61 = (x273|(x274<(x275+x276)));

	if (t61 != 14487235) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x279 = 2747210941419LLU;
	static uint8_t x280 = UINT8_MAX;
	volatile int32_t t62 = 245;

	t62 = (x277|(x278<(x279+x280)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x281 = INT16_MIN;
	volatile int8_t x282 = INT8_MAX;
	static int8_t x284 = 59;
	int32_t t63 = 40;

	t63 = (x281|(x282<(x283+x284)));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x285 = 436276LL;
	int32_t x286 = 102420435;
	int8_t x288 = INT8_MAX;
	int64_t t64 = -990310520LL;

	t64 = (x285|(x286<(x287+x288)));

	if (t64 != 436277LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x292 = INT32_MIN;

	t65 = (x289|(x290<(x291+x292)));

	if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x295 = UINT16_MAX;
	uint16_t x296 = 0U;
	volatile int64_t t66 = 6392572LL;

	t66 = (x293|(x294<(x295+x296)));

	if (t66 != 328561093064095LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x298 = INT64_MIN;
	int32_t x299 = INT32_MIN;

	t67 = (x297|(x298<(x299+x300)));

	if (t67 != 11) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x301 = 2170;
	int8_t x302 = INT8_MIN;
	int32_t x304 = INT32_MIN;
	volatile int32_t t68 = 1683;

	t68 = (x301|(x302<(x303+x304)));

	if (t68 != 2170) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x305 = 1805U;
	int8_t x306 = INT8_MAX;
	static int16_t x307 = INT16_MAX;
	int64_t x308 = 157964LL;
	static int32_t t69 = 20;

	t69 = (x305|(x306<(x307+x308)));

	if (t69 != 1805) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x309 = -9LL;
	int8_t x311 = INT8_MAX;
	static uint16_t x312 = 57U;
	volatile int64_t t70 = 5997077606993LL;

	t70 = (x309|(x310<(x311+x312)));

	if (t70 != -9LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x313 = 1092820082852LLU;
	uint64_t x314 = 481955LLU;
	uint64_t t71 = 5449450774169413LLU;

	t71 = (x313|(x314<(x315+x316)));

	if (t71 != 1092820082852LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x317 = 97;
	int16_t x318 = INT16_MAX;
	int64_t x319 = -3777LL;
	int16_t x320 = -3;
	int32_t t72 = 9;

	t72 = (x317|(x318<(x319+x320)));

	if (t72 != 97) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x326 = -1LL;
	int8_t x327 = -1;
	int8_t x328 = 2;
	volatile int64_t t73 = INT64_MAX;

	t73 = (x325|(x326<(x327+x328)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x329 = INT16_MIN;
	volatile int8_t x331 = INT8_MAX;
	static int64_t x332 = INT64_MIN;

	t74 = (x329|(x330<(x331+x332)));

	if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x334 = 168U;
	int32_t x335 = INT32_MIN;
	uint16_t x336 = UINT16_MAX;

	t75 = (x333|(x334<(x335+x336)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x337 = 1144;
	uint8_t x338 = 14U;
	int8_t x339 = INT8_MAX;
	int8_t x340 = INT8_MIN;
	static int32_t t76 = -108814;

	t76 = (x337|(x338<(x339+x340)));

	if (t76 != 1144) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x345 = INT8_MAX;
	int64_t x346 = 98196LL;
	static int16_t x347 = 21;
	volatile int32_t x348 = -1;
	int32_t t77 = 93494675;

	t77 = (x345|(x346<(x347+x348)));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x349 = INT32_MAX;
	static int8_t x350 = INT8_MIN;
	int32_t x351 = -1;
	volatile int16_t x352 = -1;
	static int32_t t78 = INT32_MAX;

	t78 = (x349|(x350<(x351+x352)));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x362 = INT16_MAX;
	int16_t x364 = 1007;
	volatile int32_t t79 = 6896701;

	t79 = (x361|(x362<(x363+x364)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x369 = INT16_MIN;
	uint16_t x371 = UINT16_MAX;
	static uint32_t x372 = UINT32_MAX;
	int32_t t80 = 71793;

	t80 = (x369|(x370<(x371+x372)));

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x373 = INT8_MIN;
	volatile int8_t x374 = -1;
	int16_t x375 = INT16_MAX;
	uint8_t x376 = UINT8_MAX;
	int32_t t81 = -2647025;

	t81 = (x373|(x374<(x375+x376)));

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x377 = UINT16_MAX;
	static uint32_t x378 = 310U;
	static int16_t x379 = INT16_MAX;
	volatile uint64_t x380 = UINT64_MAX;
	int32_t t82 = -26564895;

	t82 = (x377|(x378<(x379+x380)));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x381 = 18260U;
	uint16_t x383 = 50U;
	int32_t t83 = -20016;

	t83 = (x381|(x382<(x383+x384)));

	if (t83 != 18260) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = INT8_MIN;
	int64_t x386 = 3567078228589182350LL;
	int8_t x387 = INT8_MIN;
	uint32_t x388 = 5015377U;

	t84 = (x385|(x386<(x387+x388)));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x389 = -8350340607929LL;
	int16_t x390 = INT16_MIN;
	int16_t x392 = -2;
	int64_t t85 = 642593493130LL;

	t85 = (x389|(x390<(x391+x392)));

	if (t85 != -8350340607929LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x393 = 0U;
	uint8_t x394 = 40U;
	uint64_t x395 = 27106604620693536LLU;
	static int64_t x396 = INT64_MIN;
	int32_t t86 = 362374;

	t86 = (x393|(x394<(x395+x396)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x397 = 12;
	volatile int64_t x399 = 95765830815LL;
	volatile int32_t x400 = INT32_MIN;
	volatile int32_t t87 = -502019094;

	t87 = (x397|(x398<(x399+x400)));

	if (t87 != 12) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x401 = UINT64_MAX;
	volatile int32_t x402 = -1;
	volatile int64_t x404 = 1645859LL;
	volatile uint64_t t88 = UINT64_MAX;

	t88 = (x401|(x402<(x403+x404)));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x405 = -1;
	volatile int16_t x406 = -49;
	int8_t x408 = INT8_MIN;
	volatile int32_t t89 = 4176;

	t89 = (x405|(x406<(x407+x408)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x409 = 15U;
	int16_t x411 = INT16_MAX;
	uint32_t x412 = 257U;
	int32_t t90 = 7387168;

	t90 = (x409|(x410<(x411+x412)));

	if (t90 != 15) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x413 = 298282461;
	static int8_t x416 = INT8_MIN;

	t91 = (x413|(x414<(x415+x416)));

	if (t91 != 298282461) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x417 = 199418LLU;
	volatile int8_t x418 = 1;
	int64_t x419 = 31740074596LL;
	uint64_t t92 = 1535835222LLU;

	t92 = (x417|(x418<(x419+x420)));

	if (t92 != 199419LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x421 = -26;
	uint64_t x422 = 3965808732LLU;
	int32_t x424 = -483467;
	static int32_t t93 = -3702651;

	t93 = (x421|(x422<(x423+x424)));

	if (t93 != -25) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x429 = -1;
	volatile int64_t x430 = -1727455LL;
	int8_t x431 = 0;
	uint16_t x432 = 2U;
	int32_t t94 = -569;

	t94 = (x429|(x430<(x431+x432)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x433 = UINT64_MAX;
	static int32_t x434 = INT32_MAX;
	uint8_t x435 = UINT8_MAX;
	uint32_t x436 = 142805U;
	uint64_t t95 = UINT64_MAX;

	t95 = (x433|(x434<(x435+x436)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x437 = INT32_MAX;
	uint32_t x438 = 114005705U;
	int8_t x439 = 5;
	int16_t x440 = -10;
	volatile int32_t t96 = INT32_MAX;

	t96 = (x437|(x438<(x439+x440)));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x441 = INT64_MAX;
	volatile uint16_t x442 = 6U;
	volatile int64_t t97 = INT64_MAX;

	t97 = (x441|(x442<(x443+x444)));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x445 = 6LL;
	static uint8_t x446 = 0U;
	int8_t x448 = -1;
	volatile int64_t t98 = 1LL;

	t98 = (x445|(x446<(x447+x448)));

	if (t98 != 7LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x449 = INT64_MAX;
	volatile uint8_t x451 = 9U;
	volatile uint8_t x452 = 124U;
	volatile int64_t t99 = INT64_MAX;

	t99 = (x449|(x450<(x451+x452)));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

