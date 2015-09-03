#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
static int64_t x9 = INT64_MIN;
volatile int32_t x11 = -3;
uint64_t x12 = 3872LLU;
static volatile uint64_t t2 = 69089121LLU;
volatile uint32_t x14 = 72550U;
int16_t x17 = 207;
static uint8_t x21 = 0U;
volatile int32_t t5 = -5;
uint16_t x25 = UINT16_MAX;
volatile int16_t x31 = 15;
int16_t x50 = INT16_MIN;
static volatile int64_t x57 = INT64_MAX;
int16_t x62 = 230;
int64_t x66 = 37710525LL;
int32_t x67 = -1;
volatile int64_t t16 = 3413068329LL;
int64_t t18 = -938LL;
int8_t x78 = 1;
uint64_t x84 = UINT64_MAX;
static volatile int64_t x89 = -1LL;
int32_t x97 = INT32_MIN;
uint8_t x98 = UINT8_MAX;
static uint16_t x101 = 5U;
uint16_t x106 = 6894U;
static int64_t x107 = 74LL;
int8_t x116 = -1;
volatile int32_t x123 = -3681037;
volatile int32_t t29 = 108;
int64_t x132 = -153721415312627523LL;
static volatile int64_t t31 = -284421776283124885LL;
int64_t x136 = INT64_MIN;
volatile int8_t x139 = -1;
int8_t x152 = 0;
static int32_t x155 = INT32_MIN;
volatile int32_t x158 = 1;
static int8_t x162 = INT8_MAX;
static int16_t x168 = INT16_MAX;
volatile int64_t t40 = 1000657464344LL;
static uint64_t x169 = 37127220LLU;
int64_t x176 = -1LL;
uint8_t x180 = 2U;
static int32_t t43 = -2088000;
int16_t x181 = 137;
int64_t t44 = -108LL;
int16_t x190 = 0;
int16_t x191 = 615;
uint16_t x193 = 3609U;
uint64_t x195 = 6578757115925LLU;
uint32_t x203 = 1457834978U;
volatile uint32_t t48 = 132875741U;
volatile uint64_t t49 = 93795421LLU;
int16_t x211 = -36;
volatile int8_t x217 = INT8_MIN;
int32_t x236 = 102706;
int32_t t55 = 4569;
static uint32_t x239 = 516U;
int32_t t57 = -1548;
int16_t x245 = -1;
volatile uint32_t t59 = 31749504U;
uint8_t x255 = 40U;
int8_t x256 = -1;
uint64_t x258 = UINT64_MAX;
int64_t x263 = 155296962944580806LL;
static uint8_t x265 = UINT8_MAX;
int16_t x274 = INT16_MIN;
int32_t x279 = -124132;
int64_t x288 = 284LL;
uint32_t x292 = UINT32_MAX;
volatile uint32_t t69 = 1477291U;
uint32_t x295 = 882U;
int32_t x298 = INT32_MIN;
int64_t x301 = -7367722LL;
static int16_t x304 = -1;
volatile int64_t t72 = 331LL;
uint16_t x305 = 2U;
static uint64_t x306 = 61866841598204176LLU;
int32_t x310 = -8269;
int64_t x311 = -120352058134381LL;
static int64_t t74 = -6LL;
uint8_t x313 = 72U;
int64_t t75 = -661840909969LL;
int8_t x317 = -1;
static volatile uint32_t x318 = UINT32_MAX;
static int64_t t77 = 154754903745076389LL;
volatile int32_t x332 = -1;
volatile int64_t t79 = 10101810372455019LL;
volatile int16_t x340 = INT16_MIN;
int32_t x341 = INT32_MIN;
int64_t x343 = 740737599949828LL;
int16_t x344 = 1113;
int16_t x347 = INT16_MIN;
uint16_t x352 = UINT16_MAX;
int32_t t83 = 332714908;
uint64_t x355 = 29888188189770941LLU;
int32_t x356 = -1146;
int8_t x359 = INT8_MIN;
volatile uint32_t x364 = 1493973U;
volatile int16_t x367 = INT16_MIN;
uint64_t x368 = 89422551876950465LLU;
uint64_t x378 = 1LLU;
int16_t x380 = INT16_MIN;
uint64_t t89 = 41052258507LLU;
uint64_t x383 = UINT64_MAX;
volatile int16_t x389 = INT16_MIN;
static int16_t x392 = INT16_MIN;
volatile uint32_t t92 = 1228107701U;
static int16_t x401 = 1;
static int64_t t95 = -71680094135322290LL;
int64_t x411 = INT64_MIN;
static int16_t x412 = 71;
int64_t t97 = -67632548136612979LL;
static uint64_t t98 = 693228LLU;


void f0(void) {
	uint64_t x1 = 169819919LLU;
	volatile int8_t x3 = -7;
	uint16_t x4 = 2292U;
	uint64_t t0 = 1654303393275LLU;

	t0 = ((x1&x2)-(x3^x4));

	if (t0 != 2306LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int64_t x6 = -1LL;
	volatile uint32_t x7 = UINT32_MAX;
	int64_t x8 = -152592LL;
	int64_t t1 = 436163984LL;

	t1 = ((x5&x6)-(x7^x8));

	if (t1 != 4294781937LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x10 = 280U;

	t2 = ((x9&x10)-(x11^x12));

	if (t2 != 3875LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MAX;
	volatile int64_t x15 = -2784720LL;
	volatile int32_t x16 = INT32_MAX;
	int64_t t3 = 177LL;

	t3 = ((x13&x14)-(x15^x16));

	if (t3 != 2144699031LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 23U;
	uint16_t x19 = UINT16_MAX;
	uint32_t x20 = 236U;
	static volatile uint32_t t4 = 1U;

	t4 = ((x17&x18)-(x19^x20));

	if (t4 != 4294902004U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 1U;
	uint16_t x23 = 1U;
	static int32_t x24 = 85468093;

	t5 = ((x21&x22)-(x23^x24));

	if (t5 != -85468092) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -1170825;
	int16_t x27 = INT16_MIN;
	int32_t x28 = -1;
	volatile int32_t t6 = 74;

	t6 = ((x25&x26)-(x27^x28));

	if (t6 != -23944) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint16_t x30 = UINT16_MAX;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -12342;

	t7 = ((x29&x30)-(x31^x32));

	if (t7 != -112) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	int16_t x34 = 0;
	int8_t x35 = INT8_MAX;
	int16_t x36 = -1;
	volatile int32_t t8 = -5979352;

	t8 = ((x33&x34)-(x35^x36));

	if (t8 != 128) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	volatile uint32_t x38 = 342U;
	volatile int16_t x39 = -1;
	uint64_t x40 = 32145974LLU;
	uint64_t t9 = 86423340LLU;

	t9 = ((x37&x38)-(x39^x40));

	if (t9 != 32146231LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -105;
	int8_t x42 = INT8_MAX;
	volatile int64_t x43 = INT64_MAX;
	volatile uint32_t x44 = UINT32_MAX;
	volatile int64_t t10 = 3516604829678579LL;

	t10 = ((x41&x42)-(x43^x44));

	if (t10 != -9223372032559808489LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 105;
	uint64_t x46 = UINT64_MAX;
	static volatile int64_t x47 = INT64_MIN;
	int32_t x48 = 20093;
	uint64_t t11 = 103092343LLU;

	t11 = ((x45&x46)-(x47^x48));

	if (t11 != 9223372036854755820LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	uint32_t x51 = 183776352U;
	int64_t x52 = INT64_MIN;
	static volatile int64_t t12 = 1LL;

	t12 = ((x49&x50)-(x51^x52));

	if (t12 != 9223372034523515808LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MAX;
	volatile int8_t x54 = INT8_MIN;
	volatile int64_t x55 = 351664014375447LL;
	volatile int32_t x56 = INT32_MIN;
	static int64_t t13 = -165585130936653012LL;

	t13 = ((x53&x54)-(x55^x56));

	if (t13 != 351664797631977LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = UINT32_MAX;
	int32_t x59 = INT32_MAX;
	int16_t x60 = -38;
	static volatile int64_t t14 = 987441LL;

	t14 = ((x57&x58)-(x59^x60));

	if (t14 != 6442450906LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	int32_t x63 = INT32_MIN;
	volatile int8_t x64 = INT8_MIN;
	volatile int32_t t15 = 112594;

	t15 = ((x61&x62)-(x63^x64));

	if (t15 != -2147483290) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	volatile int8_t x68 = -1;

	t16 = ((x65&x66)-(x67^x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	volatile uint8_t x70 = UINT8_MAX;
	volatile int16_t x71 = 1;
	volatile uint8_t x72 = 3U;
	int32_t t17 = 18807491;

	t17 = ((x69&x70)-(x71^x72));

	if (t17 != 253) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 11U;
	static int64_t x74 = 2751710134572819170LL;
	int32_t x75 = -215;
	int8_t x76 = INT8_MIN;

	t18 = ((x73&x74)-(x75^x76));

	if (t18 != -167LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	int16_t x79 = -4325;
	static int16_t x80 = INT16_MIN;
	int32_t t19 = -4738884;

	t19 = ((x77&x78)-(x79^x80));

	if (t19 != -28442) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	int8_t x82 = INT8_MAX;
	int16_t x83 = -1;
	uint64_t t20 = 89476LLU;

	t20 = ((x81&x82)-(x83^x84));

	if (t20 != 127LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	int8_t x86 = INT8_MAX;
	uint32_t x87 = 1971564U;
	uint16_t x88 = UINT16_MAX;
	volatile uint32_t t21 = 42527717U;

	t21 = ((x85&x86)-(x87^x88));

	if (t21 != 4292941292U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = -1;
	static int64_t x91 = INT64_MAX;
	uint8_t x92 = UINT8_MAX;
	int64_t t22 = 1465170LL;

	t22 = ((x89&x90)-(x91^x92));

	if (t22 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	volatile int16_t x94 = INT16_MIN;
	int16_t x95 = -28;
	uint16_t x96 = 1U;
	int32_t t23 = 15;

	t23 = ((x93&x94)-(x95^x96));

	if (t23 != 27) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x99 = INT32_MAX;
	volatile uint8_t x100 = UINT8_MAX;
	volatile int32_t t24 = -11;

	t24 = ((x97&x98)-(x99^x100));

	if (t24 != -2147483392) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x102 = -1;
	int64_t x103 = INT64_MAX;
	static int16_t x104 = -948;
	static int64_t t25 = -25602628LL;

	t25 = ((x101&x102)-(x103^x104));

	if (t25 != 9223372036854774866LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	static volatile uint64_t x108 = 2830821390593358824LLU;
	uint64_t t26 = 90286959149986LLU;

	t26 = ((x105&x106)-(x107^x108));

	if (t26 != 15615922683116199756LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x113 = 11057687LLU;
	volatile int32_t x114 = -24943275;
	int64_t x115 = 15466605639822442LL;
	uint64_t t27 = 298072610318LLU;

	t27 = ((x113&x114)-(x115^x116));

	if (t27 != 15466605648219264LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = -2826720524934689LL;
	static int8_t x118 = -1;
	int32_t x119 = INT32_MAX;
	int8_t x120 = INT8_MIN;
	int64_t t28 = -176126519626013LL;

	t28 = ((x117&x118)-(x119^x120));

	if (t28 != -2826718377451168LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MIN;
	uint16_t x122 = 30U;
	int16_t x124 = 231;

	t29 = ((x121&x122)-(x123^x124));

	if (t29 != 3681260) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = -1;
	uint64_t x126 = 624757LLU;
	static uint16_t x127 = 2U;
	int64_t x128 = INT64_MIN;
	uint64_t t30 = 276872662448384LLU;

	t30 = ((x125&x126)-(x127^x128));

	if (t30 != 9223372036855400563LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MIN;
	uint16_t x130 = UINT16_MAX;
	static int16_t x131 = -1;

	t31 = ((x129&x130)-(x131^x132));

	if (t31 != -153721415312627522LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MAX;
	int8_t x134 = 30;
	uint64_t x135 = UINT64_MAX;
	uint64_t t32 = 27LLU;

	t32 = ((x133&x134)-(x135^x136));

	if (t32 != 9223372036854775839LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = UINT32_MAX;
	int64_t x138 = -2076334911709185LL;
	uint8_t x140 = UINT8_MAX;
	volatile int64_t t33 = -300920061009LL;

	t33 = ((x137&x138)-(x139^x140));

	if (t33 != 2603032831LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = 0;
	uint32_t x142 = UINT32_MAX;
	int64_t x143 = INT64_MAX;
	static uint32_t x144 = 42791904U;
	int64_t t34 = 1706766754LL;

	t34 = ((x141&x142)-(x143^x144));

	if (t34 != -9223372036811983903LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MIN;
	int32_t x146 = INT32_MIN;
	uint8_t x147 = 37U;
	volatile int32_t x148 = INT32_MIN;
	static int32_t t35 = 830;

	t35 = ((x145&x146)-(x147^x148));

	if (t35 != -37) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = -328579364;
	int32_t x150 = INT32_MIN;
	uint32_t x151 = 181U;
	static uint32_t t36 = 3956389U;

	t36 = ((x149&x150)-(x151^x152));

	if (t36 != 2147483467U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = UINT32_MAX;
	int64_t x154 = INT64_MIN;
	int64_t x156 = -697725998LL;
	static volatile int64_t t37 = 17056456728762384LL;

	t37 = ((x153&x154)-(x155^x156));

	if (t37 != -1449757650LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x157 = 6U;
	int64_t x159 = 158LL;
	int32_t x160 = INT32_MIN;
	volatile int64_t t38 = -33858021LL;

	t38 = ((x157&x158)-(x159^x160));

	if (t38 != 2147483490LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = 8755321873978LLU;
	int8_t x163 = 2;
	int64_t x164 = INT64_MIN;
	uint64_t t39 = 83607073049LLU;

	t39 = ((x161&x162)-(x163^x164));

	if (t39 != 9223372036854775864LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = 1194072923798015LL;
	int64_t x166 = -40680495881LL;
	int8_t x167 = -1;

	t40 = ((x165&x166)-(x167^x168));

	if (t40 != 1194071846609143LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x170 = INT16_MIN;
	uint64_t x171 = UINT64_MAX;
	uint64_t x172 = 33810054056697938LLU;
	uint64_t t41 = 1252845068845076561LLU;

	t41 = ((x169&x170)-(x171^x172));

	if (t41 != 33810054093824083LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = INT8_MIN;
	uint16_t x174 = UINT16_MAX;
	volatile uint32_t x175 = UINT32_MAX;
	int64_t t42 = 346086LL;

	t42 = ((x173&x174)-(x175^x176));

	if (t42 != 4295032704LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x177 = INT32_MIN;
	uint8_t x178 = 1U;
	int8_t x179 = INT8_MIN;

	t43 = ((x177&x178)-(x179^x180));

	if (t43 != 126) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x182 = 1;
	int64_t x183 = INT64_MIN;
	int64_t x184 = 1071669811LL;

	t44 = ((x181&x182)-(x183^x184));

	if (t44 != 9223372035783105998LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = 2129494266128435LL;
	int8_t x192 = INT8_MIN;
	int64_t t45 = -358515155267888263LL;

	t45 = ((x189&x190)-(x191^x192));

	if (t45 != 537LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x194 = 1U;
	static volatile uint16_t x196 = UINT16_MAX;
	uint64_t t46 = 183966591023805LLU;

	t46 = ((x193&x194)-(x195^x196));

	if (t46 != 18446737494952386583LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x197 = -813572239968LL;
	volatile uint64_t x198 = UINT64_MAX;
	int16_t x199 = 70;
	static volatile int8_t x200 = 41;
	uint64_t t47 = 1438310547LLU;

	t47 = ((x197&x198)-(x199^x200));

	if (t47 != 18446743260137311537LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = 5U;
	static volatile int32_t x202 = 2;
	int16_t x204 = 7378;

	t48 = ((x201&x202)-(x203^x204));

	if (t48 != 2837129424U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = -1;
	int32_t x206 = 27310;
	static int8_t x207 = -1;
	uint64_t x208 = 70834118354496LLU;

	t49 = ((x205&x206)-(x207^x208));

	if (t49 != 70834118381807LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x209 = 35U;
	static int64_t x210 = INT64_MIN;
	uint8_t x212 = UINT8_MAX;
	volatile int64_t t50 = -7036LL;

	t50 = ((x209&x210)-(x211^x212));

	if (t50 != 221LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x218 = -1;
	static int16_t x219 = INT16_MIN;
	int8_t x220 = INT8_MIN;
	volatile int32_t t51 = 0;

	t51 = ((x217&x218)-(x219^x220));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x221 = 13LL;
	uint8_t x222 = 104U;
	static int64_t x223 = INT64_MIN;
	int16_t x224 = INT16_MAX;
	int64_t t52 = -3954409001LL;

	t52 = ((x221&x222)-(x223^x224));

	if (t52 != 9223372036854743049LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x225 = 46696048U;
	int64_t x226 = INT64_MIN;
	static int64_t x227 = INT64_MIN;
	uint32_t x228 = 329277U;
	int64_t t53 = 6493606764LL;

	t53 = ((x225&x226)-(x227^x228));

	if (t53 != 9223372036854446531LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = INT8_MIN;
	int32_t x230 = INT32_MIN;
	int8_t x231 = -1;
	uint8_t x232 = 87U;
	static volatile int32_t t54 = 15677;

	t54 = ((x229&x230)-(x231^x232));

	if (t54 != -2147483560) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x233 = 27865U;
	uint16_t x234 = UINT16_MAX;
	static uint8_t x235 = UINT8_MAX;

	t55 = ((x233&x234)-(x235^x236));

	if (t55 != -74996) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x237 = 161935868115618370LLU;
	volatile int64_t x238 = INT64_MIN;
	int32_t x240 = INT32_MIN;
	volatile uint64_t t56 = 43421018735073LLU;

	t56 = ((x237&x238)-(x239^x240));

	if (t56 != 18446744071562067452LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = -1;
	volatile int8_t x242 = INT8_MIN;
	volatile int8_t x243 = INT8_MAX;
	int32_t x244 = 754984346;

	t57 = ((x241&x242)-(x243^x244));

	if (t57 != -754984549) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x246 = INT64_MAX;
	uint64_t x247 = 24LLU;
	int8_t x248 = -1;
	volatile uint64_t t58 = 228631247380518396LLU;

	t58 = ((x245&x246)-(x247^x248));

	if (t58 != 9223372036854775832LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x249 = INT32_MIN;
	int32_t x250 = 1882;
	int16_t x251 = -1;
	volatile uint32_t x252 = 690220952U;

	t59 = ((x249&x250)-(x251^x252));

	if (t59 != 690220953U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = INT8_MIN;
	volatile uint16_t x254 = 46U;
	int32_t t60 = 4134277;

	t60 = ((x253&x254)-(x255^x256));

	if (t60 != 41) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = 6;
	volatile uint64_t x259 = 239964724192LLU;
	int32_t x260 = 6752;
	uint64_t t61 = 29271086408800642LLU;

	t61 = ((x257&x258)-(x259^x260));

	if (t61 != 18446743833744834182LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = 1;
	int64_t x262 = INT64_MIN;
	uint64_t x264 = 220703829727LLU;
	uint64_t t62 = 4LLU;

	t62 = ((x261&x262)-(x263^x264));

	if (t62 != 18291446918045560295LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x266 = INT8_MIN;
	uint64_t x267 = 2698991947387540LLU;
	static int64_t x268 = -186712LL;
	volatile uint64_t t63 = 31LLU;

	t63 = ((x265&x266)-(x267^x268));

	if (t63 != 2698991947238468LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = INT8_MAX;
	static uint8_t x270 = 55U;
	static uint16_t x271 = UINT16_MAX;
	int16_t x272 = INT16_MIN;
	volatile int32_t t64 = 22418;

	t64 = ((x269&x270)-(x271^x272));

	if (t64 != 32824) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x273 = 112LLU;
	int8_t x275 = -1;
	int32_t x276 = 128260;
	volatile uint64_t t65 = 253LLU;

	t65 = ((x273&x274)-(x275^x276));

	if (t65 != 128261LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = INT8_MAX;
	static uint32_t x278 = 4U;
	volatile int16_t x280 = -124;
	volatile uint32_t t66 = 12749106U;

	t66 = ((x277&x278)-(x279^x280));

	if (t66 != 4294843244U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = -1;
	int32_t x282 = 196296;
	static int64_t x283 = -72130LL;
	int32_t x284 = -7;
	volatile int64_t t67 = 40799328604905LL;

	t67 = ((x281&x282)-(x283^x284));

	if (t67 != 124161LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x285 = 48U;
	volatile int16_t x286 = 20;
	static uint64_t x287 = UINT64_MAX;
	uint64_t t68 = 290912083LLU;

	t68 = ((x285&x286)-(x287^x288));

	if (t68 != 301LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x289 = 175973310U;
	uint32_t x290 = 23U;
	int32_t x291 = 28;

	t69 = ((x289&x290)-(x291^x292));

	if (t69 != 51U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x293 = UINT32_MAX;
	int16_t x294 = INT16_MIN;
	volatile uint32_t x296 = UINT32_MAX;
	uint32_t t70 = 1747091U;

	t70 = ((x293&x294)-(x295^x296));

	if (t70 != 4294935411U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x297 = 680584U;
	uint64_t x299 = 3LLU;
	int16_t x300 = 6;
	static volatile uint64_t t71 = 544404366373LLU;

	t71 = ((x297&x298)-(x299^x300));

	if (t71 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x302 = INT32_MIN;
	int64_t x303 = -1LL;

	t72 = ((x301&x302)-(x303^x304));

	if (t72 != -2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x307 = 78859059909133809LLU;
	static uint64_t x308 = 4LLU;
	static uint64_t t73 = 254061848LLU;

	t73 = ((x305&x306)-(x307^x308));

	if (t73 != 18367885013800417803LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x309 = INT8_MIN;
	uint8_t x312 = 12U;

	t74 = ((x309&x310)-(x311^x312));

	if (t74 != 120352058126049LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x314 = 25433U;
	int64_t x315 = 1962944752297791LL;
	int64_t x316 = INT64_MAX;

	t75 = ((x313&x314)-(x315^x316));

	if (t75 != -9221409092102477944LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x319 = 1;
	int8_t x320 = INT8_MIN;
	uint32_t t76 = 334262U;

	t76 = ((x317&x318)-(x319^x320));

	if (t76 != 126U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = INT8_MAX;
	uint16_t x326 = UINT16_MAX;
	int32_t x327 = INT32_MIN;
	int64_t x328 = -1LL;

	t77 = ((x325&x326)-(x327^x328));

	if (t77 != -2147483520LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x329 = UINT64_MAX;
	int16_t x330 = INT16_MAX;
	int64_t x331 = -97441255490LL;
	uint64_t t78 = 362781535914LLU;

	t78 = ((x329&x330)-(x331^x332));

	if (t78 != 18446743976268328894LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x333 = INT32_MIN;
	static volatile int64_t x334 = -1LL;
	volatile uint16_t x335 = UINT16_MAX;
	uint8_t x336 = 19U;

	t79 = ((x333&x334)-(x335^x336));

	if (t79 != -2147549164LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x337 = -1;
	static int64_t x338 = -1LL;
	static uint64_t x339 = 1107083700798290LLU;
	static volatile uint64_t t80 = 359542499LLU;

	t80 = ((x337&x338)-(x339^x340));

	if (t80 != 1107083700829357LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x342 = -1;
	int64_t t81 = 96459760671LL;

	t81 = ((x341&x342)-(x343^x344));

	if (t81 != -740739747432541LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = -4362681633523LL;
	volatile int8_t x346 = INT8_MIN;
	int16_t x348 = INT16_MIN;
	int64_t t82 = -26342LL;

	t82 = ((x345&x346)-(x347^x348));

	if (t82 != -4362681633536LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = INT32_MIN;
	volatile int16_t x350 = INT16_MAX;
	int32_t x351 = INT32_MIN;

	t83 = ((x349&x350)-(x351^x352));

	if (t83 != 2147418113) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = INT32_MAX;
	static int16_t x354 = INT16_MAX;
	volatile uint64_t t84 = 26970261LLU;

	t84 = ((x353&x354)-(x355^x356));

	if (t84 != 29888188189802692LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = INT32_MIN;
	static int64_t x358 = 2709316851174773114LL;
	static int8_t x360 = INT8_MIN;
	int64_t t85 = -587868420122580LL;

	t85 = ((x357&x358)-(x359^x360));

	if (t85 != 2709316849794809856LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = INT16_MIN;
	int16_t x362 = INT16_MIN;
	uint32_t x363 = 5U;
	volatile uint32_t t86 = 13777241U;

	t86 = ((x361&x362)-(x363^x364));

	if (t86 != 4293440560U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = INT64_MIN;
	int32_t x366 = 3977;
	static uint64_t t87 = 16766184637505601LLU;

	t87 = ((x365&x366)-(x367^x368));

	if (t87 != 89422551876937279LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x373 = 0;
	static uint16_t x374 = 560U;
	uint16_t x375 = 13425U;
	volatile int64_t x376 = INT64_MAX;
	int64_t t88 = 27LL;

	t88 = ((x373&x374)-(x375^x376));

	if (t88 != -9223372036854762382LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x377 = UINT32_MAX;
	volatile uint8_t x379 = 24U;

	t89 = ((x377&x378)-(x379^x380));

	if (t89 != 32745LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x381 = UINT16_MAX;
	uint32_t x382 = 14455U;
	volatile int16_t x384 = -1;
	uint64_t t90 = 4790491537LLU;

	t90 = ((x381&x382)-(x383^x384));

	if (t90 != 14455LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x385 = 60U;
	static uint8_t x386 = 56U;
	uint32_t x387 = 31926U;
	int32_t x388 = INT32_MAX;
	volatile uint32_t t91 = 128727U;

	t91 = ((x385&x386)-(x387^x388));

	if (t91 != 2147515631U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x390 = 3U;
	volatile uint8_t x391 = UINT8_MAX;

	t92 = ((x389&x390)-(x391^x392));

	if (t92 != 32513U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = -185584875817132948LL;
	int8_t x394 = INT8_MIN;
	int32_t x395 = -1;
	int8_t x396 = -16;
	volatile int64_t t93 = 434407721366LL;

	t93 = ((x393&x394)-(x395^x396));

	if (t93 != -185584875817133071LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x397 = INT8_MAX;
	volatile uint8_t x398 = 93U;
	int32_t x399 = -1686;
	static int16_t x400 = 6;
	volatile int32_t t94 = 786524446;

	t94 = ((x397&x398)-(x399^x400));

	if (t94 != 1777) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x402 = 39;
	static volatile int64_t x403 = -34687845431LL;
	int16_t x404 = INT16_MAX;

	t95 = ((x401&x402)-(x403^x404));

	if (t95 != 34687876043LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = INT16_MAX;
	volatile int64_t x406 = 503605LL;
	int16_t x407 = 15;
	volatile int8_t x408 = 1;
	volatile int64_t t96 = 44907498LL;

	t96 = ((x405&x406)-(x407^x408));

	if (t96 != 12071LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x409 = INT64_MIN;
	volatile uint16_t x410 = 10285U;

	t97 = ((x409&x410)-(x411^x412));

	if (t97 != 9223372036854775737LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x413 = 1023U;
	uint64_t x414 = 1327717911LLU;
	int32_t x415 = INT32_MIN;
	int32_t x416 = 2;

	t98 = ((x413&x414)-(x415^x416));

	if (t98 != 2147484181LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x421 = UINT64_MAX;
	int8_t x422 = -1;
	static volatile int16_t x423 = -1;
	int32_t x424 = -94;
	volatile uint64_t t99 = 9931LLU;

	t99 = ((x421&x422)-(x423^x424));

	if (t99 != 18446744073709551522LLU) { NG(); } else { ; }
	
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

