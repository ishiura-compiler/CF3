#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = UINT64_MAX;
volatile int16_t x8 = INT16_MIN;
int8_t x13 = INT8_MIN;
volatile uint32_t x14 = UINT32_MAX;
volatile uint8_t x17 = UINT8_MAX;
int16_t x21 = -1;
int8_t x23 = -1;
int8_t x26 = -1;
volatile int16_t x45 = 65;
int32_t x46 = INT32_MIN;
int8_t x51 = -1;
uint32_t x54 = 91112558U;
int8_t x56 = INT8_MIN;
int16_t x59 = 431;
uint8_t x68 = 14U;
uint64_t x76 = 464009820LLU;
int32_t x86 = INT32_MIN;
int64_t t18 = 50225LL;
static int16_t x89 = -1;
static int32_t x90 = 0;
uint16_t x92 = UINT16_MAX;
int32_t t19 = -2052;
int16_t x107 = INT16_MIN;
volatile int64_t x114 = INT64_MIN;
volatile int64_t t24 = -4862265132070242LL;
uint8_t x118 = 26U;
uint64_t x120 = 45759825LLU;
uint64_t t25 = 676LLU;
int32_t x121 = -620875486;
volatile uint64_t x123 = 318250502293960LLU;
uint8_t x126 = UINT8_MAX;
uint8_t x127 = 30U;
int64_t x128 = INT64_MIN;
static int64_t x136 = INT64_MIN;
static uint64_t t31 = 375550193LLU;
volatile uint32_t x150 = UINT32_MAX;
int32_t x153 = 22;
uint64_t x156 = 340090750414LLU;
static volatile uint8_t x161 = 0U;
uint32_t x170 = UINT32_MAX;
static uint16_t x174 = UINT16_MAX;
int16_t x179 = -1;
int32_t x183 = -124338690;
int8_t x198 = INT8_MAX;
uint32_t x203 = UINT32_MAX;
uint8_t x204 = 6U;
int32_t x210 = INT32_MIN;
int64_t x211 = INT64_MIN;
volatile uint64_t t46 = 56LLU;
int64_t x216 = -274460433694121218LL;
int8_t x230 = INT8_MAX;
static int64_t x235 = INT64_MAX;
static int16_t x241 = INT16_MIN;
int32_t x244 = -107835923;
int32_t x247 = INT32_MIN;
static uint8_t x248 = 4U;
volatile uint32_t t54 = 25102U;
static volatile int8_t x257 = 7;
volatile uint64_t x262 = 422478LLU;
static volatile int64_t x264 = 1700123682318LL;
uint64_t x265 = 59795592447107LLU;
uint64_t x269 = 35917882185173914LLU;
int8_t x270 = -8;
int16_t x273 = INT16_MIN;
volatile int8_t x286 = 0;
uint8_t x291 = UINT8_MAX;
static int8_t x296 = INT8_MIN;
uint64_t x300 = 52LLU;
int16_t x302 = -1;
static volatile int16_t x306 = 0;
volatile uint8_t x311 = 36U;
uint16_t x312 = UINT16_MAX;
int16_t x315 = 1;
volatile int32_t t71 = -662161699;
uint8_t x327 = 18U;
uint32_t x328 = 1410U;
uint32_t t72 = 0U;
static uint16_t x335 = 21577U;
static volatile int32_t t74 = -10;
int64_t t75 = -148783933100737546LL;
static int8_t x345 = 1;
uint64_t t77 = 605132649405LLU;
static int64_t x353 = -1LL;
int64_t x368 = INT64_MAX;
volatile int64_t t82 = 360162260277772371LL;
static uint32_t x374 = 1849741683U;
int8_t x375 = -3;
int64_t t85 = 66547255882039279LL;
int64_t x392 = INT64_MIN;
static int8_t x394 = -1;
uint32_t x398 = 12U;
uint8_t x406 = 7U;
static uint32_t t91 = 2647U;
int8_t x410 = 5;
volatile int8_t x412 = -15;
volatile uint32_t t93 = 26037433U;
int32_t x424 = INT32_MIN;
int16_t x427 = INT16_MIN;


void f0(void) {
	int64_t x1 = 60596768930939LL;
	int32_t x2 = INT32_MIN;
	int64_t x4 = -3695373480745LL;
	volatile uint64_t t0 = 3593225663LLU;

	t0 = ((x1+x2)^(x3|x4));

	if (t0 != 18446683479088104324LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x5 = 2U;
	volatile int8_t x6 = -1;
	int16_t x7 = -1;
	volatile int32_t t1 = 1359809;

	t1 = ((x5+x6)^(x7|x8));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 2650U;
	int64_t x10 = INT64_MIN;
	uint64_t x11 = UINT64_MAX;
	uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 1597127LLU;

	t2 = ((x9+x10)^(x11|x12));

	if (t2 != 9223372036854773157LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x15 = INT64_MAX;
	static uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 33456870132978LLU;

	t3 = ((x13+x14)^(x15|x16));

	if (t3 != 18446744069414584448LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 11784040U;
	int16_t x19 = -1;
	volatile uint8_t x20 = 53U;
	static volatile uint32_t t4 = 30834932U;

	t4 = ((x17+x18)^(x19|x20));

	if (t4 != 4283183000U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 233257U;
	int32_t x24 = INT32_MAX;
	uint32_t t5 = 5981935U;

	t5 = ((x21+x22)^(x23|x24));

	if (t5 != 4294734039U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int64_t x27 = INT64_MIN;
	int16_t x28 = 1644;
	int64_t t6 = 2959388444448LL;

	t6 = ((x25+x26)^(x27|x28));

	if (t6 != 9223372036854774035LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MIN;
	int32_t x30 = 1275;
	uint64_t x31 = 346393513886LLU;
	int16_t x32 = INT16_MIN;
	uint64_t t7 = 54203519LLU;

	t7 = ((x29+x30)^(x31|x32));

	if (t7 != 9223372036854745957LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = UINT32_MAX;
	uint32_t x34 = 946U;
	int64_t x35 = INT64_MAX;
	int8_t x36 = -2;
	volatile int64_t t8 = 884LL;

	t8 = ((x33+x34)^(x35|x36));

	if (t8 != -946LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 919964896083931LLU;
	volatile uint32_t x38 = 3907U;
	int32_t x39 = -1;
	static uint16_t x40 = UINT16_MAX;
	volatile uint64_t t9 = 3377065091626433266LLU;

	t9 = ((x37+x38)^(x39|x40));

	if (t9 != 18445824108813463777LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x47 = 19346U;
	volatile int16_t x48 = -1;
	volatile int32_t t10 = -5645282;

	t10 = ((x45+x46)^(x47|x48));

	if (t10 != 2147483582) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	int16_t x50 = -1;
	int8_t x52 = INT8_MIN;
	volatile int32_t t11 = 0;

	t11 = ((x49+x50)^(x51|x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x53 = UINT64_MAX;
	uint16_t x55 = 0U;
	uint64_t t12 = 10796451051820LLU;

	t12 = ((x53+x54)^(x55|x56));

	if (t12 != 18446744073618439149LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 14445645358257LLU;
	int8_t x58 = INT8_MIN;
	int8_t x60 = INT8_MIN;
	volatile uint64_t t13 = 1461184369298370984LLU;

	t13 = ((x57+x58)^(x59|x60));

	if (t13 != 18446729628064193438LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 7493423U;
	int32_t x62 = 1;
	int64_t x63 = INT64_MAX;
	int8_t x64 = INT8_MIN;
	int64_t t14 = 10098430174132LL;

	t14 = ((x61+x62)^(x63|x64));

	if (t14 != -7493425LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 4U;
	uint32_t x66 = UINT32_MAX;
	uint8_t x67 = 15U;
	volatile uint32_t t15 = 8U;

	t15 = ((x65+x66)^(x67|x68));

	if (t15 != 12U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x73 = INT8_MIN;
	uint16_t x74 = 11182U;
	int16_t x75 = -47;
	volatile uint64_t t16 = 1596868188796851LLU;

	t16 = ((x73+x74)^(x75|x76));

	if (t16 != 18446744073709540595LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = 62U;
	static int8_t x82 = INT8_MIN;
	uint64_t x83 = 522686806062LLU;
	int32_t x84 = -1;
	uint64_t t17 = 746062598636LLU;

	t17 = ((x81+x82)^(x83|x84));

	if (t17 != 65LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = 50;
	int16_t x87 = INT16_MIN;
	int64_t x88 = INT64_MIN;

	t18 = ((x85+x86)^(x87|x88));

	if (t18 != 2147450930LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x91 = INT8_MAX;

	t19 = ((x89+x90)^(x91|x92));

	if (t19 != -65536) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x97 = INT64_MIN;
	static volatile uint32_t x98 = UINT32_MAX;
	int64_t x99 = INT64_MIN;
	volatile int8_t x100 = 0;
	volatile int64_t t20 = -41265950427363331LL;

	t20 = ((x97+x98)^(x99|x100));

	if (t20 != 4294967295LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x101 = 9710820878918244LL;
	uint64_t x102 = UINT64_MAX;
	volatile uint64_t x103 = 2902853242535489LLU;
	int64_t x104 = INT64_MIN;
	uint64_t t21 = 6LLU;

	t21 = ((x101+x102)^(x103|x104));

	if (t21 != 9234683613246397474LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x105 = -1;
	uint8_t x106 = 125U;
	static int8_t x108 = INT8_MAX;
	volatile int32_t t22 = 1;

	t22 = ((x105+x106)^(x107|x108));

	if (t22 != -32765) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = INT8_MAX;
	int16_t x110 = INT16_MAX;
	uint64_t x111 = 4115LLU;
	int16_t x112 = INT16_MAX;
	uint64_t t23 = 2132139827642693LLU;

	t23 = ((x109+x110)^(x111|x112));

	if (t23 != 65409LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x113 = 101U;
	volatile int16_t x115 = -15541;
	int8_t x116 = INT8_MAX;

	t24 = ((x113+x114)^(x115|x116));

	if (t24 != 9223372036854760218LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = -1;
	volatile uint16_t x119 = 368U;

	t25 = ((x117+x118)^(x119|x120));

	if (t25 != 45759848LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x122 = INT64_MAX;
	uint64_t x124 = 2345597LLU;
	uint64_t t26 = 97050LLU;

	t26 = ((x121+x122)^(x123|x124));

	if (t26 != 9223053786805566172LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x125 = 0U;
	static volatile int64_t t27 = 26768302569LL;

	t27 = ((x125+x126)^(x127|x128));

	if (t27 != -9223372036854775583LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = 0;
	volatile uint16_t x130 = 16880U;
	uint64_t x131 = 11LLU;
	int16_t x132 = 2;
	uint64_t t28 = 760085646318LLU;

	t28 = ((x129+x130)^(x131|x132));

	if (t28 != 16891LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x133 = INT64_MIN;
	int8_t x134 = INT8_MAX;
	int8_t x135 = 0;
	volatile int64_t t29 = 5214847434989LL;

	t29 = ((x133+x134)^(x135|x136));

	if (t29 != 127LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x137 = -1;
	int16_t x138 = -1310;
	static volatile uint64_t x139 = UINT64_MAX;
	volatile uint64_t x140 = UINT64_MAX;
	uint64_t t30 = 58398992044LLU;

	t30 = ((x137+x138)^(x139|x140));

	if (t30 != 1310LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x141 = 918570308983581636LLU;
	volatile int32_t x142 = 2;
	int16_t x143 = -11915;
	uint64_t x144 = UINT64_MAX;

	t31 = ((x141+x142)^(x143|x144));

	if (t31 != 17528173764725969977LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x145 = 29U;
	uint64_t x146 = 521036432725898LLU;
	static uint64_t x147 = UINT64_MAX;
	int32_t x148 = INT32_MIN;
	uint64_t t32 = 1LLU;

	t32 = ((x145+x146)^(x147|x148));

	if (t32 != 18446223037276825688LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MIN;
	int16_t x151 = -371;
	int64_t x152 = INT64_MAX;
	volatile int64_t t33 = 1616LL;

	t33 = ((x149+x150)^(x151|x152));

	if (t33 != -4294967168LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x154 = INT16_MAX;
	int16_t x155 = -1;
	volatile uint64_t t34 = 85261672LLU;

	t34 = ((x153+x154)^(x155|x156));

	if (t34 != 18446744073709518826LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = INT64_MIN;
	int8_t x158 = 3;
	int8_t x159 = -1;
	static volatile int8_t x160 = 1;
	volatile int64_t t35 = 165798LL;

	t35 = ((x157+x158)^(x159|x160));

	if (t35 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x162 = UINT16_MAX;
	volatile uint8_t x163 = UINT8_MAX;
	volatile int8_t x164 = INT8_MIN;
	volatile int32_t t36 = -5649;

	t36 = ((x161+x162)^(x163|x164));

	if (t36 != -65536) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x165 = 12U;
	int16_t x166 = INT16_MAX;
	int32_t x167 = -17247597;
	int64_t x168 = INT64_MIN;
	volatile int64_t t37 = -469017941076054LL;

	t37 = ((x165+x166)^(x167|x168));

	if (t37 != -17280360LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = INT32_MAX;
	int8_t x171 = INT8_MAX;
	int8_t x172 = INT8_MIN;
	volatile uint32_t t38 = 5864U;

	t38 = ((x169+x170)^(x171|x172));

	if (t38 != 2147483649U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = 1;
	volatile int32_t x175 = -1;
	static uint16_t x176 = 15U;
	static volatile int32_t t39 = 3203;

	t39 = ((x173+x174)^(x175|x176));

	if (t39 != -65537) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x177 = INT16_MAX;
	static uint8_t x178 = UINT8_MAX;
	uint64_t x180 = 1963853127077532LLU;
	static uint64_t t40 = 28719668465795097LLU;

	t40 = ((x177+x178)^(x179|x180));

	if (t40 != 18446744073709518593LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x181 = -1LL;
	int8_t x182 = INT8_MIN;
	static int16_t x184 = INT16_MIN;
	int64_t t41 = -6570150190206643LL;

	t41 = ((x181+x182)^(x183|x184));

	if (t41 != 17025LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x185 = -1LL;
	static int8_t x186 = INT8_MIN;
	uint16_t x187 = 88U;
	volatile int32_t x188 = -1;
	int64_t t42 = 10176LL;

	t42 = ((x185+x186)^(x187|x188));

	if (t42 != 128LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = INT8_MIN;
	int32_t x190 = -1;
	static int32_t x191 = -1;
	uint8_t x192 = UINT8_MAX;
	volatile int32_t t43 = -18025211;

	t43 = ((x189+x190)^(x191|x192));

	if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x197 = 119U;
	static int16_t x199 = 1;
	int16_t x200 = -30;
	static int32_t t44 = 947871550;

	t44 = ((x197+x198)^(x199|x200));

	if (t44 != -235) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x201 = 7;
	int32_t x202 = INT32_MIN;
	static volatile uint32_t t45 = 2538U;

	t45 = ((x201+x202)^(x203|x204));

	if (t45 != 2147483640U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x209 = UINT64_MAX;
	volatile int64_t x212 = INT64_MAX;

	t46 = ((x209+x210)^(x211|x212));

	if (t46 != 2147483648LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = INT32_MIN;
	uint8_t x214 = 110U;
	int16_t x215 = INT16_MAX;
	volatile int64_t t47 = 62251997641LL;

	t47 = ((x213+x214)^(x215|x216));

	if (t47 != 274460432109109137LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x217 = INT32_MAX;
	int32_t x218 = -1;
	int8_t x219 = INT8_MIN;
	volatile uint32_t x220 = UINT32_MAX;
	volatile uint32_t t48 = 257540269U;

	t48 = ((x217+x218)^(x219|x220));

	if (t48 != 2147483649U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = INT64_MIN;
	uint32_t x226 = UINT32_MAX;
	static volatile int16_t x227 = -24;
	int64_t x228 = 33918454070693LL;
	static int64_t t49 = 7299LL;

	t49 = ((x225+x226)^(x227|x228));

	if (t49 != 9223372032559808530LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = -1;
	uint16_t x231 = 0U;
	static volatile int16_t x232 = 0;
	int32_t t50 = 0;

	t50 = ((x229+x230)^(x231|x232));

	if (t50 != 126) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x233 = 487220079U;
	static uint16_t x234 = 115U;
	uint64_t x236 = UINT64_MAX;
	uint64_t t51 = 30653062828311LLU;

	t51 = ((x233+x234)^(x235|x236));

	if (t51 != 18446744073222331421LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x242 = INT64_MAX;
	volatile int8_t x243 = INT8_MAX;
	int64_t t52 = -1535309LL;

	t52 = ((x241+x242)^(x243|x244));

	if (t52 != -9223372036746907136LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x245 = UINT8_MAX;
	static volatile int8_t x246 = INT8_MIN;
	int32_t t53 = -112822;

	t53 = ((x245+x246)^(x247|x248));

	if (t53 != -2147483525) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x253 = UINT8_MAX;
	static int8_t x254 = INT8_MAX;
	int16_t x255 = -1;
	uint32_t x256 = 30302801U;

	t54 = ((x253+x254)^(x255|x256));

	if (t54 != 4294966913U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x258 = 5049217324LLU;
	int16_t x259 = -1;
	uint8_t x260 = UINT8_MAX;
	uint64_t t55 = 3LLU;

	t55 = ((x257+x258)^(x259|x260));

	if (t55 != 18446744068660334284LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x261 = INT8_MAX;
	static volatile int64_t x263 = -134414286127LL;
	uint64_t t56 = 41LLU;

	t56 = ((x261+x262)^(x263|x264));

	if (t56 != 18446743987664098322LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x266 = 510;
	volatile uint64_t x267 = UINT64_MAX;
	int16_t x268 = 0;
	static volatile uint64_t t57 = 36837305630323LLU;

	t57 = ((x265+x266)^(x267|x268));

	if (t57 != 18446684278117103998LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x271 = INT64_MAX;
	uint16_t x272 = 9U;
	static volatile uint64_t t58 = 4390644356994LLU;

	t58 = ((x269+x270)^(x271|x272));

	if (t58 != 9187454154669601901LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x274 = UINT8_MAX;
	static int64_t x275 = -11701080LL;
	static volatile uint16_t x276 = 2972U;
	static int64_t t59 = 683527987LL;

	t59 = ((x273+x274)^(x275|x276));

	if (t59 != 11730755LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x277 = INT32_MAX;
	volatile int32_t x278 = INT32_MIN;
	int16_t x279 = -1;
	static uint16_t x280 = UINT16_MAX;
	int32_t t60 = -1;

	t60 = ((x277+x278)^(x279|x280));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x281 = INT64_MAX;
	static int64_t x282 = INT64_MIN;
	int32_t x283 = INT32_MIN;
	uint32_t x284 = 29730U;
	int64_t t61 = 56760630878431759LL;

	t61 = ((x281+x282)^(x283|x284));

	if (t61 != -2147513379LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x285 = 115318U;
	uint16_t x287 = 4454U;
	int32_t x288 = INT32_MIN;
	static volatile uint32_t t62 = 51407406U;

	t62 = ((x285+x286)^(x287|x288));

	if (t62 != 2147603216U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x289 = 11;
	int8_t x290 = -10;
	int16_t x292 = INT16_MAX;
	volatile int32_t t63 = 13024;

	t63 = ((x289+x290)^(x291|x292));

	if (t63 != 32766) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x293 = 152084958409LL;
	static volatile uint8_t x294 = UINT8_MAX;
	uint8_t x295 = 17U;
	int64_t t64 = 185878773746946988LL;

	t64 = ((x293+x294)^(x295|x296));

	if (t64 != -152084958631LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x297 = 1;
	uint8_t x298 = UINT8_MAX;
	uint8_t x299 = UINT8_MAX;
	volatile uint64_t t65 = 627501253LLU;

	t65 = ((x297+x298)^(x299|x300));

	if (t65 != 511LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x301 = INT16_MIN;
	int8_t x303 = 34;
	volatile int16_t x304 = -381;
	int32_t t66 = -33;

	t66 = ((x301+x302)^(x303|x304));

	if (t66 != 33116) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x305 = INT32_MIN;
	uint8_t x307 = 0U;
	int32_t x308 = -377072;
	volatile int32_t t67 = 4376451;

	t67 = ((x305+x306)^(x307|x308));

	if (t67 != 2147106576) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x309 = INT16_MIN;
	int8_t x310 = INT8_MIN;
	int32_t t68 = 161;

	t68 = ((x309+x310)^(x311|x312));

	if (t68 != -32641) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x313 = -1;
	int64_t x314 = -1LL;
	static int32_t x316 = 1698;
	static volatile int64_t t69 = 259619799557LL;

	t69 = ((x313+x314)^(x315|x316));

	if (t69 != -1699LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x317 = UINT64_MAX;
	volatile uint64_t x318 = 787LLU;
	uint8_t x319 = UINT8_MAX;
	static int64_t x320 = -183742LL;
	static volatile uint64_t t70 = 22126539435LLU;

	t70 = ((x317+x318)^(x319|x320));

	if (t70 != 18446744073709367789LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x321 = -127;
	volatile int32_t x322 = 520100;
	static int16_t x323 = INT16_MIN;
	static int32_t x324 = -806;

	t71 = ((x321+x322)^(x323|x324));

	if (t71 != -519169) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x325 = 2U;
	volatile int8_t x326 = INT8_MAX;

	t72 = ((x325+x326)^(x327|x328));

	if (t72 != 1299U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x329 = -1;
	int16_t x330 = 1;
	volatile int64_t x331 = INT64_MIN;
	int32_t x332 = 33;
	volatile int64_t t73 = 3928881834035293LL;

	t73 = ((x329+x330)^(x331|x332));

	if (t73 != -9223372036854775775LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x333 = INT16_MIN;
	int16_t x334 = -3;
	int16_t x336 = INT16_MIN;

	t74 = ((x333+x334)^(x335|x336));

	if (t74 != 43956) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x337 = 776610169825LL;
	int64_t x338 = 107LL;
	static int16_t x339 = -1;
	int32_t x340 = -1;

	t75 = ((x337+x338)^(x339|x340));

	if (t75 != -776610169933LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x341 = UINT64_MAX;
	volatile int64_t x342 = -6059635459781LL;
	static int32_t x343 = INT32_MIN;
	static int32_t x344 = 986;
	static volatile uint64_t t76 = 132354104538381LLU;

	t76 = ((x341+x342)^(x343|x344));

	if (t76 != 6058614766304LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x346 = INT8_MIN;
	uint64_t x347 = 7723LLU;
	static volatile uint8_t x348 = 0U;

	t77 = ((x345+x346)^(x347|x348));

	if (t77 != 18446744073709543850LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x349 = INT16_MIN;
	int32_t x350 = -14539747;
	volatile int32_t x351 = 14721482;
	uint64_t x352 = 4496862632611396LLU;
	volatile uint64_t t78 = 1140775983915677041LLU;

	t78 = ((x349+x350)^(x351|x352));

	if (t78 != 18442247211087760339LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x354 = INT64_MAX;
	int16_t x355 = 3;
	static int8_t x356 = 1;
	volatile int64_t t79 = -5041LL;

	t79 = ((x353+x354)^(x355|x356));

	if (t79 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x361 = INT16_MIN;
	int16_t x362 = -1;
	int8_t x363 = INT8_MAX;
	int8_t x364 = INT8_MAX;
	int32_t t80 = -6875;

	t80 = ((x361+x362)^(x363|x364));

	if (t80 != -32896) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x365 = -1;
	int8_t x366 = -5;
	int16_t x367 = INT16_MIN;
	int64_t t81 = -2915LL;

	t81 = ((x365+x366)^(x367|x368));

	if (t81 != 5LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x369 = INT64_MIN;
	volatile int64_t x370 = INT64_MAX;
	int32_t x371 = INT32_MIN;
	int32_t x372 = INT32_MIN;

	t82 = ((x369+x370)^(x371|x372));

	if (t82 != 2147483647LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x373 = INT16_MIN;
	volatile int8_t x376 = 1;
	static volatile uint32_t t83 = 1009U;

	t83 = ((x373+x374)^(x375|x376));

	if (t83 != 2445258382U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x377 = 28U;
	volatile uint64_t x378 = 1351413198962LLU;
	int8_t x379 = -1;
	int16_t x380 = -1;
	uint64_t t84 = 1983386850339123560LLU;

	t84 = ((x377+x378)^(x379|x380));

	if (t84 != 18446742722296352625LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x381 = 83396;
	static uint32_t x382 = UINT32_MAX;
	static int64_t x383 = INT64_MAX;
	int8_t x384 = 1;

	t85 = ((x381+x382)^(x383|x384));

	if (t85 != 9223372036854692412LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x385 = 1;
	int32_t x386 = INT32_MIN;
	int64_t x387 = INT64_MIN;
	uint8_t x388 = UINT8_MAX;
	static volatile int64_t t86 = 173353089772LL;

	t86 = ((x385+x386)^(x387|x388));

	if (t86 != 9223372034707292414LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x389 = -1;
	uint16_t x390 = UINT16_MAX;
	uint32_t x391 = 449736165U;
	static int64_t t87 = 262037533274592LL;

	t87 = ((x389+x390)^(x391|x392));

	if (t87 != -9223372036405030373LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x393 = -63421028LL;
	volatile int32_t x395 = -1;
	static volatile uint8_t x396 = 21U;
	volatile int64_t t88 = 754798758106631532LL;

	t88 = ((x393+x394)^(x395|x396));

	if (t88 != 63421028LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x397 = 18U;
	uint32_t x399 = UINT32_MAX;
	volatile int16_t x400 = 182;
	volatile uint32_t t89 = 4U;

	t89 = ((x397+x398)^(x399|x400));

	if (t89 != 4294967265U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x401 = UINT64_MAX;
	uint8_t x402 = UINT8_MAX;
	int32_t x403 = -234078998;
	int32_t x404 = INT32_MAX;
	uint64_t t90 = 3LLU;

	t90 = ((x401+x402)^(x403|x404));

	if (t90 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x405 = -1;
	int8_t x407 = INT8_MIN;
	uint32_t x408 = 4U;

	t91 = ((x405+x406)^(x407|x408));

	if (t91 != 4294967170U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x409 = INT8_MIN;
	int8_t x411 = 0;
	int32_t t92 = -232;

	t92 = ((x409+x410)^(x411|x412));

	if (t92 != 116) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x413 = 423;
	volatile uint32_t x414 = 39999U;
	volatile int32_t x415 = INT32_MAX;
	static int32_t x416 = INT32_MIN;

	t93 = ((x413+x414)^(x415|x416));

	if (t93 != 4294926873U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x417 = INT32_MAX;
	uint64_t x418 = 131733519780726743LLU;
	static int64_t x419 = INT64_MAX;
	int32_t x420 = INT32_MIN;
	uint64_t t94 = 107803881307817LLU;

	t94 = ((x417+x418)^(x419|x420));

	if (t94 != 18315010551781341225LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x421 = -1;
	uint64_t x422 = 1798LLU;
	uint16_t x423 = 43U;
	uint64_t t95 = 13723907884LLU;

	t95 = ((x421+x422)^(x423|x424));

	if (t95 != 18446744071562069806LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x425 = -1;
	static uint16_t x426 = 56U;
	int8_t x428 = 3;
	int32_t t96 = -188;

	t96 = ((x425+x426)^(x427|x428));

	if (t96 != -32716) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x433 = 0U;
	volatile int32_t x434 = INT32_MAX;
	int16_t x435 = INT16_MIN;
	static uint16_t x436 = 2U;
	static volatile int32_t t97 = -217123;

	t97 = ((x433+x434)^(x435|x436));

	if (t97 != -2147450883) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x441 = -2;
	int64_t x442 = -1LL;
	int16_t x443 = -1;
	int16_t x444 = -7325;
	int64_t t98 = 9855379773LL;

	t98 = ((x441+x442)^(x443|x444));

	if (t98 != 2LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x445 = -1LL;
	int32_t x446 = INT32_MIN;
	int64_t x447 = INT64_MIN;
	int16_t x448 = INT16_MIN;
	int64_t t99 = 28441775771389LL;

	t99 = ((x445+x446)^(x447|x448));

	if (t99 != 2147516415LL) { NG(); } else { ; }
	
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

