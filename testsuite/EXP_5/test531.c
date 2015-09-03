#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = -1;
volatile int16_t x5 = INT16_MIN;
int16_t x7 = INT16_MAX;
volatile uint32_t t1 = 1U;
volatile int64_t x11 = INT64_MAX;
int32_t x20 = INT32_MIN;
uint16_t x34 = UINT16_MAX;
static int64_t x45 = INT64_MIN;
int8_t x46 = -1;
volatile int64_t x49 = -3339522791339376519LL;
uint64_t x67 = UINT64_MAX;
volatile uint64_t x70 = UINT64_MAX;
uint16_t x72 = UINT16_MAX;
int16_t x78 = 5;
uint8_t x79 = UINT8_MAX;
int32_t t15 = 292362146;
uint16_t x87 = UINT16_MAX;
int8_t x97 = 1;
static int16_t x101 = -1;
uint64_t x102 = UINT64_MAX;
int16_t x103 = INT16_MIN;
int64_t x110 = INT64_MIN;
volatile int32_t x114 = INT32_MIN;
int8_t x119 = INT8_MAX;
uint16_t x120 = UINT16_MAX;
uint64_t x122 = UINT64_MAX;
volatile int16_t x127 = -1;
int32_t t27 = -7294922;
int32_t x140 = -40092704;
int64_t x145 = -1LL;
static uint16_t x149 = UINT16_MAX;
int64_t x151 = -251526792956684132LL;
static uint64_t x152 = 11760054797947977LLU;
volatile uint64_t t34 = 2982725LLU;
int32_t x157 = -1;
uint32_t x160 = 50438U;
uint64_t t35 = 154092281LLU;
static volatile uint16_t x169 = UINT16_MAX;
int16_t x174 = INT16_MAX;
uint32_t x181 = 199645776U;
volatile uint32_t x183 = 1558U;
uint8_t x184 = 73U;
uint32_t t40 = 52932696U;
uint64_t x194 = 426235093562LLU;
int32_t x195 = -1;
int32_t x199 = -1;
volatile int16_t x208 = 0;
volatile uint64_t t45 = 17140288811873835LLU;
uint16_t x212 = 856U;
volatile uint16_t x214 = 4290U;
uint64_t t48 = 60996187980LLU;
int16_t x224 = INT16_MIN;
int16_t x229 = INT16_MAX;
volatile int64_t x237 = -1911468697537777074LL;
int64_t x245 = -242119LL;
static volatile int64_t t54 = -75910630261LL;
int64_t x253 = INT64_MIN;
int64_t x255 = 2598947LL;
int16_t x257 = -1;
int16_t x262 = INT16_MIN;
static uint64_t x265 = UINT64_MAX;
uint8_t x270 = 69U;
static volatile int64_t t60 = -720917853743105LL;
int32_t x276 = 20;
uint64_t x281 = UINT64_MAX;
volatile uint16_t x294 = UINT16_MAX;
int64_t x307 = INT64_MIN;
static volatile uint64_t t68 = 34409590787863LLU;
uint16_t x314 = UINT16_MAX;
int32_t x323 = INT32_MIN;
static volatile int64_t x326 = -1LL;
int64_t x332 = -1441401091LL;
static int32_t x342 = -28929;
uint32_t x346 = 6824U;
uint64_t x347 = 650660448370529LLU;
static uint64_t x348 = 14942204LLU;
int64_t x353 = -1487863LL;
int32_t x355 = INT32_MIN;
int32_t x358 = -1;
volatile int64_t t80 = 75757209466737LL;
int16_t x361 = INT16_MIN;
volatile uint64_t x365 = 441485894LLU;
uint64_t x366 = 1LLU;
int32_t t83 = -570;
int32_t x374 = INT32_MIN;
uint64_t t84 = 124629640894LLU;
uint32_t x379 = 432062U;
uint32_t t85 = 21729530U;
uint16_t x382 = 1555U;
static int32_t x384 = 1;
uint32_t x388 = 667370U;
int64_t t88 = 56730867898LL;
uint16_t x404 = 1U;
int8_t x405 = -22;
int16_t x407 = -2;
uint16_t x409 = UINT16_MAX;
int16_t x412 = INT16_MIN;
int8_t x413 = 0;
uint32_t x423 = 926474U;
int32_t x424 = -135177985;
int16_t x434 = 0;
static int8_t x435 = -59;
static int8_t x440 = INT8_MIN;
int16_t x443 = INT16_MAX;
int32_t t98 = -965971;
volatile uint16_t x445 = UINT16_MAX;


void f0(void) {
	static volatile uint64_t x1 = 835LLU;
	uint32_t x2 = UINT32_MAX;
	int32_t x4 = 16977;
	static uint64_t t0 = 799620482429060LLU;

	t0 = (x1&((x2/x3)-x4));

	if (t0 != 256LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	volatile uint32_t x8 = 84680767U;

	t1 = (x5&((x6/x7)-x8));

	if (t1 != 4210196480U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static volatile int32_t x10 = INT32_MIN;
	int8_t x12 = INT8_MIN;
	uint64_t t2 = 124LLU;

	t2 = (x9&((x10/x11)-x12));

	if (t2 != 128LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = INT64_MIN;
	uint32_t x18 = UINT32_MAX;
	volatile int8_t x19 = INT8_MIN;
	static int64_t t3 = -32452123LL;

	t3 = (x17&((x18/x19)-x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MAX;
	volatile uint64_t x26 = UINT64_MAX;
	static int8_t x27 = -1;
	uint16_t x28 = UINT16_MAX;
	volatile uint64_t t4 = 15633LLU;

	t4 = (x25&((x26/x27)-x28));

	if (t4 != 2147418114LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MIN;
	int32_t x30 = -252856;
	volatile int8_t x31 = INT8_MIN;
	volatile uint32_t x32 = UINT32_MAX;
	volatile uint32_t t5 = 1361894U;

	t5 = (x29&((x30/x31)-x32));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x33 = 12;
	int64_t x35 = -1LL;
	uint8_t x36 = 7U;
	static int64_t t6 = 2LL;

	t6 = (x33&((x34/x35)-x36));

	if (t6 != 8LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = UINT32_MAX;
	volatile int16_t x38 = -1;
	volatile uint64_t x39 = UINT64_MAX;
	volatile int8_t x40 = INT8_MIN;
	volatile uint64_t t7 = 33371338707532870LLU;

	t7 = (x37&((x38/x39)-x40));

	if (t7 != 129LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x41 = -1LL;
	uint64_t x42 = UINT64_MAX;
	int32_t x43 = -1;
	int32_t x44 = -1;
	volatile uint64_t t8 = 35279872779899LLU;

	t8 = (x41&((x42/x43)-x44));

	if (t8 != 2LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x47 = INT16_MIN;
	int64_t x48 = 4527LL;
	static int64_t t9 = INT64_MIN;

	t9 = (x45&((x46/x47)-x48));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x50 = UINT32_MAX;
	static int8_t x51 = -3;
	uint8_t x52 = 1U;
	int64_t t10 = 95498117118LL;

	t10 = (x49&((x50/x51)-x52));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = 48691589164996LL;
	uint64_t x54 = 113403145358245781LLU;
	int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MIN;
	uint64_t t11 = 213191LLU;

	t11 = (x53&((x54/x55)-x56));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = 116U;
	volatile int16_t x58 = INT16_MIN;
	int32_t x59 = 791255;
	uint32_t x60 = 1437902788U;
	volatile uint32_t t12 = 43210594U;

	t12 = (x57&((x58/x59)-x60));

	if (t12 != 52U) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x65 = -116;
	uint64_t x66 = 218108998291LLU;
	uint64_t x68 = 5371535091687874LLU;
	volatile uint64_t t13 = 107247821402LLU;

	t13 = (x65&((x66/x67)-x68));

	if (t13 != 18441372538617863692LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = 41;
	uint64_t x71 = 9026954LLU;
	volatile uint64_t t14 = 284923677LLU;

	t14 = (x69&((x70/x71)-x72));

	if (t14 != 41LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = -6;
	uint8_t x80 = 48U;

	t15 = (x77&((x78/x79)-x80));

	if (t15 != -48) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x81 = 13U;
	static uint8_t x82 = UINT8_MAX;
	int64_t x83 = INT64_MAX;
	static volatile int16_t x84 = -1;
	int64_t t16 = 2039646179LL;

	t16 = (x81&((x82/x83)-x84));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x85 = -2093;
	uint16_t x86 = 0U;
	volatile int8_t x88 = INT8_MIN;
	static int32_t t17 = 978969841;

	t17 = (x85&((x86/x87)-x88));

	if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = -1;
	int64_t x90 = INT64_MAX;
	int32_t x91 = INT32_MIN;
	uint64_t x92 = 2852954734LLU;
	static volatile uint64_t t18 = 1715503669963006663LLU;

	t18 = (x89&((x90/x91)-x92));

	if (t18 != 18446744066561629587LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x93 = UINT8_MAX;
	int32_t x94 = INT32_MIN;
	static int8_t x95 = INT8_MIN;
	static int32_t x96 = -1;
	int32_t t19 = -90309;

	t19 = (x93&((x94/x95)-x96));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x98 = -8965;
	volatile int64_t x99 = -1LL;
	static uint64_t x100 = 47193893LLU;
	uint64_t t20 = 144323781556LLU;

	t20 = (x97&((x98/x99)-x100));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x104 = INT64_MIN;
	volatile uint64_t t21 = 276145899004LLU;

	t21 = (x101&((x102/x103)-x104));

	if (t21 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = UINT16_MAX;
	uint8_t x106 = UINT8_MAX;
	int8_t x107 = -1;
	volatile int8_t x108 = 0;
	int32_t t22 = 3559234;

	t22 = (x105&((x106/x107)-x108));

	if (t22 != 65281) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = INT32_MAX;
	static uint64_t x111 = 277383046731612512LLU;
	int8_t x112 = -2;
	volatile uint64_t t23 = 151039785LLU;

	t23 = (x109&((x110/x111)-x112));

	if (t23 != 35LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = -1;
	uint16_t x115 = UINT16_MAX;
	static volatile int64_t x116 = INT64_MIN;
	volatile int64_t t24 = -3LL;

	t24 = (x113&((x114/x115)-x116));

	if (t24 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = INT16_MIN;
	volatile int32_t x118 = INT32_MIN;
	int32_t t25 = -786169;

	t25 = (x117&((x118/x119)-x120));

	if (t25 != -17006592) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MIN;
	static volatile int16_t x123 = -1;
	volatile int16_t x124 = INT16_MIN;
	uint64_t t26 = 295925LLU;

	t26 = (x121&((x122/x123)-x124));

	if (t26 != 32768LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x125 = UINT16_MAX;
	int16_t x126 = INT16_MAX;
	uint16_t x128 = 6U;

	t27 = (x125&((x126/x127)-x128));

	if (t27 != 32763) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = 126982381;
	int16_t x130 = -1;
	static volatile int64_t x131 = INT64_MIN;
	int16_t x132 = -1;
	int64_t t28 = 294278363LL;

	t28 = (x129&((x130/x131)-x132));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = INT16_MIN;
	int16_t x134 = 112;
	int16_t x135 = INT16_MIN;
	int16_t x136 = 1;
	volatile int32_t t29 = 4;

	t29 = (x133&((x134/x135)-x136));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x137 = -15626924LL;
	uint64_t x138 = 0LLU;
	int8_t x139 = 1;
	uint64_t t30 = 0LLU;

	t30 = (x137&((x138/x139)-x140));

	if (t30 != 33653760LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x141 = 61336U;
	static int64_t x142 = INT64_MAX;
	int32_t x143 = INT32_MIN;
	uint8_t x144 = 35U;
	int64_t t31 = -170521141LL;

	t31 = (x141&((x142/x143)-x144));

	if (t31 != 61336LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x146 = 12323800409613LLU;
	int32_t x147 = -1;
	static uint64_t x148 = 740007LLU;
	volatile uint64_t t32 = 2069900685LLU;

	t32 = (x145&((x146/x147)-x148));

	if (t32 != 18446744073708811609LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x150 = -1;
	volatile uint64_t t33 = 312200537LLU;

	t33 = (x149&((x150/x151)-x152));

	if (t33 != 43959LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = INT8_MAX;
	uint8_t x154 = 1U;
	uint64_t x155 = UINT64_MAX;
	int8_t x156 = 24;

	t34 = (x153&((x154/x155)-x156));

	if (t34 != 104LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x158 = 8216299791LLU;
	static int64_t x159 = INT64_MAX;

	t35 = (x157&((x158/x159)-x160));

	if (t35 != 18446744073709501178LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = INT16_MAX;
	static int16_t x166 = -1012;
	uint8_t x167 = UINT8_MAX;
	int64_t x168 = INT64_MIN;
	int64_t t36 = 890147418LL;

	t36 = (x165&((x166/x167)-x168));

	if (t36 != 32765LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x170 = INT16_MIN;
	int64_t x171 = INT64_MIN;
	static uint16_t x172 = 3759U;
	volatile int64_t t37 = -2903LL;

	t37 = (x169&((x170/x171)-x172));

	if (t37 != 61777LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x173 = 826;
	int8_t x175 = INT8_MAX;
	static volatile int16_t x176 = -500;
	int32_t t38 = -48975;

	t38 = (x173&((x174/x175)-x176));

	if (t38 != 562) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x177 = UINT32_MAX;
	uint32_t x178 = UINT32_MAX;
	static uint64_t x179 = UINT64_MAX;
	static int64_t x180 = INT64_MAX;
	uint64_t t39 = 852958185LLU;

	t39 = (x177&((x178/x179)-x180));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x182 = 1;

	t40 = (x181&((x182/x183)-x184));

	if (t40 != 199645712U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x189 = 35U;
	static int64_t x190 = 8LL;
	static int8_t x191 = -1;
	volatile int32_t x192 = -1;
	int64_t t41 = -285761285003LL;

	t41 = (x189&((x190/x191)-x192));

	if (t41 != 33LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = INT8_MIN;
	static volatile uint8_t x196 = 3U;
	volatile uint64_t t42 = 719836823705999558LLU;

	t42 = (x193&((x194/x195)-x196));

	if (t42 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x197 = INT16_MIN;
	static volatile int16_t x198 = INT16_MAX;
	int8_t x200 = -56;
	volatile int32_t t43 = 6309;

	t43 = (x197&((x198/x199)-x200));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = INT8_MIN;
	int8_t x202 = INT8_MAX;
	int8_t x203 = -11;
	int64_t x204 = 43078291LL;
	volatile int64_t t44 = 3753283887495783LL;

	t44 = (x201&((x202/x203)-x204));

	if (t44 != -43078400LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = -1LL;
	uint64_t x206 = 656922LLU;
	int16_t x207 = -1557;

	t45 = (x205&((x206/x207)-x208));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = -1;
	uint16_t x210 = 575U;
	int64_t x211 = INT64_MIN;
	int64_t t46 = -469LL;

	t46 = (x209&((x210/x211)-x212));

	if (t46 != -856LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x213 = 0U;
	int8_t x215 = INT8_MIN;
	volatile int32_t x216 = INT32_MIN;
	int32_t t47 = 31400557;

	t47 = (x213&((x214/x215)-x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x217 = -1;
	int8_t x218 = 2;
	int8_t x219 = INT8_MIN;
	uint64_t x220 = 1568566885LLU;

	t48 = (x217&((x218/x219)-x220));

	if (t48 != 18446744072140984731LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x221 = 0U;
	uint64_t x222 = 2923370796LLU;
	int32_t x223 = -249763532;
	volatile uint64_t t49 = 673123679LLU;

	t49 = (x221&((x222/x223)-x224));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = INT8_MIN;
	static int16_t x226 = INT16_MIN;
	int32_t x227 = -227;
	int64_t x228 = -3172078613640600644LL;
	volatile int64_t t50 = -199LL;

	t50 = (x225&((x226/x227)-x228));

	if (t50 != 3172078613640600704LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x230 = -1;
	int8_t x231 = INT8_MAX;
	int8_t x232 = INT8_MAX;
	volatile int32_t t51 = 4349;

	t51 = (x229&((x230/x231)-x232));

	if (t51 != 32641) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x238 = UINT64_MAX;
	int16_t x239 = INT16_MAX;
	static uint16_t x240 = 3U;
	uint64_t t52 = 91287925658729LLU;

	t52 = (x237&((x238/x239)-x240));

	if (t52 != 524300LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x241 = INT32_MIN;
	int64_t x242 = INT64_MIN;
	int64_t x243 = -2969804995833508923LL;
	int32_t x244 = -645;
	static int64_t t53 = 2132236778470238870LL;

	t53 = (x241&((x242/x243)-x244));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x246 = INT64_MIN;
	uint8_t x247 = UINT8_MAX;
	int16_t x248 = -9;

	t54 = (x245&((x246/x247)-x248));

	if (t54 != -36170086419247607LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = -1;
	static int32_t x250 = INT32_MAX;
	int32_t x251 = 4972;
	static int16_t x252 = INT16_MIN;
	static int32_t t55 = -58567166;

	t55 = (x249&((x250/x251)-x252));

	if (t55 != 464683) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x254 = -1LL;
	int8_t x256 = INT8_MIN;
	volatile int64_t t56 = -616316327487486LL;

	t56 = (x253&((x254/x255)-x256));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x258 = 5;
	static volatile int64_t x259 = -1LL;
	uint16_t x260 = UINT16_MAX;
	int64_t t57 = 55130530749LL;

	t57 = (x257&((x258/x259)-x260));

	if (t57 != -65540LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x261 = INT8_MIN;
	uint64_t x263 = 810799932184013LLU;
	int16_t x264 = INT16_MAX;
	volatile uint64_t t58 = 12422869813775574LLU;

	t58 = (x261&((x262/x263)-x264));

	if (t58 != 18446744073709541504LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x266 = 7;
	static uint8_t x267 = UINT8_MAX;
	static int8_t x268 = -5;
	uint64_t t59 = 13001357177LLU;

	t59 = (x265&((x266/x267)-x268));

	if (t59 != 5LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = 768;
	volatile int32_t x271 = INT32_MIN;
	volatile int64_t x272 = INT64_MAX;

	t60 = (x269&((x270/x271)-x272));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = -18654532;
	int64_t x274 = INT64_MIN;
	uint64_t x275 = 7123925566738867282LLU;
	volatile uint64_t t61 = 8LLU;

	t61 = (x273&((x274/x275)-x276));

	if (t61 != 18446744073690897068LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x282 = UINT32_MAX;
	uint8_t x283 = UINT8_MAX;
	int8_t x284 = INT8_MIN;
	uint64_t t62 = 51053780741LLU;

	t62 = (x281&((x282/x283)-x284));

	if (t62 != 16843137LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x285 = 15378451LLU;
	volatile uint8_t x286 = 9U;
	static volatile uint16_t x287 = 4U;
	int16_t x288 = INT16_MIN;
	static uint64_t t63 = 12420118892711794LLU;

	t63 = (x285&((x286/x287)-x288));

	if (t63 != 32770LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x289 = INT8_MAX;
	volatile int64_t x290 = INT64_MAX;
	uint8_t x291 = 97U;
	uint8_t x292 = 56U;
	int64_t t64 = 1392248739850863LL;

	t64 = (x289&((x290/x291)-x292));

	if (t64 != 25LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x293 = -13;
	int32_t x295 = INT32_MIN;
	static int32_t x296 = -1;
	volatile int32_t t65 = 12;

	t65 = (x293&((x294/x295)-x296));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x297 = INT32_MIN;
	int16_t x298 = 371;
	int8_t x299 = INT8_MIN;
	int16_t x300 = -1;
	static volatile int32_t t66 = INT32_MIN;

	t66 = (x297&((x298/x299)-x300));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x301 = INT32_MIN;
	int16_t x302 = 327;
	static int64_t x303 = INT64_MAX;
	uint32_t x304 = 60398888U;
	static volatile int64_t t67 = -62401815995030LL;

	t67 = (x301&((x302/x303)-x304));

	if (t67 != -2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x305 = UINT64_MAX;
	static int8_t x306 = INT8_MAX;
	uint8_t x308 = UINT8_MAX;

	t68 = (x305&((x306/x307)-x308));

	if (t68 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x309 = UINT32_MAX;
	int32_t x310 = -105813;
	static int64_t x311 = -1LL;
	uint8_t x312 = 1U;
	static volatile int64_t t69 = -482102043LL;

	t69 = (x309&((x310/x311)-x312));

	if (t69 != 105812LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x313 = 914157699036LLU;
	uint64_t x315 = 44627493LLU;
	uint16_t x316 = 3U;
	volatile uint64_t t70 = 27LLU;

	t70 = (x313&((x314/x315)-x316));

	if (t70 != 914157699036LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x321 = INT32_MIN;
	static uint64_t x322 = UINT64_MAX;
	uint8_t x324 = 87U;
	static volatile uint64_t t71 = 3478189LLU;

	t71 = (x321&((x322/x323)-x324));

	if (t71 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x325 = INT64_MIN;
	static int64_t x327 = 377LL;
	int8_t x328 = 0;
	static int64_t t72 = -175205512014651LL;

	t72 = (x325&((x326/x327)-x328));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x329 = 5660;
	uint8_t x330 = 0U;
	int64_t x331 = INT64_MAX;
	int64_t t73 = 0LL;

	t73 = (x329&((x330/x331)-x332));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x333 = -1LL;
	int32_t x334 = -3968;
	int8_t x335 = INT8_MIN;
	uint64_t x336 = 2159698806840772LLU;
	volatile uint64_t t74 = 8038824036436938LLU;

	t74 = (x333&((x334/x335)-x336));

	if (t74 != 18444584374902710875LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x337 = UINT16_MAX;
	uint64_t x338 = 47LLU;
	static int32_t x339 = INT32_MIN;
	int16_t x340 = 2987;
	static volatile uint64_t t75 = 5970487870364LLU;

	t75 = (x337&((x338/x339)-x340));

	if (t75 != 62549LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x341 = INT8_MIN;
	volatile int8_t x343 = -1;
	static int8_t x344 = -16;
	int32_t t76 = -1215;

	t76 = (x341&((x342/x343)-x344));

	if (t76 != 28928) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x345 = 0U;
	volatile uint64_t t77 = 537274661523978LLU;

	t77 = (x345&((x346/x347)-x348));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x349 = 1LLU;
	uint16_t x350 = UINT16_MAX;
	int32_t x351 = INT32_MAX;
	int16_t x352 = INT16_MAX;
	static volatile uint64_t t78 = 117919183297LLU;

	t78 = (x349&((x350/x351)-x352));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x354 = -66152LL;
	volatile int32_t x356 = INT32_MIN;
	int64_t t79 = 10439831324546015LL;

	t79 = (x353&((x354/x355)-x356));

	if (t79 != 2147483648LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x357 = 5294239U;
	int64_t x359 = 3970179337378803LL;
	int32_t x360 = -206503243;

	t80 = (x357&((x358/x359)-x360));

	if (t80 != 4245515LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x362 = UINT64_MAX;
	static int8_t x363 = INT8_MIN;
	volatile int16_t x364 = INT16_MIN;
	uint64_t t81 = 435108LLU;

	t81 = (x361&((x362/x363)-x364));

	if (t81 != 32768LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x367 = 10;
	uint8_t x368 = 0U;
	uint64_t t82 = 3352974060673185LLU;

	t82 = (x365&((x366/x367)-x368));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x369 = INT16_MIN;
	volatile uint8_t x370 = 34U;
	int8_t x371 = INT8_MIN;
	int32_t x372 = -780062;

	t83 = (x369&((x370/x371)-x372));

	if (t83 != 753664) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x373 = 3887054830918LLU;
	static int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MAX;

	t84 = (x373&((x374/x375)-x376));

	if (t84 != 3887054830848LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x377 = UINT16_MAX;
	static int16_t x378 = INT16_MAX;
	int8_t x380 = INT8_MIN;

	t85 = (x377&((x378/x379)-x380));

	if (t85 != 128U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint64_t x381 = 1980291114028LLU;
	uint16_t x383 = 3995U;
	uint64_t t86 = 197021945490582LLU;

	t86 = (x381&((x382/x383)-x384));

	if (t86 != 1980291114028LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x385 = 39205LL;
	static uint64_t x386 = 4000635462LLU;
	static int64_t x387 = 22373970335LL;
	volatile uint64_t t87 = 17211334615LLU;

	t87 = (x385&((x386/x387)-x388));

	if (t87 != 37124LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x393 = INT32_MIN;
	static int64_t x394 = 7342149985LL;
	volatile int64_t x395 = INT64_MAX;
	uint16_t x396 = UINT16_MAX;

	t88 = (x393&((x394/x395)-x396));

	if (t88 != -2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x397 = 2;
	static int64_t x398 = -50761348167LL;
	uint16_t x399 = UINT16_MAX;
	uint32_t x400 = UINT32_MAX;
	int64_t t89 = 403786847LL;

	t89 = (x397&((x398/x399)-x400));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x401 = INT8_MIN;
	volatile int16_t x402 = 7;
	static uint32_t x403 = 1978U;
	uint32_t t90 = 44U;

	t90 = (x401&((x402/x403)-x404));

	if (t90 != 4294967168U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x406 = 2460844U;
	volatile int8_t x408 = -6;
	volatile uint32_t t91 = 65U;

	t91 = (x405&((x406/x407)-x408));

	if (t91 != 2U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x410 = 1;
	volatile uint32_t x411 = 21439U;
	static uint32_t t92 = 1U;

	t92 = (x409&((x410/x411)-x412));

	if (t92 != 32768U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x414 = INT16_MIN;
	int8_t x415 = INT8_MIN;
	int8_t x416 = -1;
	int32_t t93 = -58509203;

	t93 = (x413&((x414/x415)-x416));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x421 = -1;
	static int64_t x422 = -1201648750747LL;
	int64_t t94 = 133505673372932LL;

	t94 = (x421&((x422/x423)-x424));

	if (t94 != 133880973LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x429 = -66139352LL;
	int8_t x430 = -1;
	int16_t x431 = INT16_MAX;
	uint32_t x432 = 3U;
	int64_t t95 = 283LL;

	t95 = (x429&((x430/x431)-x432));

	if (t95 != 4228827944LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x433 = 40;
	int16_t x436 = INT16_MIN;
	int32_t t96 = -7;

	t96 = (x433&((x434/x435)-x436));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x437 = 33U;
	int32_t x438 = INT32_MIN;
	static volatile uint16_t x439 = UINT16_MAX;
	volatile int32_t t97 = -3;

	t97 = (x437&((x438/x439)-x440));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x441 = INT32_MAX;
	int32_t x442 = INT32_MIN;
	int16_t x444 = 196;

	t98 = (x441&((x442/x443)-x444));

	if (t98 != 2147417914) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x446 = 13U;
	uint64_t x447 = UINT64_MAX;
	int64_t x448 = 600929680891LL;
	uint64_t t99 = 0LLU;

	t99 = (x445&((x446/x447)-x448));

	if (t99 != 49669LLU) { NG(); } else { ; }
	
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

