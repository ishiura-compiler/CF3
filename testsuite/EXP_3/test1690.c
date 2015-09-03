#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x2 = 14U;
int16_t x7 = 47;
uint64_t x11 = UINT64_MAX;
int64_t t3 = INT64_MAX;
static int64_t x19 = INT64_MAX;
volatile int32_t t4 = -1;
volatile int32_t x22 = 1734651;
static volatile uint16_t x26 = 2U;
static int8_t x28 = INT8_MIN;
static volatile int32_t x29 = -1;
int64_t x33 = INT64_MIN;
volatile int8_t x36 = -1;
volatile int32_t x40 = INT32_MIN;
static uint64_t x42 = 132801LLU;
int64_t x43 = 38330927688264LL;
int16_t x46 = INT16_MAX;
static int32_t x54 = -3628;
static int32_t t13 = 823977;
uint32_t t14 = 949161U;
uint16_t x63 = 712U;
int32_t x69 = -2290;
uint16_t x76 = UINT16_MAX;
uint16_t x82 = 1981U;
int16_t x83 = -2;
int64_t t20 = 36114292LL;
uint64_t x93 = 1991LLU;
int32_t x103 = INT32_MIN;
int8_t x106 = INT8_MIN;
int32_t t26 = -286;
volatile int8_t x110 = 7;
int32_t x114 = INT32_MIN;
int16_t x118 = -1;
static uint64_t x120 = UINT64_MAX;
int8_t x125 = INT8_MIN;
int64_t x130 = -1LL;
static volatile uint64_t t33 = 90812LLU;
static volatile uint32_t t35 = 22530U;
int64_t x145 = -1LL;
static volatile int32_t t37 = -4322973;
uint64_t t39 = 23371047261086LLU;
int64_t x162 = -203181628626577205LL;
volatile int64_t t40 = -235233038747LL;
volatile uint8_t x166 = UINT8_MAX;
int64_t x171 = 75547893891LL;
static int8_t x172 = INT8_MIN;
static int64_t x179 = 3957684262734651LL;
volatile int64_t t44 = -3380LL;
static uint16_t x185 = UINT16_MAX;
static int8_t x186 = -1;
int32_t t46 = -111723645;
static int8_t x190 = -1;
volatile int32_t t47 = 18997;
int32_t x193 = -1;
uint64_t x197 = UINT64_MAX;
volatile uint16_t x201 = 1U;
uint16_t x208 = 21668U;
volatile uint8_t x217 = 0U;
int32_t x221 = INT32_MIN;
uint8_t x228 = 7U;
uint16_t x229 = UINT16_MAX;
static volatile int16_t x232 = -62;
static int64_t x249 = INT64_MAX;
uint64_t x251 = UINT64_MAX;
volatile uint32_t x252 = UINT32_MAX;
int32_t x253 = INT32_MIN;
int8_t x256 = -1;
int16_t x258 = -1;
static uint16_t x259 = 825U;
int32_t x261 = 788;
uint32_t x262 = 809U;
volatile uint8_t x271 = 31U;
int16_t x289 = INT16_MIN;
uint64_t x291 = UINT64_MAX;
int32_t t73 = 11;
int8_t x298 = INT8_MIN;
int32_t t74 = 0;
int16_t x306 = 1;
int8_t x308 = -1;
volatile uint16_t x311 = 1U;
static int16_t x314 = INT16_MIN;
static uint64_t x316 = UINT64_MAX;
uint16_t x324 = 0U;
int16_t x325 = -9;
int64_t x327 = -2961486709LL;
int64_t t82 = 61196LL;
volatile int8_t x338 = INT8_MAX;
static int8_t x340 = -1;
static int32_t t84 = -1300976;
int64_t x341 = 15819084267232LL;
int8_t x346 = -1;
uint8_t x349 = 22U;
int16_t x352 = INT16_MIN;
static uint32_t x360 = 56593209U;
volatile int8_t x375 = INT8_MIN;
volatile int8_t x376 = 9;
volatile int64_t t93 = 52320185187LL;
int8_t x379 = INT8_MAX;
int8_t x384 = -4;
static int8_t x387 = INT8_MIN;
int64_t x389 = -1LL;


void f0(void) {
	static uint64_t x1 = 11671407038706923LLU;
	int16_t x3 = INT16_MAX;
	uint16_t x4 = 0U;
	volatile uint64_t t0 = 13LLU;

	t0 = ((x1^x2)^(x3<=x4));

	if (t0 != 11671407038706917LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	volatile int64_t x6 = INT64_MAX;
	volatile int64_t x8 = -1LL;
	volatile int64_t t1 = 155160LL;

	t1 = ((x5^x6)^(x7<=x8));

	if (t1 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int32_t x10 = -1;
	int32_t x12 = -3039;
	int64_t t2 = 140156737167826994LL;

	t2 = ((x9^x10)^(x11<=x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	volatile int32_t x14 = -1;
	uint8_t x15 = UINT8_MAX;
	uint16_t x16 = 45U;

	t3 = ((x13^x14)^(x15<=x16));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	static int8_t x18 = -1;
	volatile int64_t x20 = INT64_MAX;

	t4 = ((x17^x18)^(x19<=x20));

	if (t4 != 2147483646) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 170477481U;
	int32_t x23 = 365795091;
	static int64_t x24 = -1LL;
	uint32_t t5 = 20U;

	t5 = ((x21^x22)^(x23<=x24));

	if (t5 != 171126866U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	int8_t x27 = 1;
	int64_t t6 = -113495LL;

	t6 = ((x25^x26)^(x27<=x28));

	if (t6 != -3LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x30 = 52U;
	volatile int8_t x31 = INT8_MIN;
	int64_t x32 = -1LL;
	volatile int32_t t7 = 1;

	t7 = ((x29^x30)^(x31<=x32));

	if (t7 != -54) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x34 = 24305191171LL;
	int8_t x35 = INT8_MIN;
	int64_t t8 = 13LL;

	t8 = ((x33^x34)^(x35<=x36));

	if (t8 != -9223372012549584638LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x37 = INT16_MAX;
	int32_t x38 = INT32_MAX;
	int8_t x39 = INT8_MAX;
	int32_t t9 = 418249;

	t9 = ((x37^x38)^(x39<=x40));

	if (t9 != 2147450880) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -40;
	int64_t x44 = 14364204039502LL;
	volatile uint64_t t10 = 259851409LLU;

	t10 = ((x41^x42)^(x43<=x44));

	if (t10 != 18446744073709418777LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 53962LLU;
	int64_t x47 = 2049235LL;
	int64_t x48 = INT64_MIN;
	static volatile uint64_t t11 = 1567825LLU;

	t11 = ((x45^x46)^(x47<=x48));

	if (t11 != 44341LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MIN;
	int16_t x50 = INT16_MIN;
	uint32_t x51 = 8161U;
	static int16_t x52 = -6617;
	volatile int32_t t12 = 62;

	t12 = ((x49^x50)^(x51<=x52));

	if (t12 != 2147450881) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 3224U;
	int64_t x55 = -1LL;
	static int32_t x56 = -207;

	t13 = ((x53^x54)^(x55<=x56));

	if (t13 != -692) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = -78112563;
	uint32_t x58 = UINT32_MAX;
	int8_t x59 = INT8_MIN;
	volatile int8_t x60 = 51;

	t14 = ((x57^x58)^(x59<=x60));

	if (t14 != 78112563U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	volatile uint64_t x62 = UINT64_MAX;
	static uint64_t x64 = 5395529377LLU;
	uint64_t t15 = 482002776988849LLU;

	t15 = ((x61^x62)^(x63<=x64));

	if (t15 != 2147483646LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 1758094690299780488LL;
	static volatile uint16_t x66 = 1479U;
	volatile int32_t x67 = -3;
	static int64_t x68 = 0LL;
	volatile int64_t t16 = -1421863356532731854LL;

	t16 = ((x65^x66)^(x67<=x68));

	if (t16 != 1758094690299779150LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = INT8_MAX;
	uint32_t x71 = 1060U;
	int32_t x72 = -4509;
	static volatile int32_t t17 = 3416;

	t17 = ((x69^x70)^(x71<=x72));

	if (t17 != -2192) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	uint64_t x74 = 0LLU;
	int16_t x75 = INT16_MIN;
	volatile uint64_t t18 = 23LLU;

	t18 = ((x73^x74)^(x75<=x76));

	if (t18 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 1U;
	int16_t x78 = INT16_MIN;
	int64_t x79 = -2427570088475431LL;
	int32_t x80 = INT32_MIN;
	static volatile uint32_t t19 = 1576U;

	t19 = ((x77^x78)^(x79<=x80));

	if (t19 != 4294934528U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 6547028LL;
	volatile uint32_t x84 = 987932U;

	t20 = ((x81^x82)^(x83<=x84));

	if (t20 != 6545897LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	volatile int64_t x86 = INT64_MIN;
	int64_t x87 = 1786510989LL;
	int64_t x88 = INT64_MIN;
	static volatile int64_t t21 = -91335610482977LL;

	t21 = ((x85^x86)^(x87<=x88));

	if (t21 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	int16_t x90 = -44;
	int64_t x91 = INT64_MAX;
	int32_t x92 = -1;
	int32_t t22 = 3959;

	t22 = ((x89^x90)^(x91<=x92));

	if (t22 != -213) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x94 = 96LLU;
	static int32_t x95 = INT32_MAX;
	static uint8_t x96 = 0U;
	static uint64_t t23 = 225003177588LLU;

	t23 = ((x93^x94)^(x95<=x96));

	if (t23 != 1959LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	static uint64_t x98 = UINT64_MAX;
	int16_t x99 = 1160;
	int16_t x100 = -206;
	volatile uint64_t t24 = 27982186771LLU;

	t24 = ((x97^x98)^(x99<=x100));

	if (t24 != 2147483647LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 8443U;
	uint8_t x102 = 0U;
	int32_t x104 = -1;
	static int32_t t25 = 3591;

	t25 = ((x101^x102)^(x103<=x104));

	if (t25 != 8442) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = -1;
	volatile uint8_t x107 = 107U;
	int32_t x108 = INT32_MIN;

	t26 = ((x105^x106)^(x107<=x108));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 211U;
	int64_t x111 = 5971238361353869LL;
	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = -10121998;

	t27 = ((x109^x110)^(x111<=x112));

	if (t27 != 212) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -5329;
	int32_t x115 = -81;
	int32_t x116 = 40;
	int32_t t28 = 0;

	t28 = ((x113^x114)^(x115<=x116));

	if (t28 != 2147478318) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = 2172698;
	volatile int32_t x119 = -288;
	int32_t t29 = 626829;

	t29 = ((x117^x118)^(x119<=x120));

	if (t29 != -2172700) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int16_t x122 = -1;
	int16_t x123 = -1;
	int32_t x124 = -14093822;
	int32_t t30 = 1777;

	t30 = ((x121^x122)^(x123<=x124));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = -1;
	static int32_t x127 = INT32_MIN;
	uint64_t x128 = UINT64_MAX;
	volatile int32_t t31 = -290;

	t31 = ((x125^x126)^(x127<=x128));

	if (t31 != 126) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	uint32_t x131 = UINT32_MAX;
	static uint64_t x132 = 333005972472209962LLU;
	int64_t t32 = -315040423059091817LL;

	t32 = ((x129^x130)^(x131<=x132));

	if (t32 != -127LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 7385754LLU;
	volatile int64_t x134 = 20724LL;
	int8_t x135 = -1;
	int8_t x136 = -3;

	t33 = ((x133^x134)^(x135<=x136));

	if (t33 != 7397998LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	volatile uint32_t x138 = UINT32_MAX;
	int64_t x139 = -1LL;
	int32_t x140 = INT32_MAX;
	uint32_t t34 = 129579829U;

	t34 = ((x137^x138)^(x139<=x140));

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1678;
	uint32_t x142 = UINT32_MAX;
	uint8_t x143 = UINT8_MAX;
	static uint32_t x144 = UINT32_MAX;

	t35 = ((x141^x142)^(x143<=x144));

	if (t35 != 1676U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = 7267488;
	uint8_t x147 = UINT8_MAX;
	static uint16_t x148 = 6657U;
	volatile int64_t t36 = 60592204279932LL;

	t36 = ((x145^x146)^(x147<=x148));

	if (t36 != -7267490LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = UINT16_MAX;
	int32_t x150 = INT32_MIN;
	int8_t x151 = INT8_MIN;
	volatile uint32_t x152 = 12844422U;

	t37 = ((x149^x150)^(x151<=x152));

	if (t37 != -2147418113) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	uint8_t x154 = 18U;
	static uint64_t x155 = 12751LLU;
	int32_t x156 = INT32_MAX;
	int32_t t38 = -31411;

	t38 = ((x153^x154)^(x155<=x156));

	if (t38 != 236) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 3167746LLU;
	uint64_t x158 = 705601303188966LLU;
	int8_t x159 = INT8_MAX;
	static uint16_t x160 = 398U;

	t39 = ((x157^x158)^(x159<=x160));

	if (t39 != 705601306346469LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 0;
	static uint32_t x163 = 1657U;
	int32_t x164 = INT32_MIN;

	t40 = ((x161^x162)^(x163<=x164));

	if (t40 != -203181628626577206LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 447U;
	static int16_t x167 = -1;
	static int8_t x168 = -2;
	int32_t t41 = 43328;

	t41 = ((x165^x166)^(x167<=x168));

	if (t41 != 320) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	volatile int8_t x170 = INT8_MAX;
	volatile int32_t t42 = -919599289;

	t42 = ((x169^x170)^(x171<=x172));

	if (t42 != 128) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	volatile uint8_t x174 = 0U;
	uint64_t x175 = 65003304146052849LLU;
	uint32_t x176 = 3627085U;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = ((x173^x174)^(x175<=x176));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int32_t x178 = INT32_MAX;
	uint64_t x180 = 336470LLU;

	t44 = ((x177^x178)^(x179<=x180));

	if (t44 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 4936;
	volatile int64_t x182 = -1LL;
	static uint64_t x183 = 1LLU;
	int32_t x184 = 1191641;
	int64_t t45 = 10LL;

	t45 = ((x181^x182)^(x183<=x184));

	if (t45 != -4938LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x187 = INT16_MAX;
	int8_t x188 = 7;

	t46 = ((x185^x186)^(x187<=x188));

	if (t46 != -65536) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 13U;
	int64_t x191 = INT64_MIN;
	int8_t x192 = INT8_MIN;

	t47 = ((x189^x190)^(x191<=x192));

	if (t47 != -13) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = -240;
	static int32_t x195 = INT32_MIN;
	uint32_t x196 = UINT32_MAX;
	volatile int32_t t48 = -6147197;

	t48 = ((x193^x194)^(x195<=x196));

	if (t48 != 238) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x198 = -4;
	static uint16_t x199 = 18828U;
	volatile int64_t x200 = INT64_MIN;
	volatile uint64_t t49 = 8495LLU;

	t49 = ((x197^x198)^(x199<=x200));

	if (t49 != 3LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = -1;
	int32_t x203 = INT32_MIN;
	int16_t x204 = INT16_MIN;
	int32_t t50 = -272176433;

	t50 = ((x201^x202)^(x203<=x204));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MIN;
	static int16_t x206 = -1;
	volatile int64_t x207 = INT64_MIN;
	int32_t t51 = -128510;

	t51 = ((x205^x206)^(x207<=x208));

	if (t51 != 2147483646) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x209 = INT64_MIN;
	volatile int8_t x210 = -1;
	int16_t x211 = -61;
	int64_t x212 = -7934326LL;
	int64_t t52 = INT64_MAX;

	t52 = ((x209^x210)^(x211<=x212));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = UINT16_MAX;
	static volatile int16_t x214 = 0;
	int32_t x215 = -1;
	static uint64_t x216 = 253247353563LLU;
	volatile int32_t t53 = -14003188;

	t53 = ((x213^x214)^(x215<=x216));

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MAX;
	static int8_t x219 = INT8_MIN;
	uint8_t x220 = 1U;
	volatile int32_t t54 = -59124;

	t54 = ((x217^x218)^(x219<=x220));

	if (t54 != 32766) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x222 = UINT16_MAX;
	uint64_t x223 = 2LLU;
	int8_t x224 = 8;
	volatile int32_t t55 = -205;

	t55 = ((x221^x222)^(x223<=x224));

	if (t55 != -2147418114) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = INT16_MAX;
	uint16_t x226 = 7U;
	int64_t x227 = INT64_MIN;
	static volatile int32_t t56 = -85;

	t56 = ((x225^x226)^(x227<=x228));

	if (t56 != 32761) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x230 = INT32_MAX;
	static volatile uint32_t x231 = UINT32_MAX;
	int32_t t57 = 14826437;

	t57 = ((x229^x230)^(x231<=x232));

	if (t57 != 2147418112) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = -1;
	int64_t x234 = INT64_MIN;
	int64_t x235 = INT64_MIN;
	uint64_t x236 = 137223775274920976LLU;
	int64_t t58 = INT64_MAX;

	t58 = ((x233^x234)^(x235<=x236));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = -1;
	static int16_t x238 = INT16_MIN;
	uint16_t x239 = 82U;
	int16_t x240 = -1;
	volatile int32_t t59 = -1249;

	t59 = ((x237^x238)^(x239<=x240));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	int64_t x242 = -4037507443548567282LL;
	uint8_t x243 = 25U;
	int64_t x244 = 127710LL;
	static int64_t t60 = -252190LL;

	t60 = ((x241^x242)^(x243<=x244));

	if (t60 != 4037507443548567280LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MIN;
	uint64_t x246 = 8LLU;
	static int8_t x247 = INT8_MIN;
	static uint32_t x248 = 35117191U;
	uint64_t t61 = 5736726252219326LLU;

	t61 = ((x245^x246)^(x247<=x248));

	if (t61 != 18446744071562067976LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = INT16_MIN;
	volatile int64_t t62 = -79497149LL;

	t62 = ((x249^x250)^(x251<=x252));

	if (t62 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x254 = -494712057848499LL;
	static uint8_t x255 = 51U;
	int64_t t63 = 326212LL;

	t63 = ((x253^x254)^(x255<=x256));

	if (t63 != 494713115680077LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 1;
	static int64_t x260 = INT64_MAX;
	volatile int32_t t64 = -248123;

	t64 = ((x257^x258)^(x259<=x260));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x263 = 1121585772U;
	int16_t x264 = -1;
	uint32_t t65 = 675297885U;

	t65 = ((x261^x262)^(x263<=x264));

	if (t65 != 60U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x265 = 1463740627073489LLU;
	int64_t x266 = 47295234421507912LL;
	int32_t x267 = 218;
	int32_t x268 = INT32_MIN;
	uint64_t t66 = 8113LLU;

	t66 = ((x265^x266)^(x267<=x268));

	if (t66 != 48753996778569369LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	uint32_t x270 = UINT32_MAX;
	int16_t x272 = INT16_MAX;
	volatile uint32_t t67 = 375836U;

	t67 = ((x269^x270)^(x271<=x272));

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	uint64_t x274 = 370662330LLU;
	static int32_t x275 = INT32_MAX;
	uint8_t x276 = 8U;
	uint64_t t68 = 3998241LLU;

	t68 = ((x273^x274)^(x275<=x276));

	if (t68 != 370662213LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = 0;
	uint32_t x278 = UINT32_MAX;
	static volatile int16_t x279 = INT16_MIN;
	uint64_t x280 = UINT64_MAX;
	volatile uint32_t t69 = 61502U;

	t69 = ((x277^x278)^(x279<=x280));

	if (t69 != 4294967294U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int8_t x282 = INT8_MIN;
	int8_t x283 = 1;
	int64_t x284 = INT64_MIN;
	volatile int32_t t70 = -1477765;

	t70 = ((x281^x282)^(x283<=x284));

	if (t70 != 32640) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = -4822203;
	int32_t x286 = INT32_MIN;
	int64_t x287 = -536112668537361LL;
	static int16_t x288 = INT16_MAX;
	int32_t t71 = -33853712;

	t71 = ((x285^x286)^(x287<=x288));

	if (t71 != 2142661444) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x290 = UINT64_MAX;
	int16_t x292 = -1;
	volatile uint64_t t72 = 2152803673635916LLU;

	t72 = ((x289^x290)^(x291<=x292));

	if (t72 != 32766LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	uint16_t x294 = UINT16_MAX;
	volatile int16_t x295 = INT16_MIN;
	volatile uint64_t x296 = 11148509494LLU;

	t73 = ((x293^x294)^(x295<=x296));

	if (t73 != -65536) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	volatile int16_t x299 = INT16_MAX;
	volatile uint32_t x300 = 3108U;

	t74 = ((x297^x298)^(x299<=x300));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = INT32_MAX;
	int64_t x302 = INT64_MIN;
	int8_t x303 = INT8_MAX;
	uint32_t x304 = UINT32_MAX;
	int64_t t75 = 87LL;

	t75 = ((x301^x302)^(x303<=x304));

	if (t75 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	int32_t x307 = -1;
	volatile int32_t t76 = INT32_MIN;

	t76 = ((x305^x306)^(x307<=x308));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int64_t x310 = -1LL;
	static int8_t x312 = -1;
	int64_t t77 = -23317798LL;

	t77 = ((x309^x310)^(x311<=x312));

	if (t77 != 2147483647LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 212041U;
	static int16_t x315 = INT16_MAX;
	static uint32_t t78 = 14U;

	t78 = ((x313^x314)^(x315<=x316));

	if (t78 != 4294753352U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MAX;
	static int64_t x318 = 7614651390LL;
	int64_t x319 = INT64_MIN;
	int64_t x320 = -6521647957433LL;
	volatile int64_t t79 = -101014305496LL;

	t79 = ((x317^x318)^(x319<=x320));

	if (t79 != 7417734144LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	int64_t x322 = -1LL;
	int8_t x323 = -1;
	volatile int64_t t80 = 162880LL;

	t80 = ((x321^x322)^(x323<=x324));

	if (t80 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x326 = 1U;
	static int64_t x328 = INT64_MIN;
	int32_t t81 = -29764;

	t81 = ((x325^x326)^(x327<=x328));

	if (t81 != -10) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	volatile int64_t x330 = 239321361363973658LL;
	uint8_t x331 = 4U;
	int32_t x332 = -227339075;

	t82 = ((x329^x330)^(x331<=x332));

	if (t82 != -239321361363973659LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 436U;
	volatile int64_t x334 = 21929822LL;
	int32_t x335 = -1;
	int8_t x336 = INT8_MIN;
	volatile int64_t t83 = -801812700LL;

	t83 = ((x333^x334)^(x335<=x336));

	if (t83 != 21929706LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x337 = 2U;
	int8_t x339 = 3;

	t84 = ((x337^x338)^(x339<=x340));

	if (t84 != 125) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = 251114;
	int32_t x343 = -252735;
	static volatile uint16_t x344 = 7U;
	int64_t t85 = -283353203972974LL;

	t85 = ((x341^x342)^(x343<=x344));

	if (t85 != 15819084278283LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = INT32_MIN;
	int64_t x347 = INT64_MAX;
	uint16_t x348 = UINT16_MAX;
	static int32_t t86 = INT32_MAX;

	t86 = ((x345^x346)^(x347<=x348));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x350 = 172;
	int32_t x351 = INT32_MIN;
	volatile int32_t t87 = -3141;

	t87 = ((x349^x350)^(x351<=x352));

	if (t87 != 187) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 119U;
	int64_t x354 = -1LL;
	int16_t x355 = INT16_MAX;
	int8_t x356 = -1;
	int64_t t88 = -44355109LL;

	t88 = ((x353^x354)^(x355<=x356));

	if (t88 != -120LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = UINT8_MAX;
	int64_t x358 = INT64_MIN;
	int64_t x359 = INT64_MAX;
	static int64_t t89 = -4439171036759413301LL;

	t89 = ((x357^x358)^(x359<=x360));

	if (t89 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = 36;
	volatile int64_t x362 = -4916922LL;
	uint16_t x363 = 175U;
	static volatile uint8_t x364 = UINT8_MAX;
	int64_t t90 = 1914LL;

	t90 = ((x361^x362)^(x363<=x364));

	if (t90 != -4916893LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MAX;
	int8_t x366 = INT8_MAX;
	int8_t x367 = INT8_MIN;
	static volatile int16_t x368 = -1;
	volatile int32_t t91 = 5;

	t91 = ((x365^x366)^(x367<=x368));

	if (t91 != 2147483521) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	int32_t x370 = INT32_MIN;
	int8_t x371 = -2;
	int32_t x372 = 4163142;
	int32_t t92 = -859161;

	t92 = ((x369^x370)^(x371<=x372));

	if (t92 != 2147483646) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = UINT32_MAX;
	volatile int64_t x374 = INT64_MAX;

	t93 = ((x373^x374)^(x375<=x376));

	if (t93 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = 239;
	int64_t x378 = INT64_MAX;
	uint32_t x380 = 15173U;
	int64_t t94 = -67414052429LL;

	t94 = ((x377^x378)^(x379<=x380));

	if (t94 != 9223372036854775569LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1237142398LL;
	static int8_t x382 = -1;
	static int64_t x383 = INT64_MIN;
	volatile int64_t t95 = 5LL;

	t95 = ((x381^x382)^(x383<=x384));

	if (t95 != 1237142396LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	int64_t x386 = INT64_MIN;
	volatile int64_t x388 = 400LL;
	volatile int64_t t96 = -651102014548LL;

	t96 = ((x385^x386)^(x387<=x388));

	if (t96 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = 2;
	uint64_t x391 = 2904866060LLU;
	uint8_t x392 = UINT8_MAX;
	int64_t t97 = -888058024492LL;

	t97 = ((x389^x390)^(x391<=x392));

	if (t97 != -3LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = -1;
	uint32_t x394 = 6493U;
	uint8_t x395 = 0U;
	volatile int8_t x396 = -61;
	volatile uint32_t t98 = 12U;

	t98 = ((x393^x394)^(x395<=x396));

	if (t98 != 4294960802U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	int8_t x398 = 27;
	int8_t x399 = INT8_MIN;
	static int32_t x400 = INT32_MAX;
	volatile int64_t t99 = -20LL;

	t99 = ((x397^x398)^(x399<=x400));

	if (t99 != -27LL) { NG(); } else { ; }
	
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

