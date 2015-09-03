#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t3 = 61915020U;
int16_t x31 = INT16_MAX;
volatile int16_t x39 = INT16_MAX;
volatile uint64_t t9 = 23047225139907475LLU;
volatile int8_t x46 = 7;
volatile uint64_t t12 = 19763179747LLU;
uint8_t x55 = 108U;
uint32_t x64 = 559U;
volatile uint8_t x66 = 14U;
uint8_t x68 = UINT8_MAX;
volatile int16_t x78 = -88;
uint16_t x82 = 98U;
uint32_t x87 = 14369092U;
uint32_t x89 = UINT32_MAX;
volatile int64_t t22 = -72528275LL;
static volatile int8_t x99 = -1;
volatile uint64_t t24 = 167LLU;
volatile uint16_t x106 = 0U;
uint8_t x108 = 12U;
uint64_t t27 = 453LLU;
int8_t x114 = INT8_MAX;
int8_t x118 = INT8_MIN;
int8_t x123 = 1;
static int16_t x124 = -1;
volatile uint64_t x127 = UINT64_MAX;
volatile uint64_t t31 = 331LLU;
static int8_t x139 = 1;
volatile int64_t x141 = INT64_MIN;
uint64_t t34 = 440827LLU;
int64_t t35 = -232606761986LL;
int64_t x149 = -3879042LL;
volatile int16_t x156 = INT16_MIN;
int64_t t37 = -28835LL;
int16_t x158 = -981;
int8_t x166 = INT8_MAX;
int8_t x167 = INT8_MAX;
volatile int32_t t40 = 516523805;
volatile int64_t t41 = -13476668326LL;
uint64_t x175 = UINT64_MAX;
uint8_t x178 = UINT8_MAX;
uint8_t x179 = UINT8_MAX;
int8_t x184 = -1;
int8_t x188 = -1;
static int8_t x204 = INT8_MIN;
volatile int8_t x205 = INT8_MIN;
int64_t x211 = -1145665371715LL;
static uint64_t x212 = 1965143208LLU;
int16_t x220 = INT16_MAX;
uint16_t x224 = UINT16_MAX;
volatile uint32_t t54 = 204U;
volatile int8_t x235 = INT8_MAX;
static uint8_t x244 = UINT8_MAX;
int8_t x249 = 12;
uint64_t x252 = 35916928892742413LLU;
volatile uint64_t t60 = 2490LLU;
volatile int64_t t65 = -27388LL;
volatile int32_t t66 = -1766068;
int8_t x281 = -1;
volatile uint32_t x282 = 24U;
static volatile uint32_t x287 = 6963U;
volatile int32_t x291 = INT32_MAX;
int8_t x296 = INT8_MIN;
int64_t x297 = -23558632824LL;
int16_t x300 = INT16_MIN;
volatile int64_t t71 = -1663597LL;
static int32_t x304 = 21;
int64_t x312 = 394895202LL;
int64_t t75 = 2085581413355898LL;
int16_t x322 = INT16_MIN;
uint32_t x330 = 415775613U;
volatile uint32_t t78 = 13U;
uint16_t x336 = 1642U;
volatile uint64_t x339 = 3193379398562035LLU;
static uint64_t t80 = 21451753097247LLU;
int32_t x346 = 27799950;
uint32_t x349 = UINT32_MAX;
static uint64_t x350 = 7601349LLU;
int16_t x351 = INT16_MAX;
int8_t x354 = INT8_MIN;
static int32_t x360 = INT32_MIN;
int64_t x367 = 330627007458254LL;
uint32_t t92 = 24U;
int64_t x393 = INT64_MIN;
int16_t x398 = 0;
int64_t x400 = -1LL;
static int16_t x407 = -1;
volatile int32_t x410 = -1;
int64_t x413 = -31666678LL;
int8_t x421 = INT8_MIN;
int8_t x424 = 1;


void f0(void) {
	uint8_t x1 = 11U;
	volatile int32_t x2 = -1;
	static uint16_t x3 = UINT16_MAX;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = 1;

	t0 = (x1+((x2/x3)^x4));

	if (t0 != 266) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -3;
	uint64_t x6 = UINT64_MAX;
	volatile int32_t x7 = 23370;
	uint32_t x8 = 5431676U;
	static volatile uint64_t t1 = 3LLU;

	t1 = (x5+((x6/x7)^x8));

	if (t1 != 789334358062716LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -12;
	int32_t x10 = INT32_MIN;
	uint32_t x11 = 30473U;
	int32_t x12 = -1;
	static uint32_t t2 = 195343540U;

	t2 = (x9+((x10/x11)^x12));

	if (t2 != 4294896812U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 4U;
	static int32_t x14 = INT32_MIN;
	int16_t x15 = -4;
	volatile uint32_t x16 = UINT32_MAX;

	t3 = (x13+((x14/x15)^x16));

	if (t3 != 3758096387U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	static volatile int16_t x18 = INT16_MIN;
	int64_t x19 = -2672528038681750LL;
	int32_t x20 = INT32_MAX;
	static volatile int64_t t4 = 1946404253305LL;

	t4 = (x17+((x18/x19)^x20));

	if (t4 != 6442450942LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 1837352473LLU;
	volatile int32_t x22 = -1;
	int8_t x23 = INT8_MIN;
	static int64_t x24 = -681548713994041LL;
	volatile uint64_t t5 = 114463682033LLU;

	t5 = (x21+((x22/x23)^x24));

	if (t5 != 18446062526832910048LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 1U;
	static int16_t x26 = INT16_MIN;
	int8_t x27 = INT8_MIN;
	int32_t x28 = -1;
	static volatile int32_t t6 = -1700345;

	t6 = (x25+((x26/x27)^x28));

	if (t6 != -256) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	static volatile int32_t x30 = -1;
	volatile uint8_t x32 = 1U;
	int32_t t7 = -40675;

	t7 = (x29+((x30/x31)^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 2294LLU;
	static int16_t x34 = -1;
	volatile uint64_t x35 = UINT64_MAX;
	int8_t x36 = INT8_MAX;
	static volatile uint64_t t8 = 344089159LLU;

	t8 = (x33+((x34/x35)^x36));

	if (t8 != 2420LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	static uint8_t x38 = UINT8_MAX;
	volatile int64_t x40 = INT64_MIN;

	t9 = (x37+((x38/x39)^x40));

	if (t9 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = 160615243591952273LL;
	volatile uint32_t x42 = 478891726U;
	int16_t x43 = INT16_MIN;
	int16_t x44 = 14762;
	volatile int64_t t10 = -13691LL;

	t10 = (x41+((x42/x43)^x44));

	if (t10 != 160615243591967035LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	volatile uint64_t x47 = 52368954LLU;
	static int64_t x48 = -1LL;
	volatile uint64_t t11 = 367605244075326LLU;

	t11 = (x45+((x46/x47)^x48));

	if (t11 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint8_t x50 = 97U;
	uint32_t x51 = 713U;
	volatile uint64_t x52 = 29446LLU;

	t12 = (x49+((x50/x51)^x52));

	if (t12 != 29318LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MAX;
	uint64_t x54 = 41832624587048013LLU;
	volatile uint32_t x56 = UINT32_MAX;
	volatile uint64_t t13 = 2736639431847LLU;

	t13 = (x53+((x54/x55)^x56));

	if (t13 != 387339839698250LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 1U;
	int32_t x58 = -258942030;
	int16_t x59 = INT16_MAX;
	int8_t x60 = INT8_MAX;
	volatile int32_t t14 = 181412;

	t14 = (x57+((x58/x59)^x60));

	if (t14 != -7842) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	int32_t x62 = -1;
	static int64_t x63 = -47411402800LL;
	static volatile int64_t t15 = -4104758861402122LL;

	t15 = (x61+((x62/x63)^x64));

	if (t15 != 2147484206LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int16_t x67 = -14367;
	int64_t t16 = -31607LL;

	t16 = (x65+((x66/x67)^x68));

	if (t16 != 254LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	int64_t x70 = -1LL;
	static int16_t x71 = INT16_MIN;
	int8_t x72 = INT8_MIN;
	volatile int64_t t17 = -1335790LL;

	t17 = (x69+((x70/x71)^x72));

	if (t17 != 127LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int32_t x74 = INT32_MAX;
	uint64_t x75 = 308894LLU;
	volatile int8_t x76 = INT8_MIN;
	volatile uint64_t t18 = 3112098715673LLU;

	t18 = (x73+((x74/x75)^x76));

	if (t18 != 18446744071562060968LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -30;
	volatile uint16_t x79 = 10U;
	volatile int16_t x80 = -311;
	volatile int32_t t19 = 5461779;

	t19 = (x77+((x78/x79)^x80));

	if (t19 != 275) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MIN;
	int16_t x83 = INT16_MIN;
	static uint8_t x84 = 19U;
	volatile int32_t t20 = -3;

	t20 = (x81+((x82/x83)^x84));

	if (t20 != -32749) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int32_t x86 = INT32_MIN;
	static int32_t x88 = -1;
	uint32_t t21 = 232U;

	t21 = (x85+((x86/x87)^x88));

	if (t21 != 4294934378U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = -1LL;
	int64_t x91 = INT64_MIN;
	static volatile int64_t x92 = -1LL;

	t22 = (x89+((x90/x91)^x92));

	if (t22 != 4294967294LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	uint32_t x94 = UINT32_MAX;
	volatile int64_t x95 = 3252563764724LL;
	uint32_t x96 = UINT32_MAX;
	int64_t t23 = -15334405795661LL;

	t23 = (x93+((x94/x95)^x96));

	if (t23 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x97 = UINT64_MAX;
	volatile int16_t x98 = -8989;
	volatile int32_t x100 = -76877235;

	t24 = (x97+((x98/x99)^x100));

	if (t24 != 18446744073632665935LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 483;
	volatile int8_t x102 = INT8_MAX;
	int64_t x103 = INT64_MIN;
	static int64_t x104 = -1LL;
	volatile int64_t t25 = -99270085LL;

	t25 = (x101+((x102/x103)^x104));

	if (t25 != 482LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 15372485686LLU;
	int8_t x107 = INT8_MIN;
	volatile uint64_t t26 = 14807089286LLU;

	t26 = (x105+((x106/x107)^x108));

	if (t26 != 15372485698LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	uint64_t x110 = 7565763LLU;
	volatile uint64_t x111 = UINT64_MAX;
	static int64_t x112 = INT64_MIN;

	t27 = (x109+((x110/x111)^x112));

	if (t27 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = 3;
	volatile int64_t x115 = INT64_MIN;
	int8_t x116 = 1;
	int64_t t28 = 34LL;

	t28 = (x113+((x114/x115)^x116));

	if (t28 != 4LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	volatile int32_t x119 = -1;
	int64_t x120 = -1LL;
	int64_t t29 = 218LL;

	t29 = (x117+((x118/x119)^x120));

	if (t29 != -2147483777LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 102;
	int8_t x122 = INT8_MIN;
	volatile int32_t t30 = 28;

	t30 = (x121+((x122/x123)^x124));

	if (t30 != 229) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = 4172;
	uint16_t x126 = 13U;
	uint8_t x128 = 1U;

	t31 = (x125+((x126/x127)^x128));

	if (t31 != 4173LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 113U;
	int8_t x130 = -2;
	static uint64_t x131 = 25802202962360LLU;
	volatile int32_t x132 = -1;
	volatile uint64_t t32 = 7665LLU;

	t32 = (x129+((x130/x131)^x132));

	if (t32 != 18446744073708836799LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = 2;
	int32_t x138 = -28;
	uint32_t x140 = 6424409U;
	uint32_t t33 = 432210473U;

	t33 = (x137+((x138/x139)^x140));

	if (t33 != 4288542911U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x142 = INT16_MAX;
	int64_t x143 = -1LL;
	static uint64_t x144 = 13801867602LLU;

	t34 = (x141+((x142/x143)^x144));

	if (t34 != 9223372023052912979LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x145 = -8095;
	int64_t x146 = -1LL;
	uint16_t x147 = UINT16_MAX;
	int32_t x148 = -24;

	t35 = (x145+((x146/x147)^x148));

	if (t35 != -8119LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x150 = -1593362584288821LL;
	int64_t x151 = 7893845267370LL;
	int16_t x152 = INT16_MIN;
	static volatile int64_t t36 = -764LL;

	t36 = (x149+((x150/x151)^x152));

	if (t36 != -3846475LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MAX;
	uint8_t x154 = UINT8_MAX;
	volatile int64_t x155 = -20756914254LL;

	t37 = (x153+((x154/x155)^x156));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = 31687539;
	uint8_t x159 = 109U;
	uint64_t x160 = 3199LLU;
	static uint64_t t38 = 4286871560586086934LLU;

	t38 = (x157+((x158/x159)^x160));

	if (t38 != 31684347LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MIN;
	static int8_t x162 = -1;
	int64_t x163 = INT64_MIN;
	static int8_t x164 = 0;
	int64_t t39 = 69483201864LL;

	t39 = (x161+((x162/x163)^x164));

	if (t39 != -2147483648LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = UINT16_MAX;
	static int16_t x168 = 3444;

	t40 = (x165+((x166/x167)^x168));

	if (t40 != 68980) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = -42852832752420075LL;
	uint16_t x170 = UINT16_MAX;
	int8_t x171 = INT8_MAX;
	volatile int32_t x172 = 101;

	t41 = (x169+((x170/x171)^x172));

	if (t41 != -42852832752419466LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x173 = INT32_MIN;
	int16_t x174 = -56;
	int8_t x176 = -1;
	volatile uint64_t t42 = 7883LLU;

	t42 = (x173+((x174/x175)^x176));

	if (t42 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x177 = -1LL;
	static int64_t x180 = -1LL;
	static volatile int64_t t43 = -2317LL;

	t43 = (x177+((x178/x179)^x180));

	if (t43 != -3LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = -1;
	int32_t x182 = 82;
	volatile int32_t x183 = 577988354;
	static volatile int32_t t44 = 171858;

	t44 = (x181+((x182/x183)^x184));

	if (t44 != -2) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = 6U;
	static int8_t x186 = -1;
	int32_t x187 = -88;
	int32_t t45 = 1;

	t45 = (x185+((x186/x187)^x188));

	if (t45 != 5) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x189 = 5933992440LLU;
	volatile int16_t x190 = 141;
	int16_t x191 = INT16_MIN;
	int32_t x192 = INT32_MAX;
	volatile uint64_t t46 = 15LLU;

	t46 = (x189+((x190/x191)^x192));

	if (t46 != 8081476087LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = 30U;
	int8_t x194 = 26;
	int16_t x195 = INT16_MIN;
	int16_t x196 = INT16_MAX;
	static volatile int32_t t47 = 51066434;

	t47 = (x193+((x194/x195)^x196));

	if (t47 != 32797) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = UINT8_MAX;
	int16_t x198 = INT16_MAX;
	uint16_t x199 = 46U;
	int64_t x200 = -29129787393835056LL;
	volatile int64_t t48 = -2789LL;

	t48 = (x197+((x198/x199)^x200));

	if (t48 != -29129787393835497LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MIN;
	uint64_t x202 = UINT64_MAX;
	int8_t x203 = INT8_MAX;
	uint64_t t49 = 1544934077725384LLU;

	t49 = (x201+((x202/x203)^x204));

	if (t49 != 18301494120373223042LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x206 = UINT8_MAX;
	static int16_t x207 = INT16_MIN;
	int32_t x208 = 11668;
	static int32_t t50 = -37;

	t50 = (x205+((x206/x207)^x208));

	if (t50 != 11540) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = -4;
	uint16_t x210 = 335U;
	static volatile uint64_t t51 = 0LLU;

	t51 = (x209+((x210/x211)^x212));

	if (t51 != 1965143204LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = -1LL;
	static volatile uint8_t x214 = UINT8_MAX;
	uint32_t x215 = 1541813U;
	int32_t x216 = -182;
	volatile int64_t t52 = -3104LL;

	t52 = (x213+((x214/x215)^x216));

	if (t52 != 4294967113LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x217 = 3831U;
	static uint32_t x218 = 7454U;
	int32_t x219 = INT32_MIN;
	volatile uint32_t t53 = 7315012U;

	t53 = (x217+((x218/x219)^x220));

	if (t53 != 36598U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = -1;
	uint32_t x222 = 65333U;
	uint16_t x223 = 5U;

	t54 = (x221+((x222/x223)^x224));

	if (t54 != 52468U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x225 = -1;
	int64_t x226 = 3309715201598182242LL;
	uint32_t x227 = 993855U;
	int8_t x228 = -1;
	int64_t t55 = -145640293LL;

	t55 = (x225+((x226/x227)^x228));

	if (t55 != -3330179152492LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x233 = INT32_MIN;
	int16_t x234 = -95;
	uint8_t x236 = 0U;
	int32_t t56 = INT32_MIN;

	t56 = (x233+((x234/x235)^x236));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = -1;
	int32_t x238 = -2321221;
	volatile int8_t x239 = INT8_MAX;
	volatile uint32_t x240 = 19049U;
	volatile uint32_t t57 = 164745U;

	t57 = (x237+((x238/x239)^x240));

	if (t57 != 4294963953U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x241 = 398LLU;
	uint32_t x242 = 83009263U;
	uint64_t x243 = 53058898LLU;
	uint64_t t58 = 6471LLU;

	t58 = (x241+((x242/x243)^x244));

	if (t58 != 652LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x245 = -1121;
	int64_t x246 = INT64_MIN;
	static uint16_t x247 = 1683U;
	volatile uint16_t x248 = 2U;
	int64_t t59 = -1432763518LL;

	t59 = (x245+((x246/x247)^x248));

	if (t59 != -5480316124097840LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x250 = -1;
	int32_t x251 = 98820841;

	t60 = (x249+((x250/x251)^x252));

	if (t60 != 35916928892742425LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = INT16_MIN;
	uint64_t x254 = UINT64_MAX;
	static uint64_t x255 = UINT64_MAX;
	uint8_t x256 = 5U;
	uint64_t t61 = 1986329LLU;

	t61 = (x253+((x254/x255)^x256));

	if (t61 != 18446744073709518852LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = -1;
	int8_t x258 = -1;
	volatile int64_t x259 = INT64_MIN;
	int32_t x260 = 78622599;
	int64_t t62 = 36LL;

	t62 = (x257+((x258/x259)^x260));

	if (t62 != 78622598LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = UINT8_MAX;
	uint16_t x262 = 10359U;
	int16_t x263 = -3;
	uint64_t x264 = 87278829211942727LLU;
	volatile uint64_t t63 = 59573142290033LLU;

	t63 = (x261+((x262/x263)^x264));

	if (t63 != 18359465244497612483LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = -1;
	static int16_t x266 = -7785;
	uint32_t x267 = 7187938U;
	volatile int64_t x268 = 2546093556697LL;
	int64_t t64 = 606565206LL;

	t64 = (x265+((x266/x267)^x268));

	if (t64 != 2546093556107LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x269 = UINT8_MAX;
	static int32_t x270 = -29977229;
	volatile int64_t x271 = INT64_MIN;
	volatile uint16_t x272 = 3U;

	t65 = (x269+((x270/x271)^x272));

	if (t65 != 258LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x277 = INT16_MAX;
	static int16_t x278 = -2;
	int8_t x279 = INT8_MAX;
	int16_t x280 = 207;

	t66 = (x277+((x278/x279)^x280));

	if (t66 != 32974) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x283 = UINT64_MAX;
	uint8_t x284 = 4U;
	volatile uint64_t t67 = 337119737966231236LLU;

	t67 = (x281+((x282/x283)^x284));

	if (t67 != 3LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x285 = -467187LL;
	int64_t x286 = INT64_MIN;
	int64_t x288 = -1LL;
	int64_t t68 = -7103584LL;

	t68 = (x285+((x286/x287)^x288));

	if (t68 != 1324626171707848LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x289 = 31U;
	static volatile int8_t x290 = INT8_MIN;
	static int16_t x292 = INT16_MAX;
	int32_t t69 = -1187;

	t69 = (x289+((x290/x291)^x292));

	if (t69 != 32798) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x293 = -1;
	int64_t x294 = -421LL;
	int64_t x295 = -969LL;
	int64_t t70 = 129079LL;

	t70 = (x293+((x294/x295)^x296));

	if (t70 != -129LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x298 = 1U;
	int8_t x299 = INT8_MIN;

	t71 = (x297+((x298/x299)^x300));

	if (t71 != -19263698296LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x301 = 13U;
	volatile int16_t x302 = INT16_MIN;
	volatile uint8_t x303 = UINT8_MAX;
	uint32_t t72 = 621873132U;

	t72 = (x301+((x302/x303)^x304));

	if (t72 != 4294967202U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = 0;
	volatile uint16_t x306 = UINT16_MAX;
	int8_t x307 = INT8_MIN;
	volatile int32_t x308 = INT32_MIN;
	int32_t t73 = 55890078;

	t73 = (x305+((x306/x307)^x308));

	if (t73 != 2147483137) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x309 = INT16_MIN;
	static int64_t x310 = INT64_MIN;
	int8_t x311 = -24;
	int64_t t74 = 140331224526668127LL;

	t74 = (x309+((x310/x311)^x312));

	if (t74 != 384307167892359735LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x313 = -1LL;
	int32_t x314 = INT32_MIN;
	int8_t x315 = INT8_MIN;
	volatile int64_t x316 = 5005031594LL;

	t75 = (x313+((x314/x315)^x316));

	if (t75 != 5021808809LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x317 = INT8_MIN;
	int8_t x318 = -28;
	int16_t x319 = INT16_MAX;
	volatile int64_t x320 = 4LL;
	static int64_t t76 = 28107821479461LL;

	t76 = (x317+((x318/x319)^x320));

	if (t76 != -124LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x321 = UINT32_MAX;
	int8_t x323 = -1;
	int8_t x324 = 0;
	uint32_t t77 = 5128U;

	t77 = (x321+((x322/x323)^x324));

	if (t77 != 32767U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x329 = 1640U;
	int32_t x331 = INT32_MAX;
	int8_t x332 = 61;

	t78 = (x329+((x330/x331)^x332));

	if (t78 != 1701U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x333 = UINT8_MAX;
	int8_t x334 = INT8_MIN;
	static int32_t x335 = -1;
	int32_t t79 = 65958;

	t79 = (x333+((x334/x335)^x336));

	if (t79 != 2025) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x337 = -1;
	uint8_t x338 = 97U;
	int64_t x340 = 8155303841957273LL;

	t80 = (x337+((x338/x339)^x340));

	if (t80 != 8155303841957272LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x341 = -4853;
	static volatile uint8_t x342 = UINT8_MAX;
	int8_t x343 = INT8_MIN;
	uint64_t x344 = UINT64_MAX;
	uint64_t t81 = 113576500LLU;

	t81 = (x341+((x342/x343)^x344));

	if (t81 != 18446744073709546763LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x345 = 4215LLU;
	int8_t x347 = -1;
	int8_t x348 = INT8_MIN;
	static volatile uint64_t t82 = 83856LLU;

	t82 = (x345+((x346/x347)^x348));

	if (t82 != 27804265LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x352 = INT64_MIN;
	uint64_t t83 = 6695330465649866102LLU;

	t83 = (x349+((x350/x351)^x352));

	if (t83 != 9223372041149743334LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x353 = INT8_MIN;
	uint16_t x355 = UINT16_MAX;
	static volatile uint16_t x356 = 19U;
	int32_t t84 = -234572158;

	t84 = (x353+((x354/x355)^x356));

	if (t84 != -109) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x357 = INT32_MIN;
	uint32_t x358 = 217021U;
	int16_t x359 = INT16_MAX;
	volatile uint32_t t85 = 103U;

	t85 = (x357+((x358/x359)^x360));

	if (t85 != 6U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = -28438339422702969LL;
	static int16_t x362 = -1;
	int16_t x363 = INT16_MIN;
	int8_t x364 = INT8_MIN;
	int64_t t86 = 35317055606632721LL;

	t86 = (x361+((x362/x363)^x364));

	if (t86 != -28438339422703097LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = 0;
	volatile uint16_t x366 = 53U;
	int8_t x368 = -22;
	volatile int64_t t87 = -121130775LL;

	t87 = (x365+((x366/x367)^x368));

	if (t87 != -22LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MIN;
	uint8_t x370 = 13U;
	uint32_t x371 = 21568U;
	int32_t x372 = -555371;
	volatile uint32_t t88 = 126085U;

	t88 = (x369+((x370/x371)^x372));

	if (t88 != 2146928277U) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x373 = INT16_MIN;
	int8_t x374 = -18;
	volatile uint16_t x375 = 11U;
	static int16_t x376 = -1;
	static int32_t t89 = 289952;

	t89 = (x373+((x374/x375)^x376));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = 44;
	uint8_t x378 = 31U;
	uint32_t x379 = 10U;
	int64_t x380 = INT64_MIN;
	volatile int64_t t90 = -5117153049445877LL;

	t90 = (x377+((x378/x379)^x380));

	if (t90 != -9223372036854775761LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = -1;
	int8_t x382 = INT8_MIN;
	uint16_t x383 = 400U;
	int16_t x384 = INT16_MAX;
	volatile int32_t t91 = -1;

	t91 = (x381+((x382/x383)^x384));

	if (t91 != 32766) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = INT8_MIN;
	static int32_t x386 = INT32_MIN;
	volatile uint32_t x387 = UINT32_MAX;
	int16_t x388 = 1402;

	t92 = (x385+((x386/x387)^x388));

	if (t92 != 1274U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x394 = 2077151484LLU;
	uint8_t x395 = 31U;
	int32_t x396 = 1;
	static uint64_t t93 = 225275LLU;

	t93 = (x393+((x394/x395)^x396));

	if (t93 != 9223372036921780695LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x397 = -4895;
	static uint64_t x399 = UINT64_MAX;
	volatile uint64_t t94 = 3316627643971177LLU;

	t94 = (x397+((x398/x399)^x400));

	if (t94 != 18446744073709546720LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x401 = INT8_MIN;
	int32_t x402 = INT32_MIN;
	uint64_t x403 = UINT64_MAX;
	int32_t x404 = INT32_MAX;
	static volatile uint64_t t95 = 6993308182931498LLU;

	t95 = (x401+((x402/x403)^x404));

	if (t95 != 2147483519LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x405 = 115791920223009940LLU;
	uint32_t x406 = 869256941U;
	static int64_t x408 = -1LL;
	static uint64_t t96 = 1565624113266LLU;

	t96 = (x405+((x406/x407)^x408));

	if (t96 != 115791920223009939LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x409 = INT32_MIN;
	static volatile int8_t x411 = INT8_MIN;
	uint32_t x412 = 949U;
	static uint32_t t97 = 198U;

	t97 = (x409+((x410/x411)^x412));

	if (t97 != 2147484597U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x414 = UINT32_MAX;
	int16_t x415 = -1;
	static int64_t x416 = INT64_MAX;
	volatile int64_t t98 = 3LL;

	t98 = (x413+((x414/x415)^x416));

	if (t98 != 9223372036823109128LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x422 = 1864;
	int64_t x423 = 29051281LL;
	int64_t t99 = -1976219591LL;

	t99 = (x421+((x422/x423)^x424));

	if (t99 != -127LL) { NG(); } else { ; }
	
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

