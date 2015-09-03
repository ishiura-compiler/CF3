#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
volatile int8_t x5 = -1;
volatile int64_t x7 = -228181415956323063LL;
static uint64_t x9 = UINT64_MAX;
int64_t x10 = INT64_MIN;
int16_t x11 = INT16_MIN;
int64_t x13 = 30371790LL;
static int64_t t3 = 621948633092LL;
uint64_t x18 = 890170340284136913LLU;
int8_t x27 = 18;
static volatile int64_t t5 = -1149443991388140LL;
static uint8_t x30 = UINT8_MAX;
int64_t x32 = -1LL;
int32_t x46 = INT32_MIN;
int8_t x48 = INT8_MIN;
int8_t x64 = INT8_MAX;
uint16_t x69 = UINT16_MAX;
int16_t x70 = INT16_MIN;
int8_t x74 = 0;
int32_t x80 = 788674194;
int32_t x81 = -1;
volatile uint8_t x85 = UINT8_MAX;
volatile int64_t t19 = -729LL;
int8_t x90 = INT8_MIN;
static int64_t x105 = -1LL;
int32_t x108 = -30;
uint32_t x116 = 12290678U;
static int16_t x118 = INT16_MAX;
uint8_t x121 = UINT8_MAX;
uint32_t x122 = 149913112U;
int8_t x123 = INT8_MAX;
uint16_t x125 = 6025U;
static int32_t t27 = 28;
int64_t t29 = -9588416036878410LL;
static int32_t x147 = -1;
static int64_t x148 = INT64_MAX;
static int64_t x149 = 1134LL;
int16_t x153 = -1;
volatile uint16_t x154 = UINT16_MAX;
static volatile uint8_t x155 = UINT8_MAX;
int8_t x156 = 1;
volatile int32_t t33 = 358;
int16_t x163 = 55;
static volatile int8_t x164 = INT8_MIN;
volatile int32_t x169 = 317;
int8_t x171 = INT8_MIN;
int8_t x178 = -1;
volatile int32_t t37 = -1596;
static int32_t x183 = INT32_MIN;
static int64_t x190 = -56488917747150LL;
int16_t x202 = INT16_MIN;
static int64_t x207 = INT64_MIN;
uint64_t t43 = 608078961LLU;
int64_t x213 = 282731116880248018LL;
int32_t x216 = 860460198;
int8_t x218 = 0;
volatile uint64_t t46 = 968963417LLU;
int8_t x226 = INT8_MAX;
uint32_t x227 = 19U;
static volatile uint8_t x240 = 121U;
int8_t x244 = INT8_MIN;
int8_t x246 = 1;
int64_t x247 = INT64_MAX;
int64_t t52 = 7883265156665LL;
volatile int8_t x260 = 1;
volatile uint64_t t54 = 397740654184037LLU;
int32_t x268 = 21054;
volatile uint64_t x281 = 224782293355825LLU;
volatile uint64_t t59 = 6LLU;
uint64_t x285 = 1006713554413296LLU;
uint64_t x288 = 510918217522497LLU;
int16_t x293 = 1;
int8_t x294 = -1;
static volatile int8_t x304 = INT8_MIN;
static int16_t x311 = INT16_MIN;
volatile int64_t t64 = -152LL;
uint16_t x314 = UINT16_MAX;
static int8_t x316 = -1;
int64_t x319 = INT64_MIN;
volatile uint64_t x333 = 18970361633LLU;
int32_t x343 = -1;
static volatile uint64_t x353 = 3909403749LLU;
int16_t x354 = INT16_MIN;
static uint64_t t73 = 3926LLU;
int32_t x364 = INT32_MIN;
uint64_t t75 = 20526126894994501LLU;
uint16_t x373 = 6579U;
volatile int64_t x374 = INT64_MIN;
int32_t x375 = -1;
static volatile uint64_t x377 = 45757642705LLU;
uint16_t x378 = 22242U;
int32_t x379 = INT32_MAX;
volatile uint64_t t79 = 18795794114954369LLU;
int32_t t81 = -61142;
int64_t x406 = -1LL;
static volatile int8_t x409 = INT8_MAX;
int32_t x411 = -2268843;
volatile uint32_t t85 = 15U;
static volatile uint8_t x433 = UINT8_MAX;
int32_t x436 = -219782;
uint8_t x444 = UINT8_MAX;
int32_t x451 = -480108206;
volatile int64_t t91 = 673LL;
static volatile uint64_t t92 = 67103993374655221LLU;
int16_t x463 = 31;
volatile int64_t t95 = -4289019206121LL;
uint64_t x481 = 121003746390809388LLU;
volatile int32_t x484 = 126252;
uint8_t x485 = 0U;
static int8_t x486 = 0;
volatile int16_t x495 = INT16_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint64_t x3 = 7405775996LLU;
	static volatile int32_t x4 = -1;
	uint64_t t0 = 11303867117163315LLU;

	t0 = ((x1+x2)+(x3^x4));

	if (t0 != 18446744066303775618LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MAX;
	int32_t x8 = INT32_MAX;
	volatile int64_t t1 = -7912003263LL;

	t1 = ((x5+x6)+(x7^x8));

	if (t1 != -228181414264431756LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x12 = INT16_MIN;
	static uint64_t t2 = 1LLU;

	t2 = ((x9+x10)+(x11^x12));

	if (t2 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x14 = -1LL;
	int16_t x15 = -13;
	static int32_t x16 = INT32_MIN;

	t3 = ((x13+x14)+(x15^x16));

	if (t3 != 2177855424LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -45;
	int32_t x19 = INT32_MIN;
	uint16_t x20 = 356U;
	volatile uint64_t t4 = 107418LLU;

	t4 = ((x17+x18)+(x19^x20));

	if (t4 != 890170338136653576LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = 8LL;
	static volatile int16_t x26 = INT16_MAX;
	int32_t x28 = 93;

	t5 = ((x25+x26)+(x27^x28));

	if (t5 != 32854LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	uint64_t x31 = 80024LLU;
	uint64_t t6 = 260276959501970LLU;

	t6 = ((x29+x30)+(x31^x32));

	if (t6 != 18446744073709471718LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x37 = 1U;
	int64_t x38 = 0LL;
	int32_t x39 = -9192498;
	int32_t x40 = INT32_MIN;
	volatile int64_t t7 = -2238176717455792LL;

	t7 = ((x37+x38)+(x39^x40));

	if (t7 != 2138291151LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x41 = -1;
	int16_t x42 = INT16_MIN;
	int16_t x43 = -6;
	int8_t x44 = 11;
	static int32_t t8 = 661019;

	t8 = ((x41+x42)+(x43^x44));

	if (t8 != -32784) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = UINT32_MAX;
	int32_t x47 = INT32_MIN;
	static uint32_t t9 = 112320222U;

	t9 = ((x45+x46)+(x47^x48));

	if (t9 != 4294967167U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = UINT64_MAX;
	uint8_t x50 = 95U;
	int8_t x51 = INT8_MAX;
	int8_t x52 = -1;
	volatile uint64_t t10 = 511LLU;

	t10 = ((x49+x50)+(x51^x52));

	if (t10 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x53 = INT8_MAX;
	static uint16_t x54 = UINT16_MAX;
	int16_t x55 = 0;
	uint8_t x56 = 1U;
	static int32_t t11 = 12;

	t11 = ((x53+x54)+(x55^x56));

	if (t11 != 65663) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = UINT16_MAX;
	int16_t x58 = INT16_MAX;
	int32_t x59 = 95046804;
	int8_t x60 = INT8_MIN;
	volatile int32_t t12 = 1;

	t12 = ((x57+x58)+(x59^x60));

	if (t12 != -94948590) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x61 = INT32_MAX;
	uint32_t x62 = UINT32_MAX;
	static int8_t x63 = INT8_MIN;
	uint32_t t13 = 453339U;

	t13 = ((x61+x62)+(x63^x64));

	if (t13 != 2147483645U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -7;
	static uint64_t x66 = 8828227979LLU;
	static int32_t x67 = INT32_MAX;
	static uint8_t x68 = 1U;
	volatile uint64_t t14 = 868326652LLU;

	t14 = ((x65+x66)+(x67^x68));

	if (t14 != 10975711618LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x71 = INT16_MIN;
	int32_t x72 = 1953446;
	volatile int32_t t15 = 825654134;

	t15 = ((x69+x70)+(x71^x72));

	if (t15 != -1913179) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = 1U;
	uint64_t x75 = 839707462400815LLU;
	volatile uint8_t x76 = 5U;
	static uint64_t t16 = 0LLU;

	t16 = ((x73+x74)+(x75^x76));

	if (t16 != 839707462400811LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 2507U;
	int64_t x78 = -9809LL;
	uint8_t x79 = UINT8_MAX;
	volatile int64_t t17 = 248564364417830LL;

	t17 = ((x77+x78)+(x79^x80));

	if (t17 != 788666855LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x82 = 3U;
	int32_t x83 = 27;
	int16_t x84 = INT16_MIN;
	int32_t t18 = -29586;

	t18 = ((x81+x82)+(x83^x84));

	if (t18 != -32739) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x86 = INT64_MIN;
	int16_t x87 = INT16_MIN;
	uint32_t x88 = 19U;

	t19 = ((x85+x86)+(x87^x88));

	if (t19 != -9223372032559841006LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -1;
	uint8_t x91 = 1U;
	static int16_t x92 = INT16_MIN;
	volatile int32_t t20 = -7;

	t20 = ((x89+x90)+(x91^x92));

	if (t20 != -32896) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x93 = INT64_MIN;
	uint32_t x94 = 29326U;
	volatile int8_t x95 = INT8_MIN;
	volatile int32_t x96 = -1;
	int64_t t21 = 97678LL;

	t21 = ((x93+x94)+(x95^x96));

	if (t21 != -9223372036854746355LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = -1;
	int8_t x102 = 0;
	int8_t x103 = 4;
	volatile uint16_t x104 = UINT16_MAX;
	int32_t t22 = 1428;

	t22 = ((x101+x102)+(x103^x104));

	if (t22 != 65530) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x106 = 12574;
	static int64_t x107 = INT64_MAX;
	int64_t t23 = -12195705836135LL;

	t23 = ((x105+x106)+(x107^x108));

	if (t23 != -9223372036854763206LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x113 = 1LLU;
	volatile uint64_t x114 = 39682697LLU;
	int16_t x115 = -899;
	volatile uint64_t t24 = 7803400940549315LLU;

	t24 = ((x113+x114)+(x115^x116));

	if (t24 != 4322359445LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x117 = -4293188LL;
	uint8_t x119 = 29U;
	uint8_t x120 = UINT8_MAX;
	int64_t t25 = 1293494998734921LL;

	t25 = ((x117+x118)+(x119^x120));

	if (t25 != -4260195LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x124 = 3U;
	volatile uint32_t t26 = 0U;

	t26 = ((x121+x122)+(x123^x124));

	if (t26 != 149913491U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x126 = 8;
	uint16_t x127 = UINT16_MAX;
	int32_t x128 = -1;

	t27 = ((x125+x126)+(x127^x128));

	if (t27 != -59503) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = -1LL;
	static int8_t x134 = INT8_MIN;
	static uint8_t x135 = UINT8_MAX;
	int8_t x136 = -1;
	volatile int64_t t28 = -258803580199776487LL;

	t28 = ((x133+x134)+(x135^x136));

	if (t28 != -385LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x137 = 11675U;
	static int64_t x138 = INT64_MIN;
	int8_t x139 = -12;
	static int32_t x140 = INT32_MIN;

	t29 = ((x137+x138)+(x139^x140));

	if (t29 != -9223372034707280497LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x141 = 1U;
	int16_t x142 = INT16_MAX;
	int64_t x143 = 6LL;
	uint64_t x144 = 26672LLU;
	volatile uint64_t t30 = 28222516068LLU;

	t30 = ((x141+x142)+(x143^x144));

	if (t30 != 59446LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x145 = UINT16_MAX;
	static uint64_t x146 = UINT64_MAX;
	volatile uint64_t t31 = 27415LLU;

	t31 = ((x145+x146)+(x147^x148));

	if (t31 != 9223372036854841342LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x150 = -1;
	int16_t x151 = INT16_MAX;
	uint8_t x152 = 2U;
	volatile int64_t t32 = 1492202214LL;

	t32 = ((x149+x150)+(x151^x152));

	if (t32 != 33898LL) { NG(); } else { ; }
	
}

void f33(void) {


	t33 = ((x153+x154)+(x155^x156));

	if (t33 != 65788) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x161 = 1;
	volatile int8_t x162 = 4;
	volatile int32_t t34 = -1;

	t34 = ((x161+x162)+(x163^x164));

	if (t34 != -68) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x170 = UINT16_MAX;
	static volatile uint8_t x172 = UINT8_MAX;
	static int32_t t35 = -15430;

	t35 = ((x169+x170)+(x171^x172));

	if (t35 != 65723) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x173 = -1;
	int64_t x174 = INT64_MAX;
	uint64_t x175 = 8000579045338303LLU;
	int8_t x176 = INT8_MAX;
	uint64_t t36 = 3934186854LLU;

	t36 = ((x173+x174)+(x175^x176));

	if (t36 != 9231372615900114110LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x177 = INT8_MIN;
	int16_t x179 = INT16_MIN;
	int16_t x180 = 11;

	t37 = ((x177+x178)+(x179^x180));

	if (t37 != -32886) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x181 = -1;
	int16_t x182 = INT16_MAX;
	int32_t x184 = INT32_MIN;
	volatile int32_t t38 = -13;

	t38 = ((x181+x182)+(x183^x184));

	if (t38 != 32766) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x189 = 0;
	volatile int8_t x191 = INT8_MIN;
	volatile uint64_t x192 = UINT64_MAX;
	uint64_t t39 = 36LLU;

	t39 = ((x189+x190)+(x191^x192));

	if (t39 != 18446687584791804593LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x193 = 130597086695LLU;
	volatile int16_t x194 = INT16_MIN;
	static int64_t x195 = -1LL;
	static int8_t x196 = 0;
	uint64_t t40 = 174617562643LLU;

	t40 = ((x193+x194)+(x195^x196));

	if (t40 != 130597053926LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x197 = INT8_MIN;
	int64_t x198 = INT64_MAX;
	int8_t x199 = 0;
	int16_t x200 = INT16_MIN;
	int64_t t41 = -4484741950LL;

	t41 = ((x197+x198)+(x199^x200));

	if (t41 != 9223372036854742911LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x201 = 1741984967305285LL;
	uint64_t x203 = 389925149732083506LLU;
	int16_t x204 = -3269;
	static volatile uint64_t t42 = 1510675390819421409LLU;

	t42 = ((x201+x202)+(x203^x204));

	if (t42 != 18058560908944739406LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = INT64_MIN;
	static uint64_t x206 = 2509533935283883470LLU;
	static uint16_t x208 = 5508U;

	t43 = ((x205+x206)+(x207^x208));

	if (t43 != 2509533935283888978LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x209 = 0;
	static uint64_t x210 = 1250401047988LLU;
	volatile int32_t x211 = 1;
	uint32_t x212 = 209082682U;
	volatile uint64_t t44 = 58374570936100LLU;

	t44 = ((x209+x210)+(x211^x212));

	if (t44 != 1250610130671LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x214 = UINT64_MAX;
	static uint32_t x215 = UINT32_MAX;
	static uint64_t t45 = 51731631290685LLU;

	t45 = ((x213+x214)+(x215^x216));

	if (t45 != 282731120314755114LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x217 = UINT64_MAX;
	static int16_t x219 = INT16_MIN;
	uint64_t x220 = 438503LLU;

	t46 = ((x217+x218)+(x219^x220));

	if (t46 != 18446744073709105382LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x225 = 3;
	static uint8_t x228 = UINT8_MAX;
	uint32_t t47 = 848U;

	t47 = ((x225+x226)+(x227^x228));

	if (t47 != 366U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x233 = 122U;
	int32_t x234 = -1;
	int32_t x235 = -1404;
	uint64_t x236 = 146930883067773LLU;
	volatile uint64_t t48 = 106145690446LLU;

	t48 = ((x233+x234)+(x235^x236));

	if (t48 != 18446597142826485362LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x237 = INT32_MIN;
	int16_t x238 = 0;
	int8_t x239 = 0;
	int32_t t49 = -566742;

	t49 = ((x237+x238)+(x239^x240));

	if (t49 != -2147483527) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x241 = -13313;
	int8_t x242 = INT8_MIN;
	uint64_t x243 = 427LLU;
	volatile uint64_t t50 = 790374372030LLU;

	t50 = ((x241+x242)+(x243^x244));

	if (t50 != 18446744073709537706LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x245 = 3867962LLU;
	volatile uint8_t x248 = 7U;
	uint64_t t51 = 265098680LLU;

	t51 = ((x245+x246)+(x247^x248));

	if (t51 != 9223372036858643763LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x249 = 11061U;
	int16_t x250 = 7099;
	int64_t x251 = INT64_MAX;
	static int64_t x252 = -1LL;

	t52 = ((x249+x250)+(x251^x252));

	if (t52 != -9223372036854757648LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x253 = 417972U;
	uint32_t x254 = UINT32_MAX;
	int64_t x255 = -1LL;
	int16_t x256 = INT16_MAX;
	static volatile int64_t t53 = -1543690623LL;

	t53 = ((x253+x254)+(x255^x256));

	if (t53 != 385203LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x257 = -1;
	uint32_t x258 = 19U;
	uint64_t x259 = 5812243580082548460LLU;

	t54 = ((x257+x258)+(x259^x260));

	if (t54 != 5812243580082548479LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x261 = UINT64_MAX;
	int64_t x262 = INT64_MAX;
	int64_t x263 = INT64_MAX;
	int32_t x264 = -1;
	volatile uint64_t t55 = 1026919267LLU;

	t55 = ((x261+x262)+(x263^x264));

	if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x265 = INT32_MIN;
	static uint64_t x266 = 5949129693396LLU;
	int32_t x267 = -794518;
	static volatile uint64_t t56 = 360305425LLU;

	t56 = ((x265+x266)+(x267^x268));

	if (t56 != 5946981403432LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x273 = -1;
	int64_t x274 = -351783237LL;
	int32_t x275 = 37;
	uint16_t x276 = 677U;
	int64_t t57 = 752LL;

	t57 = ((x273+x274)+(x275^x276));

	if (t57 != -351782598LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x277 = 22;
	int16_t x278 = INT16_MIN;
	int64_t x279 = INT64_MIN;
	static volatile int64_t x280 = INT64_MIN;
	volatile int64_t t58 = -490496119LL;

	t58 = ((x277+x278)+(x279^x280));

	if (t58 != -32746LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x282 = 86967LL;
	int8_t x283 = INT8_MIN;
	int8_t x284 = INT8_MAX;

	t59 = ((x281+x282)+(x283^x284));

	if (t59 != 224782293442791LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x286 = INT32_MIN;
	uint32_t x287 = UINT32_MAX;
	volatile uint64_t t60 = 9157076548822093209LLU;

	t60 = ((x285+x286)+(x287^x288));

	if (t60 != 1517630333634990LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x289 = 26236840003550396LL;
	int8_t x290 = INT8_MIN;
	uint8_t x291 = 1U;
	int16_t x292 = INT16_MIN;
	int64_t t61 = -4472400839894958LL;

	t61 = ((x289+x290)+(x291^x292));

	if (t61 != 26236840003517501LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x295 = 127944;
	uint32_t x296 = 170397107U;
	volatile uint32_t t62 = 3050U;

	t62 = ((x293+x294)+(x295^x296));

	if (t62 != 170524283U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x301 = UINT32_MAX;
	volatile int8_t x302 = INT8_MIN;
	uint64_t x303 = 259790330631LLU;
	uint64_t t63 = 2990334553LLU;

	t63 = ((x301+x302)+(x303^x304));

	if (t63 != 18446743818214188038LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x309 = INT8_MAX;
	static int64_t x310 = -1LL;
	static int8_t x312 = -60;

	t64 = ((x309+x310)+(x311^x312));

	if (t64 != 32834LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x313 = 1966U;
	uint32_t x315 = UINT32_MAX;
	uint32_t t65 = 3U;

	t65 = ((x313+x314)+(x315^x316));

	if (t65 != 67501U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x317 = 4014U;
	volatile int16_t x318 = -4;
	uint64_t x320 = 417LLU;
	uint64_t t66 = 16301820115LLU;

	t66 = ((x317+x318)+(x319^x320));

	if (t66 != 9223372036854780235LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x321 = 3191U;
	uint32_t x322 = 13U;
	uint32_t x323 = UINT32_MAX;
	static int64_t x324 = -254539129564658LL;
	static volatile int64_t t67 = 62684432781208355LL;

	t67 = ((x321+x322)+(x323^x324));

	if (t67 != -254539049059723LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x325 = -3025;
	volatile int32_t x326 = -1;
	volatile int64_t x327 = INT64_MIN;
	static int8_t x328 = -1;
	int64_t t68 = 1368982LL;

	t68 = ((x325+x326)+(x327^x328));

	if (t68 != 9223372036854772781LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x334 = 336U;
	volatile int16_t x335 = INT16_MIN;
	uint16_t x336 = UINT16_MAX;
	volatile uint64_t t69 = 1351LLU;

	t69 = ((x333+x334)+(x335^x336));

	if (t69 != 18970329200LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x337 = INT16_MIN;
	int32_t x338 = 728784394;
	uint32_t x339 = 10U;
	uint8_t x340 = UINT8_MAX;
	volatile uint32_t t70 = 41438401U;

	t70 = ((x337+x338)+(x339^x340));

	if (t70 != 728751871U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x341 = 0;
	int8_t x342 = 17;
	volatile int16_t x344 = -1;
	volatile int32_t t71 = -1;

	t71 = ((x341+x342)+(x343^x344));

	if (t71 != 17) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x349 = INT32_MAX;
	int16_t x350 = -1;
	int64_t x351 = 765LL;
	static uint32_t x352 = 189380377U;
	volatile int64_t t72 = -14061985234139382LL;

	t72 = ((x349+x350)+(x351^x352));

	if (t72 != 2336863714LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x355 = INT16_MIN;
	volatile int16_t x356 = 1758;

	t73 = ((x353+x354)+(x355^x356));

	if (t73 != 3909339971LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x357 = INT16_MIN;
	uint16_t x358 = UINT16_MAX;
	static int32_t x359 = 84929;
	int64_t x360 = INT64_MIN;
	volatile int64_t t74 = -1355709151918323044LL;

	t74 = ((x357+x358)+(x359^x360));

	if (t74 != -9223372036854658112LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x361 = 4765203777815LLU;
	static int32_t x362 = -44647;
	static volatile int16_t x363 = INT16_MAX;

	t75 = ((x361+x362)+(x363^x364));

	if (t75 != 4763056282287LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x365 = UINT64_MAX;
	static int32_t x366 = -1;
	int16_t x367 = INT16_MIN;
	static volatile int8_t x368 = -1;
	uint64_t t76 = 115976639933LLU;

	t76 = ((x365+x366)+(x367^x368));

	if (t76 != 32765LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x369 = 32692822346LLU;
	int8_t x370 = INT8_MIN;
	int64_t x371 = INT64_MAX;
	uint16_t x372 = 31117U;
	uint64_t t77 = 124268LLU;

	t77 = ((x369+x370)+(x371^x372));

	if (t77 != 9223372069547566908LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x376 = -43;
	volatile int64_t t78 = 6LL;

	t78 = ((x373+x374)+(x375^x376));

	if (t78 != -9223372036854769187LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x380 = 1680843850LLU;

	t79 = ((x377+x378)+(x379^x380));

	if (t79 != 46224304744LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x385 = 26577U;
	volatile int16_t x386 = -1;
	uint64_t x387 = 7LLU;
	uint32_t x388 = UINT32_MAX;
	volatile uint64_t t80 = 441LLU;

	t80 = ((x385+x386)+(x387^x388));

	if (t80 != 4294993864LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x389 = INT16_MIN;
	uint8_t x390 = 1U;
	int8_t x391 = INT8_MIN;
	volatile int8_t x392 = -1;

	t81 = ((x389+x390)+(x391^x392));

	if (t81 != -32640) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x393 = -21;
	int32_t x394 = 273421433;
	static volatile int64_t x395 = -1LL;
	static int32_t x396 = INT32_MAX;
	static volatile int64_t t82 = -804LL;

	t82 = ((x393+x394)+(x395^x396));

	if (t82 != -1874062236LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x397 = -510895663LL;
	static volatile int16_t x398 = 15;
	int64_t x399 = INT64_MIN;
	static int64_t x400 = 69434285036337069LL;
	volatile int64_t t83 = -147372782711LL;

	t83 = ((x397+x398)+(x399^x400));

	if (t83 != -9153937752329334387LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x405 = -12;
	int32_t x407 = 59513217;
	int8_t x408 = -1;
	int64_t t84 = -10781249844686136LL;

	t84 = ((x405+x406)+(x407^x408));

	if (t84 != -59513231LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x410 = 1210U;
	uint32_t x412 = UINT32_MAX;

	t85 = ((x409+x410)+(x411^x412));

	if (t85 != 2270179U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x413 = INT16_MIN;
	int32_t x414 = INT32_MAX;
	uint64_t x415 = 57392LLU;
	uint64_t x416 = 11513LLU;
	volatile uint64_t t86 = 60565937453LLU;

	t86 = ((x413+x414)+(x415^x416));

	if (t86 != 2147503304LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x425 = -1;
	int8_t x426 = -1;
	int8_t x427 = -1;
	static volatile int32_t x428 = 2883;
	volatile int32_t t87 = -20006;

	t87 = ((x425+x426)+(x427^x428));

	if (t87 != -2886) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x434 = 0U;
	int8_t x435 = INT8_MAX;
	int32_t t88 = -13101878;

	t88 = ((x433+x434)+(x435^x436));

	if (t88 != -219644) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x441 = 132518551015689093LLU;
	int64_t x442 = 43592LL;
	uint8_t x443 = 4U;
	uint64_t t89 = 135375826248748845LLU;

	t89 = ((x441+x442)+(x443^x444));

	if (t89 != 132518551015732936LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x445 = -1;
	uint8_t x446 = UINT8_MAX;
	int8_t x447 = -1;
	volatile int64_t x448 = 22482253079109418LL;
	int64_t t90 = -44916LL;

	t90 = ((x445+x446)+(x447^x448));

	if (t90 != -22482253079109165LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x449 = INT16_MAX;
	volatile uint8_t x450 = UINT8_MAX;
	volatile int64_t x452 = -1LL;

	t91 = ((x449+x450)+(x451^x452));

	if (t91 != 480141227LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x453 = 7U;
	static uint32_t x454 = 981159U;
	int8_t x455 = INT8_MIN;
	uint64_t x456 = 13839160LLU;

	t92 = ((x453+x454)+(x455^x456));

	if (t92 != 18446744073696693606LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x457 = 1U;
	static int32_t x458 = 72358636;
	uint64_t x459 = 369LLU;
	uint64_t x460 = 45174461LLU;
	uint64_t t93 = 440398775468LLU;

	t93 = ((x457+x458)+(x459^x460));

	if (t93 != 117533369LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x461 = 3547LLU;
	uint8_t x462 = 42U;
	int16_t x464 = -1;
	uint64_t t94 = 21150051LLU;

	t94 = ((x461+x462)+(x463^x464));

	if (t94 != 3557LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x469 = UINT32_MAX;
	int32_t x470 = INT32_MIN;
	volatile int64_t x471 = -1LL;
	static uint16_t x472 = 5503U;

	t95 = ((x469+x470)+(x471^x472));

	if (t95 != 2147478143LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x473 = 0;
	static uint16_t x474 = 59U;
	volatile int16_t x475 = INT16_MAX;
	int32_t x476 = 25380886;
	static volatile int32_t t96 = 16292254;

	t96 = ((x473+x474)+(x475^x476));

	if (t96 != 25376804) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x482 = INT32_MIN;
	volatile int16_t x483 = -1;
	volatile uint64_t t97 = 8305617662LLU;

	t97 = ((x481+x482)+(x483^x484));

	if (t97 != 121003744243199487LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x487 = INT8_MIN;
	volatile uint8_t x488 = UINT8_MAX;
	static volatile int32_t t98 = 136644843;

	t98 = ((x485+x486)+(x487^x488));

	if (t98 != -129) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x493 = 476;
	int8_t x494 = INT8_MAX;
	uint8_t x496 = 63U;
	static int32_t t99 = 16312894;

	t99 = ((x493+x494)+(x495^x496));

	if (t99 != -32102) { NG(); } else { ; }
	
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

