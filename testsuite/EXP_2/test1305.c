#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x1 = INT8_MAX;
static uint32_t x7 = UINT32_MAX;
uint16_t x8 = UINT16_MAX;
int8_t x12 = INT8_MIN;
int64_t x15 = -1LL;
static volatile int64_t t3 = 0LL;
volatile int16_t x18 = INT16_MIN;
uint32_t x21 = 10039U;
volatile int64_t t5 = -205LL;
uint8_t x26 = 8U;
static int32_t t7 = 56944;
int8_t x34 = INT8_MAX;
int8_t x40 = 1;
static int8_t x42 = -1;
static int64_t t10 = -1LL;
static int16_t x45 = -1;
int64_t x55 = INT64_MAX;
int64_t t14 = -160643943385730LL;
volatile int8_t x67 = 8;
volatile int32_t t16 = -3;
uint32_t x79 = 553673U;
static volatile int64_t x80 = INT64_MAX;
volatile int32_t t20 = -7377543;
uint64_t x91 = 77207301440163LLU;
uint64_t x107 = UINT64_MAX;
int64_t t26 = 2338LL;
int64_t x110 = -481211288LL;
int32_t x112 = INT32_MIN;
volatile int32_t t27 = -365414768;
int8_t x114 = INT8_MIN;
int32_t t28 = -18;
static int64_t x117 = INT64_MAX;
int16_t x119 = INT16_MIN;
int64_t x123 = -7450021899947LL;
static volatile uint16_t x124 = UINT16_MAX;
static uint16_t x128 = 73U;
volatile int32_t t31 = 17;
volatile uint64_t t32 = 3337951LLU;
uint8_t x138 = 18U;
volatile int32_t x139 = 610;
static volatile uint8_t x144 = 29U;
static volatile int32_t t36 = 859901737;
volatile int32_t t38 = -2710;
volatile int32_t x157 = 591095049;
uint8_t x161 = 9U;
int16_t x168 = INT16_MAX;
int32_t t42 = 3036474;
volatile int32_t t43 = 47;
int8_t x178 = -1;
int8_t x192 = 3;
int8_t x193 = -1;
static volatile int16_t x196 = INT16_MAX;
int16_t x199 = -13039;
int32_t x200 = -11;
int8_t x202 = -24;
uint16_t x209 = 269U;
uint16_t x215 = 834U;
int16_t x221 = INT16_MIN;
int32_t x227 = -508208;
int64_t x232 = INT64_MIN;
int64_t t57 = -1171106074521139305LL;
int8_t x233 = INT8_MIN;
static volatile uint16_t x237 = UINT16_MAX;
int64_t x244 = -1LL;
volatile int64_t t60 = -39910368180141LL;
static uint8_t x246 = 0U;
int64_t x263 = -1LL;
int8_t x265 = -33;
static uint16_t x277 = 0U;
static int64_t x278 = INT64_MAX;
int32_t x280 = INT32_MIN;
int32_t t68 = 36;
int32_t x288 = 626137735;
int32_t t70 = 53537984;
volatile uint32_t t72 = 18964U;
static int16_t x297 = -1;
int8_t x304 = INT8_MIN;
int64_t x305 = 2134156124LL;
uint16_t x306 = 23428U;
static uint64_t x308 = 907162738LLU;
int32_t x309 = -93;
volatile int32_t x313 = INT32_MIN;
uint8_t x314 = UINT8_MAX;
volatile int64_t t77 = -267392002LL;
int8_t x333 = -1;
volatile uint32_t x334 = UINT32_MAX;
volatile int8_t x336 = INT8_MAX;
static volatile uint8_t x340 = UINT8_MAX;
int8_t x342 = INT8_MIN;
static volatile int32_t t85 = -7005600;
int32_t x353 = -1;
int64_t t88 = 1LL;
volatile uint64_t x365 = 427249693345511LLU;
int8_t x367 = INT8_MAX;
int8_t x371 = -5;
int32_t t92 = 29685;
uint32_t x378 = UINT32_MAX;
int32_t x389 = 0;
static volatile uint16_t x398 = UINT16_MAX;
int64_t x400 = INT64_MIN;
int16_t x402 = INT16_MAX;


void f0(void) {
	volatile uint32_t x2 = UINT32_MAX;
	int64_t x3 = -62LL;
	int32_t x4 = 26139;
	int32_t t0 = 1053976909;

	t0 = ((x1<=(x2==x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint8_t x6 = 6U;
	volatile int32_t t1 = -2480678;

	t1 = ((x5<=(x6==x7))%x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 2U;
	int32_t x10 = -685863;
	volatile uint8_t x11 = UINT8_MAX;
	static volatile int32_t t2 = 982231501;

	t2 = ((x9<=(x10==x11))%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x13 = 113725;
	int64_t x14 = -1LL;
	int64_t x16 = INT64_MAX;

	t3 = ((x13<=(x14==x15))%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -3;
	int32_t x19 = -1656683;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -240;

	t4 = ((x17<=(x18==x19))%x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x22 = -1;
	volatile int64_t x23 = INT64_MIN;
	int64_t x24 = INT64_MAX;

	t5 = ((x21<=(x22==x23))%x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	static int16_t x27 = INT16_MIN;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = 4239958;

	t6 = ((x25<=(x26==x27))%x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	int64_t x30 = 112387LL;
	static int32_t x31 = INT32_MIN;
	int32_t x32 = INT32_MAX;

	t7 = ((x29<=(x30==x31))%x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = UINT16_MAX;
	static int8_t x35 = 2;
	volatile int16_t x36 = INT16_MIN;
	int32_t t8 = -54125071;

	t8 = ((x33<=(x34==x35))%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 1709879763623666896LLU;
	uint64_t x38 = 14970313847LLU;
	volatile int16_t x39 = -2250;
	int32_t t9 = -57;

	t9 = ((x37<=(x38==x39))%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 12U;
	uint8_t x43 = 112U;
	static int64_t x44 = -1LL;

	t10 = ((x41<=(x42==x43))%x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = -1;
	int32_t x47 = 2324328;
	volatile int64_t x48 = INT64_MIN;
	volatile int64_t t11 = -3759532611817829496LL;

	t11 = ((x45<=(x46==x47))%x48);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 1;
	uint32_t x50 = 5119806U;
	static int16_t x51 = INT16_MIN;
	static uint32_t x52 = 141983U;
	static volatile uint32_t t12 = 1795062391U;

	t12 = ((x49<=(x50==x51))%x52);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	volatile int64_t x54 = -2363368819LL;
	int64_t x56 = INT64_MIN;
	static int64_t t13 = -89455LL;

	t13 = ((x53<=(x54==x55))%x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -5;
	int8_t x58 = 22;
	uint32_t x59 = 15U;
	volatile int64_t x60 = -1LL;

	t14 = ((x57<=(x58==x59))%x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 49U;
	volatile uint16_t x62 = 0U;
	static int32_t x63 = INT32_MIN;
	int64_t x64 = -52192915LL;
	int64_t t15 = -10775LL;

	t15 = ((x61<=(x62==x63))%x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	uint32_t x66 = 14745U;
	volatile int8_t x68 = INT8_MAX;

	t16 = ((x65<=(x66==x67))%x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 24552U;
	uint64_t x70 = 11271LLU;
	uint16_t x71 = 4659U;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 356037998;

	t17 = ((x69<=(x70==x71))%x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = 1;
	static int16_t x74 = INT16_MAX;
	int64_t x75 = INT64_MIN;
	volatile uint64_t x76 = UINT64_MAX;
	static uint64_t t18 = 1023LLU;

	t18 = ((x73<=(x74==x75))%x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = 1;
	volatile int8_t x78 = INT8_MIN;
	int64_t t19 = -16LL;

	t19 = ((x77<=(x78==x79))%x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = -22;
	int64_t x82 = -1LL;
	int32_t x83 = -395;
	int16_t x84 = INT16_MAX;

	t20 = ((x81<=(x82==x83))%x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = 15U;
	int32_t x86 = INT32_MIN;
	static uint8_t x87 = 3U;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = -41103;

	t21 = ((x85<=(x86==x87))%x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 250934U;
	int32_t x90 = -361;
	int8_t x92 = -43;
	static volatile int32_t t22 = 24175393;

	t22 = ((x89<=(x90==x91))%x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	uint8_t x94 = 13U;
	uint64_t x95 = 117432122344573017LLU;
	int32_t x96 = 4;
	volatile int32_t t23 = 391411;

	t23 = ((x93<=(x94==x95))%x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 8324152LL;
	uint16_t x98 = 490U;
	uint32_t x99 = 38U;
	uint16_t x100 = 11387U;
	volatile int32_t t24 = 11219;

	t24 = ((x97<=(x98==x99))%x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MAX;
	uint16_t x102 = UINT16_MAX;
	volatile uint16_t x103 = 13939U;
	volatile int16_t x104 = INT16_MIN;
	int32_t t25 = 20;

	t25 = ((x101<=(x102==x103))%x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x105 = UINT32_MAX;
	static int32_t x106 = INT32_MAX;
	static int64_t x108 = -1LL;

	t26 = ((x105<=(x106==x107))%x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x109 = 9962559205170867LLU;
	static int32_t x111 = -315434;

	t27 = ((x109<=(x110==x111))%x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	uint32_t x115 = 214U;
	volatile uint16_t x116 = UINT16_MAX;

	t28 = ((x113<=(x114==x115))%x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x118 = INT64_MIN;
	int8_t x120 = 1;
	volatile int32_t t29 = 94;

	t29 = ((x117<=(x118==x119))%x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	int8_t x122 = -1;
	int32_t t30 = 1;

	t30 = ((x121<=(x122==x123))%x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	uint16_t x126 = UINT16_MAX;
	static int32_t x127 = INT32_MAX;

	t31 = ((x125<=(x126==x127))%x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 46;
	uint8_t x130 = 88U;
	int32_t x131 = -708;
	static volatile uint64_t x132 = 10171326277894LLU;

	t32 = ((x129<=(x130==x131))%x132);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MAX;
	int8_t x135 = INT8_MAX;
	int64_t x136 = -779498244627350082LL;
	volatile int64_t t33 = -846932834136191095LL;

	t33 = ((x133<=(x134==x135))%x136);

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x137 = UINT32_MAX;
	int64_t x140 = INT64_MIN;
	volatile int64_t t34 = -57LL;

	t34 = ((x137<=(x138==x139))%x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x141 = 72U;
	int64_t x142 = INT64_MIN;
	uint64_t x143 = 3936180718469222LLU;
	volatile int32_t t35 = -674623514;

	t35 = ((x141<=(x142==x143))%x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int8_t x146 = INT8_MIN;
	static int64_t x147 = INT64_MIN;
	int16_t x148 = INT16_MAX;

	t36 = ((x145<=(x146==x147))%x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -6750425661731LL;
	static uint64_t x150 = 117LLU;
	uint64_t x151 = 31976693LLU;
	int8_t x152 = INT8_MAX;
	int32_t t37 = -97;

	t37 = ((x149<=(x150==x151))%x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	static int16_t x154 = 1;
	static volatile uint64_t x155 = 13LLU;
	int32_t x156 = -1728399;

	t38 = ((x153<=(x154==x155))%x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = 1063373LL;
	int8_t x159 = INT8_MIN;
	static volatile int64_t x160 = INT64_MIN;
	volatile int64_t t39 = -874400077926LL;

	t39 = ((x157<=(x158==x159))%x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x162 = 1971004106U;
	uint8_t x163 = 1U;
	static int64_t x164 = -1LL;
	int64_t t40 = -4560623LL;

	t40 = ((x161<=(x162==x163))%x164);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 27994;
	uint8_t x166 = UINT8_MAX;
	int16_t x167 = INT16_MAX;
	volatile int32_t t41 = -5046;

	t41 = ((x165<=(x166==x167))%x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -74;
	int32_t x170 = INT32_MAX;
	int64_t x171 = INT64_MIN;
	int32_t x172 = INT32_MIN;

	t42 = ((x169<=(x170==x171))%x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = INT16_MIN;
	int64_t x174 = -55128300LL;
	volatile uint16_t x175 = 15401U;
	int8_t x176 = INT8_MIN;

	t43 = ((x173<=(x174==x175))%x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 8U;
	int16_t x179 = INT16_MAX;
	int8_t x180 = INT8_MIN;
	volatile int32_t t44 = -38037;

	t44 = ((x177<=(x178==x179))%x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 139074880122169446LLU;
	static int16_t x182 = 18;
	int32_t x183 = INT32_MIN;
	volatile int64_t x184 = 97LL;
	static volatile int64_t t45 = -908428LL;

	t45 = ((x181<=(x182==x183))%x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = 22;
	int16_t x186 = INT16_MIN;
	int32_t x187 = 13302;
	int16_t x188 = 52;
	volatile int32_t t46 = -54058;

	t46 = ((x185<=(x186==x187))%x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x189 = UINT16_MAX;
	int16_t x190 = INT16_MAX;
	int8_t x191 = 1;
	volatile int32_t t47 = -15051;

	t47 = ((x189<=(x190==x191))%x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x194 = INT8_MAX;
	int64_t x195 = -1LL;
	int32_t t48 = -207967;

	t48 = ((x193<=(x194==x195))%x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x197 = 8640U;
	int64_t x198 = -1LL;
	int32_t t49 = 13;

	t49 = ((x197<=(x198==x199))%x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = INT64_MIN;
	volatile uint32_t x203 = UINT32_MAX;
	int16_t x204 = INT16_MAX;
	volatile int32_t t50 = -209;

	t50 = ((x201<=(x202==x203))%x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	uint16_t x206 = 1977U;
	static int8_t x207 = 1;
	int64_t x208 = -3875370560457681930LL;
	volatile int64_t t51 = 10042654154500688LL;

	t51 = ((x205<=(x206==x207))%x208);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x210 = 55796497U;
	uint16_t x211 = 29030U;
	uint16_t x212 = UINT16_MAX;
	static volatile int32_t t52 = -1497636;

	t52 = ((x209<=(x210==x211))%x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 89U;
	int64_t x214 = 2045921168LL;
	volatile int8_t x216 = 5;
	static volatile int32_t t53 = 217080448;

	t53 = ((x213<=(x214==x215))%x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x217 = UINT16_MAX;
	int16_t x218 = -31;
	int8_t x219 = 0;
	static int8_t x220 = INT8_MIN;
	volatile int32_t t54 = -6500;

	t54 = ((x217<=(x218==x219))%x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x222 = 60617877;
	int32_t x223 = -164533316;
	volatile uint16_t x224 = 2U;
	volatile int32_t t55 = -453249;

	t55 = ((x221<=(x222==x223))%x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = -11821;
	volatile int32_t x226 = 838744408;
	uint16_t x228 = UINT16_MAX;
	static int32_t t56 = -14091;

	t56 = ((x225<=(x226==x227))%x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 0;
	volatile int16_t x230 = -2;
	uint16_t x231 = UINT16_MAX;

	t57 = ((x229<=(x230==x231))%x232);

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = INT8_MIN;
	int64_t x235 = INT64_MIN;
	volatile int64_t x236 = -203726945749192243LL;
	int64_t t58 = -1076370755601665LL;

	t58 = ((x233<=(x234==x235))%x236);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x238 = UINT8_MAX;
	uint16_t x239 = 52U;
	static int64_t x240 = INT64_MIN;
	static volatile int64_t t59 = -412636249288521761LL;

	t59 = ((x237<=(x238==x239))%x240);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x241 = -1;
	static uint16_t x242 = 0U;
	uint64_t x243 = UINT64_MAX;

	t60 = ((x241<=(x242==x243))%x244);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 37LL;
	uint8_t x247 = 26U;
	int32_t x248 = -1;
	volatile int32_t t61 = -242428417;

	t61 = ((x245<=(x246==x247))%x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 1717LLU;
	volatile int32_t x250 = INT32_MAX;
	int8_t x251 = 22;
	uint8_t x252 = 7U;
	volatile int32_t t62 = -17925456;

	t62 = ((x249<=(x250==x251))%x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = UINT8_MAX;
	int16_t x254 = -902;
	volatile int64_t x255 = 369328822828LL;
	int8_t x256 = INT8_MAX;
	volatile int32_t t63 = -234;

	t63 = ((x253<=(x254==x255))%x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = INT16_MIN;
	uint8_t x262 = 15U;
	int32_t x264 = INT32_MIN;
	int32_t t64 = 77498923;

	t64 = ((x261<=(x262==x263))%x264);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x266 = INT16_MAX;
	static volatile uint8_t x267 = 13U;
	int8_t x268 = INT8_MIN;
	int32_t t65 = -914249;

	t65 = ((x265<=(x266==x267))%x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = INT64_MAX;
	int8_t x270 = INT8_MIN;
	int16_t x271 = 1265;
	volatile int64_t x272 = INT64_MIN;
	static int64_t t66 = -383536698LL;

	t66 = ((x269<=(x270==x271))%x272);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = -704;
	static volatile int16_t x274 = -1;
	int8_t x275 = INT8_MAX;
	int16_t x276 = INT16_MIN;
	static volatile int32_t t67 = 821;

	t67 = ((x273<=(x274==x275))%x276);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x279 = INT32_MIN;

	t68 = ((x277<=(x278==x279))%x280);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x281 = 553499LLU;
	int32_t x282 = -1;
	uint8_t x283 = 40U;
	int8_t x284 = INT8_MIN;
	volatile int32_t t69 = 575544;

	t69 = ((x281<=(x282==x283))%x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x285 = 9775962532938411LLU;
	volatile int8_t x286 = INT8_MAX;
	volatile int16_t x287 = INT16_MIN;

	t70 = ((x285<=(x286==x287))%x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = 1;
	int32_t x290 = -1;
	int16_t x291 = INT16_MIN;
	int64_t x292 = -1LL;
	int64_t t71 = -166LL;

	t71 = ((x289<=(x290==x291))%x292);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x293 = 1710U;
	uint8_t x294 = 1U;
	int32_t x295 = 1;
	volatile uint32_t x296 = UINT32_MAX;

	t72 = ((x293<=(x294==x295))%x296);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x298 = INT8_MIN;
	int64_t x299 = -1LL;
	int16_t x300 = -1;
	volatile int32_t t73 = -88152783;

	t73 = ((x297<=(x298==x299))%x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = 1;
	static int32_t x302 = -4998402;
	int32_t x303 = 436;
	int32_t t74 = -39777;

	t74 = ((x301<=(x302==x303))%x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x307 = -1;
	volatile uint64_t t75 = 87826749570355424LLU;

	t75 = ((x305<=(x306==x307))%x308);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x310 = 65U;
	uint16_t x311 = 11U;
	int8_t x312 = 34;
	volatile int32_t t76 = -1049431559;

	t76 = ((x309<=(x310==x311))%x312);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x315 = INT16_MIN;
	int64_t x316 = -1LL;

	t77 = ((x313<=(x314==x315))%x316);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x317 = -21;
	int8_t x318 = -1;
	uint8_t x319 = 2U;
	uint16_t x320 = 4U;
	int32_t t78 = -1;

	t78 = ((x317<=(x318==x319))%x320);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = -16;
	int32_t x322 = INT32_MAX;
	uint16_t x323 = UINT16_MAX;
	static int64_t x324 = INT64_MAX;
	static volatile int64_t t79 = -25723190LL;

	t79 = ((x321<=(x322==x323))%x324);

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x325 = INT32_MIN;
	int64_t x326 = -1LL;
	static int32_t x327 = -1;
	int32_t x328 = INT32_MIN;
	int32_t t80 = 201;

	t80 = ((x325<=(x326==x327))%x328);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x329 = 370472LL;
	int16_t x330 = INT16_MIN;
	static int8_t x331 = -6;
	volatile uint64_t x332 = 15555490620961LLU;
	uint64_t t81 = 10740911462946062LLU;

	t81 = ((x329<=(x330==x331))%x332);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x335 = -1;
	volatile int32_t t82 = 289778660;

	t82 = ((x333<=(x334==x335))%x336);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x337 = 3U;
	int64_t x338 = 15943LL;
	uint64_t x339 = 291862LLU;
	static volatile int32_t t83 = -1568;

	t83 = ((x337<=(x338==x339))%x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x341 = 313407182732656634LL;
	volatile uint16_t x343 = UINT16_MAX;
	static int64_t x344 = -1LL;
	volatile int64_t t84 = -3838LL;

	t84 = ((x341<=(x342==x343))%x344);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x345 = INT16_MIN;
	int8_t x346 = -1;
	int64_t x347 = 5064280221662LL;
	static int32_t x348 = 6687;

	t85 = ((x345<=(x346==x347))%x348);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x349 = 69578999U;
	uint32_t x350 = UINT32_MAX;
	static int8_t x351 = -1;
	uint32_t x352 = 827232273U;
	static uint32_t t86 = 5U;

	t86 = ((x349<=(x350==x351))%x352);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x354 = 33;
	volatile int32_t x355 = INT32_MAX;
	int8_t x356 = 1;
	static int32_t t87 = -97;

	t87 = ((x353<=(x354==x355))%x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x357 = UINT8_MAX;
	int32_t x358 = INT32_MAX;
	volatile uint8_t x359 = 7U;
	int64_t x360 = INT64_MIN;

	t88 = ((x357<=(x358==x359))%x360);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x361 = INT16_MIN;
	static uint64_t x362 = 3954163048467029LLU;
	static volatile int64_t x363 = INT64_MIN;
	int8_t x364 = INT8_MIN;
	volatile int32_t t89 = 22;

	t89 = ((x361<=(x362==x363))%x364);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x366 = UINT16_MAX;
	int8_t x368 = INT8_MIN;
	volatile int32_t t90 = 469;

	t90 = ((x365<=(x366==x367))%x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x369 = INT32_MIN;
	static uint32_t x370 = UINT32_MAX;
	int64_t x372 = 69888793626080096LL;
	volatile int64_t t91 = -1112040LL;

	t91 = ((x369<=(x370==x371))%x372);

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x373 = UINT16_MAX;
	int8_t x374 = INT8_MAX;
	int32_t x375 = INT32_MIN;
	uint16_t x376 = 3U;

	t92 = ((x373<=(x374==x375))%x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x377 = 5U;
	int64_t x379 = INT64_MIN;
	volatile uint64_t x380 = 1207575LLU;
	static uint64_t t93 = 8121416227995650LLU;

	t93 = ((x377<=(x378==x379))%x380);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x381 = UINT32_MAX;
	volatile uint16_t x382 = UINT16_MAX;
	int64_t x383 = INT64_MAX;
	uint16_t x384 = UINT16_MAX;
	static volatile int32_t t94 = 61275;

	t94 = ((x381<=(x382==x383))%x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x385 = -25;
	int64_t x386 = INT64_MAX;
	int16_t x387 = INT16_MIN;
	static int32_t x388 = INT32_MIN;
	int32_t t95 = 10;

	t95 = ((x385<=(x386==x387))%x388);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x390 = 10130675522877672LLU;
	volatile uint64_t x391 = 9LLU;
	uint16_t x392 = UINT16_MAX;
	int32_t t96 = -1382277;

	t96 = ((x389<=(x390==x391))%x392);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x393 = 6402538285LLU;
	static volatile uint64_t x394 = UINT64_MAX;
	int8_t x395 = INT8_MIN;
	int16_t x396 = INT16_MIN;
	volatile int32_t t97 = -6043;

	t97 = ((x393<=(x394==x395))%x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x397 = INT16_MAX;
	uint64_t x399 = UINT64_MAX;
	int64_t t98 = -4844679LL;

	t98 = ((x397<=(x398==x399))%x400);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x401 = 23U;
	int16_t x403 = -457;
	int16_t x404 = -1;
	int32_t t99 = -2;

	t99 = ((x401<=(x402==x403))%x404);

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

