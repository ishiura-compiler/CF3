#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x2 = 65U;
static volatile int32_t x4 = INT32_MIN;
int8_t x10 = INT8_MIN;
int64_t t2 = -8107930115948863LL;
uint64_t x17 = 503988903LLU;
int8_t x18 = 1;
int16_t x20 = -1;
static uint64_t t4 = 3895LLU;
int16_t x26 = INT16_MIN;
volatile int64_t t6 = -976759LL;
int64_t t7 = -16048LL;
int64_t x34 = -36222731LL;
volatile uint32_t x44 = UINT32_MAX;
static volatile int32_t x52 = -1514;
int64_t x53 = INT64_MIN;
int64_t x57 = INT64_MIN;
int32_t x62 = 2238;
static volatile int64_t x65 = INT64_MIN;
static volatile int64_t t16 = -4287LL;
int16_t x69 = INT16_MIN;
int32_t x71 = -110478358;
int32_t x76 = INT32_MIN;
int32_t x78 = INT32_MAX;
int32_t x87 = -28409;
int64_t t21 = 69144431792543978LL;
volatile int16_t x98 = -1;
uint8_t x100 = 48U;
int32_t x111 = INT32_MIN;
volatile int32_t x116 = -3;
int64_t t28 = 1598935104632249811LL;
int8_t x122 = 1;
static uint64_t x124 = 15LLU;
uint64_t t30 = 2713LLU;
int64_t x127 = 11LL;
int32_t t31 = 8701720;
int8_t x134 = 0;
static volatile int32_t t33 = -205152;
uint8_t x138 = 4U;
uint32_t x144 = 572168986U;
int32_t x148 = INT32_MAX;
int16_t x151 = -1;
static volatile uint16_t x152 = 93U;
volatile int32_t x158 = -1;
int32_t x172 = -1;
int8_t x189 = 1;
int16_t x191 = INT16_MIN;
uint16_t x192 = 82U;
int32_t t48 = -5531805;
volatile uint8_t x197 = 0U;
volatile int32_t t49 = -6280732;
uint16_t x201 = UINT16_MAX;
int16_t x203 = INT16_MAX;
uint8_t x205 = 2U;
static uint32_t x207 = UINT32_MAX;
uint8_t x213 = UINT8_MAX;
int64_t x215 = 298846LL;
int8_t x216 = 1;
int32_t t53 = -56;
static int64_t x224 = -1LL;
int64_t t55 = INT64_MIN;
int64_t x225 = 1047344387901580LL;
int64_t x226 = INT64_MAX;
static volatile int64_t t56 = -46950257946440239LL;
uint8_t x229 = 0U;
volatile int32_t x237 = -553179;
static int64_t t60 = 189LL;
uint8_t x247 = 18U;
int64_t x249 = INT64_MIN;
volatile int8_t x251 = INT8_MAX;
int16_t x254 = -1;
int16_t x257 = -1;
uint64_t x267 = UINT64_MAX;
int32_t x269 = INT32_MAX;
uint16_t x274 = 15382U;
int32_t x275 = -81709345;
uint8_t x276 = 2U;
uint64_t x281 = UINT64_MAX;
static uint16_t x286 = 12U;
uint8_t x291 = 1U;
static int8_t x294 = -1;
uint8_t x295 = 0U;
int64_t x296 = -14347853099LL;
int32_t x298 = INT32_MIN;
int64_t x299 = INT64_MIN;
int64_t x305 = INT64_MIN;
static int64_t t76 = 1355680421661475544LL;
volatile uint32_t x309 = 1674U;
int64_t x320 = -1LL;
int32_t x322 = 730119077;
volatile int64_t t81 = 80LL;
int32_t x330 = -73083;
volatile uint8_t x333 = 52U;
static volatile uint8_t x342 = 74U;
int32_t x343 = 11320008;
int8_t x352 = -1;
static int32_t t87 = 0;
int64_t x354 = 4134353085503394405LL;
int64_t t88 = 5LL;
volatile int64_t x363 = -1LL;
int32_t x380 = INT32_MIN;
int8_t x382 = -2;
volatile int32_t x385 = INT32_MIN;
int16_t x394 = -1;
uint32_t t99 = 0U;


void f0(void) {
	volatile uint64_t x1 = 54630510730888937LLU;
	static volatile int32_t x3 = INT32_MIN;
	uint64_t t0 = 264466336968673LLU;

	t0 = (x1&((x2==x3)|x4));

	if (t0 != 54630508683853824LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 1458920298U;
	volatile int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MAX;
	uint8_t x8 = UINT8_MAX;
	static volatile uint32_t t1 = 187003U;

	t1 = (x5&((x6==x7)|x8));

	if (t1 != 106U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -982726LL;
	volatile uint64_t x11 = 44851179543726191LLU;
	int8_t x12 = -2;

	t2 = (x9&((x10==x11)|x12));

	if (t2 != -982726LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int64_t x14 = -484LL;
	volatile int64_t x15 = INT64_MAX;
	volatile int16_t x16 = INT16_MIN;
	int64_t t3 = 66430307965LL;

	t3 = (x13&((x14==x15)|x16));

	if (t3 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x19 = -1;

	t4 = (x17&((x18==x19)|x20));

	if (t4 != 503988903LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 9926U;
	int32_t x22 = -1;
	int8_t x23 = INT8_MIN;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 1168;

	t5 = (x21&((x22==x23)|x24));

	if (t5 != 9856) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 52679177988493LL;
	static int16_t x27 = INT16_MIN;
	int16_t x28 = -1;

	t6 = (x25&((x26==x27)|x28));

	if (t6 != 52679177988493LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	int16_t x30 = 23;
	static uint8_t x31 = 68U;
	int16_t x32 = 127;

	t7 = (x29&((x30==x31)|x32));

	if (t7 != 127LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -409490;
	volatile int64_t x35 = INT64_MAX;
	static int16_t x36 = 1;
	int32_t t8 = 1;

	t8 = (x33&((x34==x35)|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -1;
	static int64_t x38 = -2208353648467354LL;
	volatile uint64_t x39 = 848590778059158547LLU;
	int16_t x40 = 4961;
	int32_t t9 = 3059;

	t9 = (x37&((x38==x39)|x40));

	if (t9 != 4961) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = 859U;
	int32_t x42 = INT32_MIN;
	int32_t x43 = -1907585;
	uint32_t t10 = 42519U;

	t10 = (x41&((x42==x43)|x44));

	if (t10 != 859U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 7012LLU;
	int8_t x46 = INT8_MIN;
	uint64_t x47 = 288075285262476379LLU;
	volatile int32_t x48 = INT32_MIN;
	uint64_t t11 = 7750LLU;

	t11 = (x45&((x46==x47)|x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -11;
	int32_t x50 = INT32_MAX;
	int32_t x51 = INT32_MIN;
	static int32_t t12 = -1;

	t12 = (x49&((x50==x51)|x52));

	if (t12 != -1516) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = -1;
	int32_t x55 = INT32_MIN;
	int16_t x56 = INT16_MIN;
	int64_t t13 = INT64_MIN;

	t13 = (x53&((x54==x55)|x56));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = 5;
	uint32_t x59 = UINT32_MAX;
	static int64_t x60 = 101169457793406LL;
	volatile int64_t t14 = 74037LL;

	t14 = (x57&((x58==x59)|x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MIN;
	int64_t x63 = -11590121032018039LL;
	uint8_t x64 = 35U;
	int32_t t15 = -17;

	t15 = (x61&((x62==x63)|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	static uint64_t x67 = 1257338611044970754LLU;
	static uint32_t x68 = 94U;

	t16 = (x65&((x66==x67)|x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x70 = -1;
	static int64_t x72 = INT64_MIN;
	int64_t t17 = INT64_MIN;

	t17 = (x69&((x70==x71)|x72));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 343883000U;
	int8_t x74 = INT8_MIN;
	static uint16_t x75 = 3449U;
	uint32_t t18 = 31603U;

	t18 = (x73&((x74==x75)|x76));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int32_t x79 = INT32_MIN;
	int32_t x80 = -4365088;
	int32_t t19 = 33426;

	t19 = (x77&((x78==x79)|x80));

	if (t19 != 2143118560) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	static int32_t x82 = INT32_MIN;
	static volatile int8_t x83 = INT8_MIN;
	uint16_t x84 = UINT16_MAX;
	int32_t t20 = 14709;

	t20 = (x81&((x82==x83)|x84));

	if (t20 != 65408) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 2448893849560949523LL;
	static int32_t x86 = -934;
	volatile uint16_t x88 = 98U;

	t21 = (x85&((x86==x87)|x88));

	if (t21 != 2LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = -265812079718748LL;
	int16_t x90 = INT16_MIN;
	int16_t x91 = INT16_MIN;
	int8_t x92 = -1;
	volatile int64_t t22 = 1LL;

	t22 = (x89&((x90==x91)|x92));

	if (t22 != -265812079718748LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	int64_t x94 = INT64_MAX;
	int8_t x95 = INT8_MAX;
	uint16_t x96 = 47U;
	volatile int32_t t23 = -54024440;

	t23 = (x93&((x94==x95)|x96));

	if (t23 != 47) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	int32_t x99 = INT32_MAX;
	volatile int32_t t24 = 23;

	t24 = (x97&((x98==x99)|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	static int8_t x102 = 5;
	int8_t x103 = INT8_MIN;
	int64_t x104 = INT64_MIN;
	volatile int64_t t25 = INT64_MIN;

	t25 = (x101&((x102==x103)|x104));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x105 = 221U;
	static int16_t x106 = 9;
	int16_t x107 = -1;
	int64_t x108 = -1LL;
	int64_t t26 = 277067270473913LL;

	t26 = (x105&((x106==x107)|x108));

	if (t26 != 221LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 60U;
	static uint64_t x110 = 212877070531918LLU;
	int16_t x112 = INT16_MIN;
	int32_t t27 = 250921;

	t27 = (x109&((x110==x111)|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	static int8_t x114 = -3;
	static uint32_t x115 = 25U;

	t28 = (x113&((x114==x115)|x116));

	if (t28 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	uint8_t x118 = UINT8_MAX;
	volatile int64_t x119 = INT64_MIN;
	int64_t x120 = -6093697094929LL;
	static int64_t t29 = -21336806653952LL;

	t29 = (x117&((x118==x119)|x120));

	if (t29 != -6093697094929LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 1307U;
	uint16_t x123 = 5U;

	t30 = (x121&((x122==x123)|x124));

	if (t30 != 11LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MIN;
	volatile int64_t x126 = -1LL;
	uint8_t x128 = 26U;

	t31 = (x125&((x126==x127)|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MIN;
	int8_t x130 = INT8_MIN;
	uint32_t x131 = 886020U;
	static int16_t x132 = INT16_MIN;
	int64_t t32 = INT64_MIN;

	t32 = (x129&((x130==x131)|x132));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	uint16_t x135 = 970U;
	static volatile int8_t x136 = INT8_MAX;

	t33 = (x133&((x134==x135)|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 12957U;
	uint16_t x139 = 2U;
	uint8_t x140 = 20U;
	volatile int32_t t34 = 114719;

	t34 = (x137&((x138==x139)|x140));

	if (t34 != 20) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	int16_t x142 = 1644;
	volatile uint64_t x143 = UINT64_MAX;
	uint32_t t35 = 0U;

	t35 = (x141&((x142==x143)|x144));

	if (t35 != 39706U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 521138150324LLU;
	volatile uint64_t x146 = 5266445141801420LLU;
	static int64_t x147 = -1LL;
	uint64_t t36 = 2756280027LLU;

	t36 = (x145&((x146==x147)|x148));

	if (t36 != 1447107508LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x149 = INT16_MAX;
	volatile uint32_t x150 = 98010945U;
	static int32_t t37 = -2319525;

	t37 = (x149&((x150==x151)|x152));

	if (t37 != 93) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x153 = 7U;
	static volatile uint64_t x154 = 1LLU;
	uint16_t x155 = 63U;
	static uint8_t x156 = 62U;
	int32_t t38 = 2;

	t38 = (x153&((x154==x155)|x156));

	if (t38 != 6) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	volatile int16_t x159 = INT16_MIN;
	int64_t x160 = INT64_MAX;
	uint64_t t39 = 6286475149LLU;

	t39 = (x157&((x158==x159)|x160));

	if (t39 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	int32_t x162 = INT32_MIN;
	int64_t x163 = INT64_MIN;
	uint16_t x164 = 2U;
	volatile int32_t t40 = 0;

	t40 = (x161&((x162==x163)|x164));

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	static int8_t x166 = -3;
	uint64_t x167 = 1534LLU;
	int64_t x168 = INT64_MIN;
	int64_t t41 = INT64_MIN;

	t41 = (x165&((x166==x167)|x168));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -310926;
	int64_t x170 = 318763LL;
	int8_t x171 = INT8_MAX;
	int32_t t42 = -8817;

	t42 = (x169&((x170==x171)|x172));

	if (t42 != -310926) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	int32_t x174 = 3499;
	uint16_t x175 = 802U;
	int64_t x176 = INT64_MIN;
	static int64_t t43 = INT64_MIN;

	t43 = (x173&((x174==x175)|x176));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 2U;
	uint16_t x178 = UINT16_MAX;
	static volatile uint16_t x179 = 17U;
	int16_t x180 = INT16_MIN;
	static int32_t t44 = -397158;

	t44 = (x177&((x178==x179)|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x181 = INT16_MAX;
	volatile uint8_t x182 = 73U;
	uint64_t x183 = 110LLU;
	uint16_t x184 = 46U;
	int32_t t45 = -18;

	t45 = (x181&((x182==x183)|x184));

	if (t45 != 46) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = INT32_MIN;
	int64_t x186 = -12975LL;
	static uint64_t x187 = 23473LLU;
	int64_t x188 = -99876824LL;
	int64_t t46 = 2LL;

	t46 = (x185&((x186==x187)|x188));

	if (t46 != -2147483648LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = -26;
	volatile int32_t t47 = -25442;

	t47 = (x189&((x190==x191)|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = INT16_MAX;
	int32_t x194 = INT32_MAX;
	static int32_t x195 = INT32_MAX;
	uint8_t x196 = 87U;

	t48 = (x193&((x194==x195)|x196));

	if (t48 != 87) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x198 = INT16_MIN;
	int64_t x199 = -1LL;
	volatile int32_t x200 = -1;

	t49 = (x197&((x198==x199)|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = -1LL;
	int16_t x204 = 0;
	volatile int32_t t50 = 194445;

	t50 = (x201&((x202==x203)|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x206 = INT32_MIN;
	int32_t x208 = 434054;
	volatile int32_t t51 = -3767260;

	t51 = (x205&((x206==x207)|x208));

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = -1;
	uint64_t x210 = UINT64_MAX;
	volatile int32_t x211 = INT32_MIN;
	int8_t x212 = INT8_MIN;
	int32_t t52 = 1;

	t52 = (x209&((x210==x211)|x212));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x214 = INT8_MAX;

	t53 = (x213&((x214==x215)|x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	volatile int32_t x218 = -1;
	uint16_t x219 = 4035U;
	int32_t x220 = -1;
	static volatile int32_t t54 = 1;

	t54 = (x217&((x218==x219)|x220));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	static uint8_t x222 = 4U;
	uint8_t x223 = UINT8_MAX;

	t55 = (x221&((x222==x223)|x224));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x227 = 275U;
	int64_t x228 = -1LL;

	t56 = (x225&((x226==x227)|x228));

	if (t56 != 1047344387901580LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x230 = -24;
	volatile int16_t x231 = INT16_MIN;
	volatile int64_t x232 = INT64_MIN;
	int64_t t57 = -2LL;

	t57 = (x229&((x230==x231)|x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int8_t x234 = INT8_MIN;
	static uint16_t x235 = 5U;
	volatile int32_t x236 = INT32_MAX;
	static int32_t t58 = 4;

	t58 = (x233&((x234==x235)|x236));

	if (t58 != 2147450880) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x238 = -1;
	int8_t x239 = 16;
	int64_t x240 = -1LL;
	volatile int64_t t59 = 1LL;

	t59 = (x237&((x238==x239)|x240));

	if (t59 != -553179LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	int8_t x242 = 3;
	volatile int16_t x243 = 1840;
	int64_t x244 = 4537238973997LL;

	t60 = (x241&((x242==x243)|x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = INT64_MIN;
	static volatile int32_t x246 = 7;
	uint32_t x248 = UINT32_MAX;
	volatile int64_t t61 = 1301391LL;

	t61 = (x245&((x246==x247)|x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = INT64_MAX;
	uint16_t x252 = 9U;
	volatile int64_t t62 = -22827167616098LL;

	t62 = (x249&((x250==x251)|x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = -1;
	volatile int64_t x255 = -309000042LL;
	uint32_t x256 = UINT32_MAX;
	uint32_t t63 = UINT32_MAX;

	t63 = (x253&((x254==x255)|x256));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x258 = -1LL;
	uint16_t x259 = 100U;
	volatile uint16_t x260 = UINT16_MAX;
	int32_t t64 = -1;

	t64 = (x257&((x258==x259)|x260));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MAX;
	int8_t x262 = INT8_MIN;
	static uint32_t x263 = UINT32_MAX;
	int16_t x264 = INT16_MAX;
	static int64_t t65 = -12224576550234738LL;

	t65 = (x261&((x262==x263)|x264));

	if (t65 != 32767LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -1;
	volatile int16_t x266 = 33;
	uint16_t x268 = 8U;
	volatile int32_t t66 = 739392;

	t66 = (x265&((x266==x267)|x268));

	if (t66 != 8) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = 0;
	static uint32_t x271 = UINT32_MAX;
	volatile int64_t x272 = -1LL;
	volatile int64_t t67 = 2271911763670885199LL;

	t67 = (x269&((x270==x271)|x272));

	if (t67 != 2147483647LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -112378056042565903LL;
	static volatile int64_t t68 = -3860690597LL;

	t68 = (x273&((x274==x275)|x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = 14LL;
	volatile uint32_t x278 = 36U;
	int16_t x279 = INT16_MAX;
	int16_t x280 = -1;
	volatile int64_t t69 = -6730744LL;

	t69 = (x277&((x278==x279)|x280));

	if (t69 != 14LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x282 = 55U;
	int64_t x283 = 52885979639638221LL;
	static int64_t x284 = INT64_MIN;
	volatile uint64_t t70 = 7500LLU;

	t70 = (x281&((x282==x283)|x284));

	if (t70 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = INT64_MIN;
	uint8_t x287 = 0U;
	int32_t x288 = -1;
	int64_t t71 = INT64_MIN;

	t71 = (x285&((x286==x287)|x288));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	volatile int64_t x290 = -1LL;
	uint32_t x292 = 2752U;
	volatile uint32_t t72 = 27931767U;

	t72 = (x289&((x290==x291)|x292));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	volatile int64_t t73 = -574389854433LL;

	t73 = (x293&((x294==x295)|x296));

	if (t73 != 684532437LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 67U;
	int8_t x300 = 3;
	volatile int32_t t74 = 1920378;

	t74 = (x297&((x298==x299)|x300));

	if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	static int64_t x302 = INT64_MIN;
	uint16_t x303 = 0U;
	int32_t x304 = INT32_MIN;
	int32_t t75 = INT32_MIN;

	t75 = (x301&((x302==x303)|x304));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = -1;
	int32_t x307 = -1;
	static int32_t x308 = INT32_MAX;

	t76 = (x305&((x306==x307)|x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = -1;
	int16_t x311 = INT16_MIN;
	volatile int8_t x312 = 62;
	uint32_t t77 = 1603U;

	t77 = (x309&((x310==x311)|x312));

	if (t77 != 10U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	int16_t x314 = 880;
	int8_t x315 = INT8_MIN;
	static uint16_t x316 = UINT16_MAX;
	int32_t t78 = -1446496;

	t78 = (x313&((x314==x315)|x316));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 4U;
	int8_t x318 = 1;
	static uint32_t x319 = UINT32_MAX;
	volatile int64_t t79 = 1967LL;

	t79 = (x317&((x318==x319)|x320));

	if (t79 != 4LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -1;
	volatile int32_t x323 = -19484;
	uint32_t x324 = 58269U;
	uint32_t t80 = 570U;

	t80 = (x321&((x322==x323)|x324));

	if (t80 != 58269U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	uint64_t x326 = UINT64_MAX;
	uint8_t x327 = 1U;
	int64_t x328 = -24327LL;

	t81 = (x325&((x326==x327)|x328));

	if (t81 != -24327LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 40112U;
	uint16_t x331 = UINT16_MAX;
	volatile int16_t x332 = INT16_MAX;
	static uint32_t t82 = 31138U;

	t82 = (x329&((x330==x331)|x332));

	if (t82 != 7344U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x334 = UINT64_MAX;
	int8_t x335 = -1;
	int16_t x336 = INT16_MIN;
	volatile int32_t t83 = -2763;

	t83 = (x333&((x334==x335)|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x337 = 6U;
	static volatile int16_t x338 = -15496;
	uint16_t x339 = 15U;
	volatile int32_t x340 = -1;
	int32_t t84 = 1618;

	t84 = (x337&((x338==x339)|x340));

	if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = -1;
	int32_t x344 = -1;
	int32_t t85 = 4405;

	t85 = (x341&((x342==x343)|x344));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 2LL;
	uint8_t x346 = UINT8_MAX;
	volatile uint32_t x347 = 195011486U;
	static int64_t x348 = -82526230266266LL;
	volatile int64_t t86 = 64131988447270LL;

	t86 = (x345&((x346==x347)|x348));

	if (t86 != 2LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = 3U;
	static volatile int32_t x350 = -61;
	uint32_t x351 = 793U;

	t87 = (x349&((x350==x351)|x352));

	if (t87 != 3) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = 892LL;
	static uint16_t x355 = 1U;
	int32_t x356 = -1;

	t88 = (x353&((x354==x355)|x356));

	if (t88 != 892LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = UINT64_MAX;
	int8_t x358 = INT8_MAX;
	uint32_t x359 = UINT32_MAX;
	static int8_t x360 = 52;
	static uint64_t t89 = 873052LLU;

	t89 = (x357&((x358==x359)|x360));

	if (t89 != 52LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = INT64_MIN;
	uint64_t x362 = UINT64_MAX;
	volatile int64_t x364 = 54LL;
	volatile int64_t t90 = -3820842LL;

	t90 = (x361&((x362==x363)|x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 60U;
	static volatile int32_t x366 = -1;
	static volatile int64_t x367 = -1012952479768545505LL;
	volatile int64_t x368 = -8LL;
	volatile int64_t t91 = -63LL;

	t91 = (x365&((x366==x367)|x368));

	if (t91 != 56LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	int16_t x370 = -1;
	uint32_t x371 = 11201910U;
	uint32_t x372 = 4U;
	static volatile int64_t t92 = -1731710660LL;

	t92 = (x369&((x370==x371)|x372));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MAX;
	int64_t x374 = INT64_MIN;
	int64_t x375 = INT64_MIN;
	uint32_t x376 = 59182014U;
	uint32_t t93 = 10806U;

	t93 = (x373&((x374==x375)|x376));

	if (t93 != 59182015U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 123U;
	int16_t x378 = -1236;
	int64_t x379 = INT64_MAX;
	int32_t t94 = -415380141;

	t94 = (x377&((x378==x379)|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	static uint16_t x383 = 5677U;
	static int64_t x384 = INT64_MIN;
	int64_t t95 = INT64_MIN;

	t95 = (x381&((x382==x383)|x384));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = INT8_MAX;
	volatile int64_t x387 = INT64_MIN;
	volatile int16_t x388 = INT16_MIN;
	volatile int32_t t96 = INT32_MIN;

	t96 = (x385&((x386==x387)|x388));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x389 = UINT64_MAX;
	int64_t x390 = -1LL;
	int16_t x391 = -1996;
	int16_t x392 = 797;
	uint64_t t97 = 6656223LLU;

	t97 = (x389&((x390==x391)|x392));

	if (t97 != 797LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 52U;
	int8_t x395 = 3;
	static uint64_t x396 = UINT64_MAX;
	static uint64_t t98 = 202134677LLU;

	t98 = (x393&((x394==x395)|x396));

	if (t98 != 52LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = 0;
	int16_t x398 = INT16_MAX;
	int8_t x399 = INT8_MAX;
	uint32_t x400 = 2093299676U;

	t99 = (x397&((x398==x399)|x400));

	if (t99 != 0U) { NG(); } else { ; }
	
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

