#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x4 = 20;
uint64_t x10 = UINT64_MAX;
int8_t x11 = 6;
uint16_t x13 = UINT16_MAX;
uint32_t x19 = 8480635U;
volatile uint32_t t4 = 1465U;
int8_t x24 = 1;
uint64_t x28 = 206LLU;
int64_t x32 = -1LL;
int8_t x55 = INT8_MIN;
uint8_t x56 = UINT8_MAX;
int32_t t13 = 3323693;
uint16_t x57 = 817U;
volatile int32_t x63 = INT32_MIN;
int8_t x64 = INT8_MAX;
int16_t x67 = INT16_MIN;
int32_t t16 = -7827;
int8_t x74 = -1;
uint8_t x78 = 3U;
uint8_t x82 = 3U;
int32_t t22 = -47;
int32_t x98 = INT32_MAX;
volatile uint8_t x110 = 24U;
static uint64_t x113 = 3648508663718816951LLU;
volatile uint64_t t28 = 23834776996109464LLU;
static volatile int32_t x117 = INT32_MIN;
int8_t x118 = -8;
uint16_t x126 = 5U;
int8_t x128 = INT8_MAX;
static volatile int32_t t31 = 230;
volatile uint8_t x131 = 0U;
int8_t x137 = -18;
int16_t x138 = INT16_MIN;
int32_t x139 = INT32_MIN;
volatile int32_t t34 = -316;
static volatile uint64_t t35 = 1531LLU;
static int8_t x145 = INT8_MIN;
uint16_t x148 = 4131U;
volatile int64_t t36 = 234574723118160591LL;
int32_t x154 = -483905;
int16_t x158 = -1956;
volatile int64_t x162 = INT64_MIN;
static int32_t x170 = INT32_MIN;
static volatile int8_t x176 = 0;
int64_t x177 = INT64_MIN;
int64_t x179 = -2253569908LL;
static int8_t x182 = INT8_MIN;
int64_t t45 = 0LL;
static int64_t x185 = INT64_MIN;
uint8_t x193 = 56U;
static int64_t x195 = -465940LL;
volatile int32_t x199 = -244847;
int64_t x200 = INT64_MIN;
int64_t t49 = 219362369603LL;
volatile int16_t x201 = -1;
int32_t x203 = -567820534;
int16_t x217 = 326;
uint16_t x219 = UINT16_MAX;
volatile uint64_t x223 = 17643LLU;
uint64_t x228 = 624075997LLU;
uint64_t t55 = 631LLU;
int16_t x230 = INT16_MIN;
static int8_t x232 = INT8_MAX;
static int8_t x237 = INT8_MIN;
int16_t x239 = 41;
volatile int64_t t59 = -76007935158LL;
int32_t x245 = 27422380;
volatile int32_t t60 = 3291;
uint32_t x251 = UINT32_MAX;
int64_t t61 = 811LL;
volatile int16_t x260 = INT16_MAX;
uint64_t x263 = UINT64_MAX;
volatile int8_t x270 = 21;
uint8_t x275 = 70U;
volatile int64_t t68 = -450LL;
int32_t x283 = -1;
volatile uint64_t t71 = 82832237290LLU;
int8_t x300 = -4;
volatile int32_t x306 = -1;
int16_t x311 = 4129;
volatile uint64_t x318 = 674565610LLU;
static int32_t x324 = INT32_MIN;
volatile int64_t t79 = -47823324895LL;
uint64_t x327 = UINT64_MAX;
int16_t x328 = INT16_MAX;
int16_t x330 = INT16_MAX;
uint16_t x336 = UINT16_MAX;
int64_t t82 = 88LL;
uint8_t x341 = 3U;
static int16_t x342 = INT16_MAX;
uint32_t x343 = UINT32_MAX;
int64_t t83 = 47533331618066395LL;
volatile int16_t x352 = INT16_MIN;
volatile uint64_t x357 = UINT64_MAX;
uint64_t t87 = 9881LLU;
static int16_t x361 = INT16_MIN;
volatile int64_t t88 = -426118469441LL;
int64_t x369 = 7LL;
volatile int32_t x375 = -1;
volatile int64_t x378 = INT64_MIN;
uint8_t x380 = UINT8_MAX;
int32_t x381 = INT32_MAX;
int32_t x386 = INT32_MAX;
uint32_t t94 = 1576650U;
int8_t x389 = INT8_MIN;
volatile uint64_t t96 = 25543LLU;
int32_t x404 = -1;
volatile int64_t t98 = 14021506LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint8_t x2 = 0U;
	int8_t x3 = 1;
	volatile int32_t t0 = 1;

	t0 = ((x1^x2)%(x3^x4));

	if (t0 != -8) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 0U;
	uint32_t x6 = UINT32_MAX;
	uint16_t x7 = UINT16_MAX;
	uint64_t x8 = 8920831LLU;
	static uint64_t t1 = 30898LLU;

	t1 = ((x5^x6)%(x7^x8));

	if (t1 != 7070207LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 8;
	volatile int32_t x12 = 126474196;
	volatile uint64_t t2 = 153863919116LLU;

	t2 = ((x9^x10)%(x11^x12));

	if (t2 != 83911219LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MAX;
	int64_t x15 = 67383719111LL;
	volatile uint16_t x16 = 3U;
	int64_t t3 = 60567583664015LL;

	t3 = ((x13^x14)%(x15^x16));

	if (t3 != 65408LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MAX;
	static int8_t x18 = INT8_MAX;
	volatile int8_t x20 = 1;

	t4 = ((x17^x18)%(x19^x20));

	if (t4 != 32640U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	static int8_t x22 = INT8_MAX;
	int32_t x23 = INT32_MAX;
	volatile int32_t t5 = -2170;

	t5 = ((x21^x22)%(x23^x24));

	if (t5 != -2147483521) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	volatile uint32_t x26 = 33093064U;
	static uint16_t x27 = 7094U;
	static uint64_t t6 = 7868208330992925487LLU;

	t6 = ((x25^x26)%(x27^x28));

	if (t6 != 455LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	static int16_t x30 = -1;
	int8_t x31 = INT8_MIN;
	static int64_t t7 = -4947169LL;

	t7 = ((x29^x30)%(x31^x32));

	if (t7 != 7LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -3442041633435208019LL;
	volatile int32_t x34 = 48;
	int64_t x35 = INT64_MAX;
	int16_t x36 = -5;
	volatile int64_t t8 = -678LL;

	t8 = ((x33^x34)%(x35^x36));

	if (t8 != -3442041633435208035LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1601;
	static int32_t x38 = -1;
	int16_t x39 = INT16_MAX;
	int8_t x40 = 1;
	volatile int32_t t9 = 442137;

	t9 = ((x37^x38)%(x39^x40));

	if (t9 != 1600) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	int16_t x42 = -1;
	int64_t x43 = INT64_MIN;
	static int32_t x44 = 23;
	volatile int64_t t10 = 25572191LL;

	t10 = ((x41^x42)%(x43^x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = UINT16_MAX;
	static int64_t x46 = -4715411157513LL;
	volatile int64_t x47 = INT64_MIN;
	int64_t x48 = -804070803228437979LL;
	volatile int64_t t11 = 2574968166LL;

	t11 = ((x45^x46)%(x47^x48));

	if (t11 != -4715411197432LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = UINT8_MAX;
	static volatile uint8_t x50 = 1U;
	uint16_t x51 = 2649U;
	static int32_t x52 = INT32_MIN;
	int32_t t12 = -360828088;

	t12 = ((x49^x50)%(x51^x52));

	if (t12 != 254) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	volatile uint16_t x54 = 64U;

	t13 = ((x53^x54)%(x55^x56));

	if (t13 != 62) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = 139299U;
	volatile int32_t x59 = 377213949;
	uint32_t x60 = 2058323686U;
	static uint32_t t14 = 6U;

	t14 = ((x57^x58)%(x59^x60));

	if (t14 != 140050U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = 0U;
	static volatile int8_t x62 = -1;
	volatile uint32_t t15 = 25591096U;

	t15 = ((x61^x62)%(x63^x64));

	if (t15 != 2147483520U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int8_t x66 = 19;
	int32_t x68 = -1;

	t16 = ((x65^x66)%(x67^x68));

	if (t16 != -32749) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	int32_t x70 = -1;
	int32_t x71 = -207;
	int32_t x72 = INT32_MIN;
	volatile int32_t t17 = 5;

	t17 = ((x69^x70)%(x71^x72));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = 3;
	static volatile uint16_t x75 = 223U;
	int64_t x76 = -500866950183095906LL;
	volatile int64_t t18 = 14790524928549LL;

	t18 = ((x73^x74)%(x75^x76));

	if (t18 != -4LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 210546568LLU;
	uint16_t x79 = 44U;
	int16_t x80 = -25;
	static volatile uint64_t t19 = 198626166452430167LLU;

	t19 = ((x77^x78)%(x79^x80));

	if (t19 != 210546571LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -473310755;
	int8_t x83 = INT8_MIN;
	int8_t x84 = -56;
	int32_t t20 = 12;

	t20 = ((x81^x82)%(x83^x84));

	if (t20 != -34) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = 1;
	int8_t x86 = 2;
	int16_t x87 = INT16_MAX;
	volatile int8_t x88 = INT8_MIN;
	volatile int32_t t21 = 625;

	t21 = ((x85^x86)%(x87^x88));

	if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	static uint16_t x90 = 0U;
	volatile int32_t x91 = 3544;
	int32_t x92 = INT32_MIN;

	t22 = ((x89^x90)%(x91^x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x93 = 848721036228547LLU;
	static int8_t x94 = INT8_MIN;
	volatile int32_t x95 = -918;
	int64_t x96 = -1700719878713113LL;
	static volatile uint64_t t23 = 382351857603661LLU;

	t23 = ((x93^x94)%(x95^x96));

	if (t23 != 1588268036683530LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -19;
	static volatile int64_t x99 = 128622388954731LL;
	uint32_t x100 = 31U;
	volatile int64_t t24 = -407801398748LL;

	t24 = ((x97^x98)%(x99^x100));

	if (t24 != -2147483630LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x101 = -1;
	int64_t x102 = INT64_MAX;
	uint8_t x103 = 23U;
	static uint16_t x104 = 1946U;
	static int64_t t25 = -26738542916LL;

	t25 = ((x101^x102)%(x103^x104));

	if (t25 != -272LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = 1;
	static int8_t x106 = 11;
	int64_t x107 = -71944279294498730LL;
	volatile int32_t x108 = 12637;
	volatile int64_t t26 = -2273893846192159LL;

	t26 = ((x105^x106)%(x107^x108));

	if (t26 != 10LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = INT64_MIN;
	static int64_t x111 = 536922LL;
	int8_t x112 = INT8_MAX;
	static int64_t t27 = -417LL;

	t27 = ((x109^x110)%(x111^x112));

	if (t27 != -483211LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = 789;
	uint64_t x115 = 137824LLU;
	uint16_t x116 = 3188U;

	t28 = ((x113^x114)%(x115^x116));

	if (t28 != 127066LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x119 = UINT16_MAX;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = -1468252;

	t29 = ((x117^x118)%(x119^x120));

	if (t29 != 32760) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MIN;
	int64_t x123 = -1LL;
	uint8_t x124 = 3U;
	static volatile int64_t t30 = -11727138752389999LL;

	t30 = ((x121^x122)%(x123^x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	static uint8_t x127 = 0U;

	t31 = ((x125^x126)%(x127^x128));

	if (t31 != -123) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = UINT8_MAX;
	static int32_t x130 = -9;
	int8_t x132 = -1;
	int32_t t32 = 54;

	t32 = ((x129^x130)%(x131^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 116LLU;
	int64_t x134 = INT64_MIN;
	int64_t x135 = -18376264LL;
	uint8_t x136 = 6U;
	static volatile uint64_t t33 = 213612609250658039LLU;

	t33 = ((x133^x134)%(x135^x136));

	if (t33 != 9223372036854775924LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x140 = 25U;

	t34 = ((x137^x138)%(x139^x140));

	if (t34 != 32750) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = -1;
	static uint32_t x142 = 37542U;
	uint64_t x143 = UINT64_MAX;
	uint32_t x144 = UINT32_MAX;

	t35 = ((x141^x142)%(x143^x144));

	if (t35 != 4294929753LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x146 = 121U;
	int64_t x147 = INT64_MIN;

	t36 = ((x145^x146)%(x147^x148));

	if (t36 != -7LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x149 = 25U;
	uint64_t x150 = 887417LLU;
	static int8_t x151 = INT8_MIN;
	uint64_t x152 = 3625891644183LLU;
	volatile uint64_t t37 = 1LLU;

	t37 = ((x149^x150)%(x151^x152));

	if (t37 != 887392LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 390633164LLU;
	int16_t x155 = -1;
	int8_t x156 = -4;
	uint64_t t38 = 1073595876LLU;

	t38 = ((x153^x154)%(x155^x156));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = -10;
	int16_t x159 = INT16_MAX;
	int8_t x160 = INT8_MAX;
	static int32_t t39 = -15;

	t39 = ((x157^x158)%(x159^x160));

	if (t39 != 1962) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	static volatile uint64_t x163 = UINT64_MAX;
	uint16_t x164 = 1559U;
	static uint64_t t40 = 6264859898116785LLU;

	t40 = ((x161^x162)%(x163^x164));

	if (t40 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = -4388245311768LL;
	uint32_t x166 = 450683U;
	int32_t x167 = -64468624;
	static volatile int32_t x168 = -598141;
	static volatile int64_t t41 = 336114899318LL;

	t41 = ((x165^x166)%(x167^x168));

	if (t41 != -26238204LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = UINT8_MAX;
	uint8_t x171 = UINT8_MAX;
	uint64_t x172 = 232574582LLU;
	volatile uint64_t t42 = 53695148LLU;

	t42 = ((x169^x170)%(x171^x172));

	if (t42 != 161547200LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	uint64_t x174 = UINT64_MAX;
	uint16_t x175 = 203U;
	uint64_t t43 = 83151578535LLU;

	t43 = ((x173^x174)%(x175^x176));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = INT64_MAX;
	uint8_t x180 = 126U;
	int64_t t44 = 493535542216701141LL;

	t44 = ((x177^x178)%(x179^x180));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int16_t x183 = -208;
	volatile int64_t x184 = INT64_MIN;

	t45 = ((x181^x182)%(x183^x184));

	if (t45 != 32640LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x186 = INT8_MIN;
	int8_t x187 = -1;
	volatile uint64_t x188 = 14006321170LLU;
	uint64_t t46 = 48LLU;

	t46 = ((x185^x186)%(x187^x188));

	if (t46 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 22LLU;
	uint16_t x190 = UINT16_MAX;
	volatile int16_t x191 = 102;
	static int8_t x192 = -11;
	uint64_t t47 = 28061LLU;

	t47 = ((x189^x190)%(x191^x192));

	if (t47 != 65513LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x194 = 35025706LL;
	static uint32_t x196 = UINT32_MAX;
	static int64_t t48 = -8400131951616537LL;

	t48 = ((x193^x194)%(x195^x196));

	if (t48 != 35025682LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x197 = 3U;
	int16_t x198 = INT16_MIN;

	t49 = ((x197^x198)%(x199^x200));

	if (t49 != -32765LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x202 = INT16_MIN;
	int16_t x204 = INT16_MAX;
	volatile int32_t t50 = 31296387;

	t50 = ((x201^x202)%(x203^x204));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MIN;
	volatile uint16_t x206 = 60U;
	volatile int64_t x207 = INT64_MIN;
	int32_t x208 = 10685382;
	volatile int64_t t51 = -225322LL;

	t51 = ((x205^x206)%(x207^x208));

	if (t51 != -2147483588LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 1526U;
	int64_t x210 = INT64_MIN;
	static int16_t x211 = INT16_MIN;
	int32_t x212 = INT32_MIN;
	volatile int64_t t52 = -11844610LL;

	t52 = ((x209^x210)%(x211^x212));

	if (t52 != -31242LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x218 = -509;
	int32_t x220 = 0;
	int32_t t53 = -5772958;

	t53 = ((x217^x218)%(x219^x220));

	if (t53 != -187) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MIN;
	volatile uint64_t x222 = 237840587277794LLU;
	static int16_t x224 = -56;
	static uint64_t t54 = 1LLU;

	t54 = ((x221^x222)%(x223^x224));

	if (t54 != 18446506233122276834LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x225 = INT16_MIN;
	static volatile uint16_t x226 = 183U;
	int64_t x227 = -1LL;

	t55 = ((x225^x226)%(x227^x228));

	if (t55 != 624043413LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = INT8_MAX;
	static uint32_t x231 = UINT32_MAX;
	uint32_t t56 = 117886U;

	t56 = ((x229^x230)%(x231^x232));

	if (t56 != 4294934655U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x233 = 478U;
	static uint64_t x234 = 136440553567950254LLU;
	static int8_t x235 = -1;
	int64_t x236 = 1LL;
	static uint64_t t57 = 6283238056LLU;

	t57 = ((x233^x234)%(x235^x236));

	if (t57 != 136440553567949936LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x238 = 8890;
	int8_t x240 = INT8_MIN;
	volatile int32_t t58 = 1211587;

	t58 = ((x237^x238)%(x239^x240));

	if (t58 != -28) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x241 = UINT8_MAX;
	int64_t x242 = INT64_MAX;
	uint16_t x243 = UINT16_MAX;
	int8_t x244 = -5;

	t59 = ((x241^x242)%(x243^x244));

	if (t59 != 65404LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x246 = 0;
	uint8_t x247 = 1U;
	volatile int32_t x248 = INT32_MIN;

	t60 = ((x245^x246)%(x247^x248));

	if (t60 != 27422380) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = INT64_MIN;
	uint32_t x250 = UINT32_MAX;
	static volatile int32_t x252 = 787;

	t61 = ((x249^x250)%(x251^x252));

	if (t61 != -309685LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x253 = 0;
	int64_t x254 = INT64_MIN;
	int32_t x255 = INT32_MIN;
	uint32_t x256 = 486U;
	int64_t t62 = 6143988LL;

	t62 = ((x253^x254)%(x255^x256));

	if (t62 != -472392LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x257 = 158U;
	uint64_t x258 = UINT64_MAX;
	int16_t x259 = 292;
	volatile uint64_t t63 = 445895457958552LLU;

	t63 = ((x257^x258)%(x259^x260));

	if (t63 != 28282LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = -1;
	int32_t x262 = 81361;
	int64_t x264 = 54086LL;
	volatile uint64_t t64 = 3201LLU;

	t64 = ((x261^x262)%(x263^x264));

	if (t64 != 18446744073709470254LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = INT16_MAX;
	int64_t x266 = INT64_MIN;
	int8_t x267 = -1;
	int32_t x268 = 26467;
	int64_t t65 = 252606898505041806LL;

	t65 = ((x265^x266)%(x267^x268));

	if (t65 != -469LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x269 = INT8_MAX;
	volatile int8_t x271 = 13;
	uint64_t x272 = 10LLU;
	volatile uint64_t t66 = 8LLU;

	t66 = ((x269^x270)%(x271^x272));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x273 = UINT32_MAX;
	uint16_t x274 = 13394U;
	int32_t x276 = -1;
	uint32_t t67 = 1639908294U;

	t67 = ((x273^x274)%(x275^x276));

	if (t67 != 4294953901U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = INT64_MAX;
	int16_t x278 = 1844;
	static int64_t x279 = 60LL;
	uint8_t x280 = 31U;

	t68 = ((x277^x278)%(x279^x280));

	if (t68 != 18LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = INT32_MIN;
	static uint64_t x282 = 19698315LLU;
	int32_t x284 = INT32_MIN;
	uint64_t t69 = 6LLU;

	t69 = ((x281^x282)%(x283^x284));

	if (t69 != 19698318LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x285 = UINT64_MAX;
	static int32_t x286 = INT32_MAX;
	uint16_t x287 = 2819U;
	int16_t x288 = -1;
	uint64_t t70 = 46184930368LLU;

	t70 = ((x285^x286)%(x287^x288));

	if (t70 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x289 = -63;
	static uint64_t x290 = 156761314407483LLU;
	int64_t x291 = 923165234LL;
	int16_t x292 = INT16_MIN;

	t71 = ((x289^x290)%(x291^x292));

	if (t71 != 18446587312395144186LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x293 = INT16_MIN;
	int64_t x294 = INT64_MIN;
	static int8_t x295 = INT8_MIN;
	volatile int8_t x296 = 6;
	static volatile int64_t t72 = 222LL;

	t72 = ((x293^x294)%(x295^x296));

	if (t72 != 58LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x297 = 1435788LLU;
	static volatile int8_t x298 = -1;
	int32_t x299 = 106792;
	volatile uint64_t t73 = 3415LLU;

	t73 = ((x297^x298)%(x299^x300));

	if (t73 != 18446744073708115827LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = 43846;
	int32_t x302 = -1;
	int16_t x303 = -1;
	volatile uint32_t x304 = 6084235U;
	uint32_t t74 = 27914U;

	t74 = ((x301^x302)%(x303^x304));

	if (t74 != 6040389U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x305 = 1U;
	volatile uint8_t x307 = UINT8_MAX;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t75 = 436489818787879LLU;

	t75 = ((x305^x306)%(x307^x308));

	if (t75 != 254LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = INT32_MIN;
	static volatile uint8_t x310 = UINT8_MAX;
	static int64_t x312 = -1LL;
	int64_t t76 = -4762650275427138LL;

	t76 = ((x309^x310)%(x311^x312));

	if (t76 != -3163LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x313 = -14024457211540LL;
	int64_t x314 = -7381LL;
	static volatile uint16_t x315 = 15652U;
	int8_t x316 = INT8_MAX;
	volatile int64_t t77 = -1074541LL;

	t77 = ((x313^x314)%(x315^x316));

	if (t77 != 5477LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = -1;
	volatile int64_t x319 = -1LL;
	uint16_t x320 = UINT16_MAX;
	uint64_t t78 = 1072946006LLU;

	t78 = ((x317^x318)%(x319^x320));

	if (t78 != 18446744073034986005LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = INT64_MAX;
	volatile int16_t x322 = INT16_MIN;
	volatile int64_t x323 = -247435916084514200LL;

	t79 = ((x321^x322)%(x323^x324));

	if (t79 != -68243095656167161LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x325 = INT32_MAX;
	uint8_t x326 = UINT8_MAX;
	volatile uint64_t t80 = 2LLU;

	t80 = ((x325^x326)%(x327^x328));

	if (t80 != 2147483392LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x329 = UINT16_MAX;
	uint16_t x331 = 786U;
	uint8_t x332 = 5U;
	volatile int32_t t81 = -426261;

	t81 = ((x329^x330)%(x331^x332));

	if (t81 != 337) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = -1;
	int64_t x334 = INT64_MAX;
	uint32_t x335 = 395011U;

	t82 = ((x333^x334)%(x335^x336));

	if (t82 != -336900LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x344 = 1026876553LL;

	t83 = ((x341^x342)%(x343^x344));

	if (t83 != 32764LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = INT16_MIN;
	int8_t x346 = INT8_MIN;
	static int16_t x347 = INT16_MIN;
	int8_t x348 = INT8_MAX;
	volatile int32_t t84 = -12925;

	t84 = ((x345^x346)%(x347^x348));

	if (t84 != 32640) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = 0;
	int64_t x350 = 6LL;
	int8_t x351 = 0;
	int64_t t85 = -62471382228LL;

	t85 = ((x349^x350)%(x351^x352));

	if (t85 != 6LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x353 = -1;
	int64_t x354 = INT64_MIN;
	int16_t x355 = -2884;
	volatile uint16_t x356 = 770U;
	int64_t t86 = -466999231242LL;

	t86 = ((x353^x354)%(x355^x356));

	if (t86 != 7LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x358 = INT8_MIN;
	int64_t x359 = -12040046625538798LL;
	volatile int16_t x360 = INT16_MIN;

	t87 = ((x357^x358)%(x359^x360));

	if (t87 != 127LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x362 = 0;
	static volatile int64_t x363 = INT64_MIN;
	uint32_t x364 = 8U;

	t88 = ((x361^x362)%(x363^x364));

	if (t88 != -32768LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = 769833167LL;
	uint64_t x366 = UINT64_MAX;
	volatile int32_t x367 = INT32_MAX;
	uint16_t x368 = 30354U;
	uint64_t t89 = 7539960311386315313LLU;

	t89 = ((x365^x366)%(x367^x368));

	if (t89 != 768417639LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x370 = 1767LLU;
	static uint32_t x371 = 203806U;
	static int32_t x372 = INT32_MIN;
	volatile uint64_t t90 = 1272747841716515LLU;

	t90 = ((x369^x370)%(x371^x372));

	if (t90 != 1760LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = -1;
	int32_t x374 = INT32_MIN;
	uint32_t x376 = 257345043U;
	static uint32_t t91 = 491178566U;

	t91 = ((x373^x374)%(x375^x376));

	if (t91 != 2147483647U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x377 = 92775127604169LLU;
	int16_t x379 = INT16_MIN;
	volatile uint64_t t92 = 108232LLU;

	t92 = ((x377^x378)%(x379^x380));

	if (t92 != 9223464811982379977LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x382 = 0;
	int64_t x383 = 111064342351LL;
	int32_t x384 = INT32_MIN;
	int64_t t93 = 36003482158058348LL;

	t93 = ((x381^x382)%(x383^x384));

	if (t93 != 2147483647LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x385 = UINT32_MAX;
	volatile uint8_t x387 = UINT8_MAX;
	static volatile uint32_t x388 = UINT32_MAX;

	t94 = ((x385^x386)%(x387^x388));

	if (t94 != 2147483648U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x390 = 3U;
	int8_t x391 = INT8_MAX;
	uint16_t x392 = UINT16_MAX;
	static volatile uint32_t t95 = 152441U;

	t95 = ((x389^x390)%(x391^x392));

	if (t95 != 16259U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x393 = 1262122919LLU;
	int16_t x394 = INT16_MIN;
	int32_t x395 = -1;
	int8_t x396 = INT8_MIN;

	t96 = ((x393^x394)%(x395^x396));

	if (t96 != 81LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x397 = INT64_MIN;
	static int8_t x398 = -1;
	uint32_t x399 = 10872033U;
	static uint16_t x400 = 3U;
	volatile int64_t t97 = -258354LL;

	t97 = ((x397^x398)%(x399^x400));

	if (t97 != 10024115LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x401 = 11390U;
	int64_t x402 = INT64_MAX;
	int16_t x403 = INT16_MIN;

	t98 = ((x401^x402)%(x403^x404));

	if (t98 != 21384LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = INT32_MIN;
	int16_t x406 = -1;
	static uint8_t x407 = 1U;
	uint8_t x408 = 3U;
	int32_t t99 = -1718;

	t99 = ((x405^x406)%(x407^x408));

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

