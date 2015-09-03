#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 28742998786016LLU;
uint64_t t0 = 315270439LLU;
int8_t x10 = -1;
static volatile int32_t t1 = -5;
volatile int8_t x14 = INT8_MIN;
int16_t x23 = -649;
int64_t x30 = 1LL;
int32_t x31 = INT32_MIN;
volatile int64_t x32 = -1LL;
int16_t x36 = -1;
int64_t x44 = INT64_MIN;
volatile int64_t t8 = 159342323788985910LL;
int64_t x50 = INT64_MAX;
static int32_t x53 = INT32_MIN;
int8_t x65 = 0;
volatile uint8_t x66 = 0U;
volatile int32_t t12 = -114486;
volatile uint64_t x74 = UINT64_MAX;
int8_t x85 = INT8_MIN;
int64_t x91 = INT64_MAX;
uint64_t x100 = 143LLU;
volatile int32_t t18 = 23747;
int8_t x123 = INT8_MAX;
static int16_t x134 = INT16_MAX;
uint16_t x143 = 1098U;
static int32_t t24 = 1;
static uint64_t x154 = UINT64_MAX;
uint16_t x164 = 47U;
int32_t x165 = -1;
int16_t x172 = -1;
int64_t x176 = -1LL;
volatile uint64_t x177 = 18502061334087LLU;
int32_t x180 = -1;
int8_t x186 = -11;
int8_t x194 = -1;
volatile int16_t x196 = INT16_MIN;
uint64_t x200 = UINT64_MAX;
static int64_t x201 = -1LL;
int16_t x204 = 4;
volatile int32_t x216 = 60192;
volatile uint8_t x224 = UINT8_MAX;
volatile int32_t x227 = -38103;
uint8_t x249 = UINT8_MAX;
uint32_t t49 = 1229U;
int64_t x269 = -1LL;
int64_t x270 = 123LL;
volatile int64_t t50 = 6045378567LL;
uint32_t x284 = 23417U;
volatile int32_t t53 = -234621;
uint8_t x286 = 1U;
uint32_t t54 = 25U;
uint16_t x294 = 2U;
int16_t x295 = INT16_MAX;
int32_t x298 = INT32_MAX;
int16_t x302 = INT16_MAX;
int32_t x309 = -1;
static int8_t x310 = INT8_MAX;
volatile uint8_t x313 = UINT8_MAX;
int64_t x316 = INT64_MIN;
uint32_t t63 = 16U;
int8_t x334 = 0;
int64_t x335 = INT64_MIN;
int64_t x362 = 372887652LL;
static int64_t x383 = INT64_MIN;
uint64_t x388 = 1540965025904LLU;
int64_t x403 = -322696971LL;
static volatile int32_t t79 = -432469555;
static uint32_t x419 = 1975495641U;
volatile int32_t t80 = 213;
int32_t x432 = 4161;
int8_t x435 = INT8_MAX;
static uint16_t x445 = 6277U;
uint16_t x446 = 178U;
static int32_t t86 = -3464626;
uint8_t x453 = 3U;
int32_t x456 = INT32_MAX;
volatile uint64_t x459 = 3182607LLU;
uint32_t t89 = 1U;
int64_t x461 = 2567324146382LL;
volatile int64_t x462 = -1LL;
static int8_t x464 = INT8_MIN;
uint32_t x497 = UINT32_MAX;
int16_t x503 = INT16_MIN;
int8_t x504 = INT8_MIN;
static int32_t t95 = 2964254;
static volatile int32_t t96 = 1344;
int16_t x536 = -388;


void f0(void) {
	volatile int64_t x1 = -156673950339617567LL;
	uint32_t x3 = 0U;
	volatile int8_t x4 = INT8_MAX;

	t0 = ((x1*x2)-(x3==x4));

	if (t0 != 14616430080757720032LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	int16_t x11 = INT16_MAX;
	int64_t x12 = INT64_MAX;

	t1 = ((x9*x10)-(x11==x12));

	if (t1 != 128) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -18558400215862486LL;
	volatile int32_t x15 = INT32_MAX;
	int8_t x16 = INT8_MIN;
	int64_t t2 = 4857854767LL;

	t2 = ((x13*x14)-(x15==x16));

	if (t2 != 2375475227630398208LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x21 = -125517350;
	int64_t x22 = -2267853LL;
	static int32_t x24 = INT32_MAX;
	volatile int64_t t3 = 2195LL;

	t3 = ((x21*x22)-(x23==x24));

	if (t3 != 284654898749550LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = INT32_MIN;
	volatile int64_t t4 = -10915305287720LL;

	t4 = ((x29*x30)-(x31==x32));

	if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x33 = 198;
	static uint32_t x34 = UINT32_MAX;
	uint64_t x35 = UINT64_MAX;
	volatile uint32_t t5 = 0U;

	t5 = ((x33*x34)-(x35==x36));

	if (t5 != 4294967097U) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x37 = INT8_MIN;
	uint8_t x38 = 103U;
	int64_t x39 = INT64_MIN;
	volatile int64_t x40 = -1LL;
	int32_t t6 = -1;

	t6 = ((x37*x38)-(x39==x40));

	if (t6 != -13184) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x41 = -1212LL;
	uint16_t x42 = 54U;
	uint16_t x43 = UINT16_MAX;
	static int64_t t7 = -442170870471266LL;

	t7 = ((x41*x42)-(x43==x44));

	if (t7 != -65448LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = -167182800689LL;
	volatile uint16_t x46 = 124U;
	uint16_t x47 = 11021U;
	volatile uint8_t x48 = 1U;

	t8 = ((x45*x46)-(x47==x48));

	if (t8 != -20730667285436LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = 0;
	uint16_t x51 = UINT16_MAX;
	static int16_t x52 = INT16_MAX;
	volatile int64_t t9 = 292960273426367866LL;

	t9 = ((x49*x50)-(x51==x52));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x54 = -1LL;
	volatile int64_t x55 = -2204841247367751229LL;
	uint32_t x56 = 237283U;
	int64_t t10 = -150020302017612LL;

	t10 = ((x53*x54)-(x55==x56));

	if (t10 != 2147483648LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x57 = 3U;
	int16_t x58 = INT16_MAX;
	static int8_t x59 = INT8_MIN;
	int32_t x60 = INT32_MAX;
	volatile int32_t t11 = 147717711;

	t11 = ((x57*x58)-(x59==x60));

	if (t11 != 98301) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x67 = 513714U;
	volatile int64_t x68 = INT64_MIN;

	t12 = ((x65*x66)-(x67==x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x69 = 22;
	int16_t x70 = -1;
	int64_t x71 = INT64_MAX;
	uint16_t x72 = 4881U;
	volatile int32_t t13 = -13952;

	t13 = ((x69*x70)-(x71==x72));

	if (t13 != -22) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x73 = -1;
	volatile uint16_t x75 = 3U;
	int16_t x76 = INT16_MIN;
	uint64_t t14 = 1824LLU;

	t14 = ((x73*x74)-(x75==x76));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x86 = 0U;
	static int64_t x87 = INT64_MIN;
	int16_t x88 = INT16_MAX;
	volatile int32_t t15 = -64;

	t15 = ((x85*x86)-(x87==x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x89 = UINT64_MAX;
	uint64_t x90 = 982LLU;
	int16_t x92 = 1;
	volatile uint64_t t16 = 212013389803LLU;

	t16 = ((x89*x90)-(x91==x92));

	if (t16 != 18446744073709550634LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x93 = 3581;
	int8_t x94 = 6;
	int8_t x95 = 1;
	uint8_t x96 = 0U;
	volatile int32_t t17 = -74;

	t17 = ((x93*x94)-(x95==x96));

	if (t17 != 21486) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x97 = INT16_MIN;
	uint16_t x98 = UINT16_MAX;
	uint8_t x99 = UINT8_MAX;

	t18 = ((x97*x98)-(x99==x100));

	if (t18 != -2147450880) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = -477;
	static volatile uint32_t x106 = 1753719029U;
	int32_t x107 = INT32_MIN;
	int16_t x108 = INT16_MIN;
	volatile uint32_t t19 = 1950383694U;

	t19 = ((x105*x106)-(x107==x108));

	if (t19 != 994645887U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x109 = 15;
	uint32_t x110 = UINT32_MAX;
	static uint16_t x111 = UINT16_MAX;
	uint32_t x112 = 400739658U;
	static uint32_t t20 = 680727U;

	t20 = ((x109*x110)-(x111==x112));

	if (t20 != 4294967281U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x117 = 3230;
	static uint32_t x118 = UINT32_MAX;
	static int16_t x119 = 297;
	int32_t x120 = -1;
	uint32_t t21 = 18158U;

	t21 = ((x117*x118)-(x119==x120));

	if (t21 != 4294964066U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x121 = 27117U;
	static volatile uint16_t x122 = 1U;
	volatile int16_t x124 = INT16_MAX;
	static int32_t t22 = 73316278;

	t22 = ((x121*x122)-(x123==x124));

	if (t22 != 27117) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x133 = 14673544802716561LLU;
	volatile int32_t x135 = -108532;
	uint8_t x136 = 39U;
	volatile uint64_t t23 = 481LLU;

	t23 = ((x133*x134)-(x135==x136));

	if (t23 != 1192696634165212271LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x141 = INT8_MAX;
	int32_t x142 = -1141455;
	int16_t x144 = 16;

	t24 = ((x141*x142)-(x143==x144));

	if (t24 != -144964785) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x149 = INT16_MIN;
	int32_t x150 = -1;
	uint8_t x151 = 6U;
	uint8_t x152 = UINT8_MAX;
	volatile int32_t t25 = 20499;

	t25 = ((x149*x150)-(x151==x152));

	if (t25 != 32768) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x153 = INT8_MAX;
	volatile int8_t x155 = -1;
	static uint64_t x156 = 1575437819LLU;
	uint64_t t26 = 93480414469455LLU;

	t26 = ((x153*x154)-(x155==x156));

	if (t26 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x157 = -2795;
	int16_t x158 = INT16_MAX;
	uint64_t x159 = UINT64_MAX;
	int32_t x160 = -1;
	volatile int32_t t27 = -1;

	t27 = ((x157*x158)-(x159==x160));

	if (t27 != -91583766) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x161 = UINT8_MAX;
	volatile uint16_t x162 = 588U;
	int16_t x163 = INT16_MIN;
	int32_t t28 = -1;

	t28 = ((x161*x162)-(x163==x164));

	if (t28 != 149940) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x166 = -1;
	int32_t x167 = -89246927;
	uint32_t x168 = 46U;
	int32_t t29 = 11409;

	t29 = ((x165*x166)-(x167==x168));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x169 = -1;
	int64_t x170 = INT64_MAX;
	static volatile uint32_t x171 = UINT32_MAX;
	int64_t t30 = INT64_MIN;

	t30 = ((x169*x170)-(x171==x172));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x173 = -1LL;
	int64_t x174 = 106050925616LL;
	volatile uint8_t x175 = 24U;
	int64_t t31 = -34928857667633680LL;

	t31 = ((x173*x174)-(x175==x176));

	if (t31 != -106050925616LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x178 = -5715;
	int16_t x179 = -4474;
	volatile uint64_t t32 = 4103259LLU;

	t32 = ((x177*x178)-(x179==x180));

	if (t32 != 18341004793185244411LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x181 = INT8_MIN;
	uint64_t x182 = UINT64_MAX;
	volatile int64_t x183 = INT64_MIN;
	int64_t x184 = INT64_MIN;
	volatile uint64_t t33 = 1779160195533LLU;

	t33 = ((x181*x182)-(x183==x184));

	if (t33 != 127LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x185 = 2055366323U;
	volatile int16_t x187 = INT16_MAX;
	volatile int32_t x188 = 36460738;
	uint32_t t34 = 37U;

	t34 = ((x185*x186)-(x187==x188));

	if (t34 != 3160774223U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x189 = INT8_MIN;
	uint64_t x190 = UINT64_MAX;
	int16_t x191 = INT16_MAX;
	static int8_t x192 = -2;
	uint64_t t35 = 44241389260LLU;

	t35 = ((x189*x190)-(x191==x192));

	if (t35 != 128LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x193 = -342569LL;
	int16_t x195 = 1210;
	static volatile int64_t t36 = -471751274665450LL;

	t36 = ((x193*x194)-(x195==x196));

	if (t36 != 342569LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x197 = 2;
	volatile int8_t x198 = INT8_MIN;
	static int16_t x199 = -7810;
	volatile int32_t t37 = 121;

	t37 = ((x197*x198)-(x199==x200));

	if (t37 != -256) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x202 = -14657252LL;
	int32_t x203 = INT32_MIN;
	static volatile int64_t t38 = 8LL;

	t38 = ((x201*x202)-(x203==x204));

	if (t38 != 14657252LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x205 = UINT64_MAX;
	int32_t x206 = INT32_MAX;
	uint64_t x207 = 12013778LLU;
	volatile uint32_t x208 = UINT32_MAX;
	static uint64_t t39 = 1497186147211LLU;

	t39 = ((x205*x206)-(x207==x208));

	if (t39 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x209 = 215701421LLU;
	volatile uint32_t x210 = 946016284U;
	int16_t x211 = -114;
	static int8_t x212 = INT8_MAX;
	volatile uint64_t t40 = 834387LLU;

	t40 = ((x209*x210)-(x211==x212));

	if (t40 != 204057056747939564LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x213 = 261137;
	static uint8_t x214 = 13U;
	static int8_t x215 = -1;
	int32_t t41 = -1756;

	t41 = ((x213*x214)-(x215==x216));

	if (t41 != 3394781) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x221 = UINT16_MAX;
	int8_t x222 = 50;
	volatile int16_t x223 = INT16_MIN;
	volatile int32_t t42 = 5;

	t42 = ((x221*x222)-(x223==x224));

	if (t42 != 3276750) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x225 = -1;
	int8_t x226 = -1;
	static volatile int8_t x228 = INT8_MIN;
	volatile int32_t t43 = 754597;

	t43 = ((x225*x226)-(x227==x228));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x229 = 19774131U;
	uint16_t x230 = 93U;
	int16_t x231 = -22;
	uint8_t x232 = 1U;
	uint32_t t44 = 0U;

	t44 = ((x229*x230)-(x231==x232));

	if (t44 != 1838994183U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x241 = 314450U;
	static uint64_t x242 = UINT64_MAX;
	int32_t x243 = -1;
	volatile int8_t x244 = INT8_MIN;
	volatile uint64_t t45 = 54579007431790578LLU;

	t45 = ((x241*x242)-(x243==x244));

	if (t45 != 18446744073709237166LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x250 = -1918;
	int64_t x251 = INT64_MIN;
	int32_t x252 = -1499;
	volatile int32_t t46 = 4898;

	t46 = ((x249*x250)-(x251==x252));

	if (t46 != -489090) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x253 = INT8_MIN;
	volatile int16_t x254 = -1;
	int32_t x255 = 539156;
	uint16_t x256 = 0U;
	volatile int32_t t47 = 44980;

	t47 = ((x253*x254)-(x255==x256));

	if (t47 != 128) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x261 = 3U;
	int8_t x262 = INT8_MIN;
	int16_t x263 = -588;
	int8_t x264 = -23;
	volatile int32_t t48 = -13335986;

	t48 = ((x261*x262)-(x263==x264));

	if (t48 != -384) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x265 = INT32_MIN;
	uint32_t x266 = 2451U;
	static uint64_t x267 = 7636651360427LLU;
	uint32_t x268 = 27U;

	t49 = ((x265*x266)-(x267==x268));

	if (t49 != 2147483648U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x271 = 83LLU;
	volatile int32_t x272 = INT32_MIN;

	t50 = ((x269*x270)-(x271==x272));

	if (t50 != -123LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x273 = INT32_MIN;
	uint32_t x274 = UINT32_MAX;
	int8_t x275 = INT8_MAX;
	uint32_t x276 = UINT32_MAX;
	static volatile uint32_t t51 = 815714982U;

	t51 = ((x273*x274)-(x275==x276));

	if (t51 != 2147483648U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x277 = UINT8_MAX;
	volatile uint8_t x278 = 1U;
	static uint64_t x279 = 11914671LLU;
	int8_t x280 = -1;
	int32_t t52 = 6967;

	t52 = ((x277*x278)-(x279==x280));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x281 = -1;
	uint16_t x282 = UINT16_MAX;
	volatile uint64_t x283 = 6336543LLU;

	t53 = ((x281*x282)-(x283==x284));

	if (t53 != -65535) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x285 = 1573882564U;
	int16_t x287 = 21;
	int16_t x288 = INT16_MAX;

	t54 = ((x285*x286)-(x287==x288));

	if (t54 != 1573882564U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x293 = 2373LL;
	int64_t x296 = -210LL;
	static volatile int64_t t55 = -5932970856293LL;

	t55 = ((x293*x294)-(x295==x296));

	if (t55 != 4746LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x297 = 107U;
	int8_t x299 = 0;
	static uint64_t x300 = UINT64_MAX;
	volatile uint32_t t56 = 1628071885U;

	t56 = ((x297*x298)-(x299==x300));

	if (t56 != 2147483541U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x301 = -1;
	static uint16_t x303 = UINT16_MAX;
	static volatile int32_t x304 = INT32_MAX;
	volatile int32_t t57 = 3711;

	t57 = ((x301*x302)-(x303==x304));

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x305 = INT8_MAX;
	static uint64_t x306 = UINT64_MAX;
	int8_t x307 = INT8_MIN;
	volatile uint8_t x308 = UINT8_MAX;
	uint64_t t58 = 140583LLU;

	t58 = ((x305*x306)-(x307==x308));

	if (t58 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x311 = UINT64_MAX;
	static volatile int32_t x312 = INT32_MAX;
	static volatile int32_t t59 = -7402754;

	t59 = ((x309*x310)-(x311==x312));

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x314 = -1LL;
	uint32_t x315 = 2U;
	volatile int64_t t60 = 212773LL;

	t60 = ((x313*x314)-(x315==x316));

	if (t60 != -255LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x317 = 19;
	int8_t x318 = INT8_MAX;
	volatile int32_t x319 = 0;
	uint8_t x320 = 7U;
	static int32_t t61 = -17737;

	t61 = ((x317*x318)-(x319==x320));

	if (t61 != 2413) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x321 = -1;
	uint8_t x322 = UINT8_MAX;
	static uint8_t x323 = UINT8_MAX;
	volatile int32_t x324 = INT32_MIN;
	int32_t t62 = 1;

	t62 = ((x321*x322)-(x323==x324));

	if (t62 != -255) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x325 = UINT16_MAX;
	uint32_t x326 = 16642904U;
	static uint16_t x327 = UINT16_MAX;
	int32_t x328 = 1;

	t63 = ((x325*x326)-(x327==x328));

	if (t63 != 4065987752U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x329 = UINT32_MAX;
	volatile int16_t x330 = INT16_MIN;
	uint16_t x331 = 5093U;
	int32_t x332 = -1863975;
	uint32_t t64 = 523551955U;

	t64 = ((x329*x330)-(x331==x332));

	if (t64 != 32768U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x333 = 13990660059369LLU;
	static uint16_t x336 = 61U;
	static uint64_t t65 = 32569734922701693LLU;

	t65 = ((x333*x334)-(x335==x336));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x337 = INT16_MIN;
	static int16_t x338 = -1;
	static int16_t x339 = 0;
	uint8_t x340 = 1U;
	static int32_t t66 = 10325142;

	t66 = ((x337*x338)-(x339==x340));

	if (t66 != 32768) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x341 = 63108757404LLU;
	volatile int32_t x342 = INT32_MIN;
	int16_t x343 = INT16_MIN;
	volatile uint8_t x344 = UINT8_MAX;
	uint64_t t67 = 52LLU;

	t67 = ((x341*x342)-(x343==x344));

	if (t67 != 12048928018987483136LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x345 = INT16_MIN;
	uint16_t x346 = 142U;
	int16_t x347 = -1;
	uint8_t x348 = UINT8_MAX;
	int32_t t68 = 610135;

	t68 = ((x345*x346)-(x347==x348));

	if (t68 != -4653056) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x349 = -1LL;
	int32_t x350 = INT32_MIN;
	volatile int16_t x351 = 0;
	int16_t x352 = INT16_MIN;
	volatile int64_t t69 = -534LL;

	t69 = ((x349*x350)-(x351==x352));

	if (t69 != 2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x353 = INT8_MIN;
	uint8_t x354 = 3U;
	int16_t x355 = -1;
	int16_t x356 = INT16_MIN;
	volatile int32_t t70 = 246955473;

	t70 = ((x353*x354)-(x355==x356));

	if (t70 != -384) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x361 = 495U;
	int32_t x363 = 0;
	uint64_t x364 = 4841222260208511LLU;
	int64_t t71 = -37LL;

	t71 = ((x361*x362)-(x363==x364));

	if (t71 != 184579387740LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x365 = 1409;
	int16_t x366 = -1;
	uint32_t x367 = 8752363U;
	int8_t x368 = -1;
	volatile int32_t t72 = -1;

	t72 = ((x365*x366)-(x367==x368));

	if (t72 != -1409) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x381 = -1;
	int16_t x382 = -1;
	int32_t x384 = INT32_MAX;
	static int32_t t73 = 321371;

	t73 = ((x381*x382)-(x383==x384));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x385 = 1;
	int32_t x386 = INT32_MIN;
	int16_t x387 = INT16_MAX;
	volatile int32_t t74 = INT32_MIN;

	t74 = ((x385*x386)-(x387==x388));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x397 = 82U;
	int16_t x398 = INT16_MIN;
	int64_t x399 = INT64_MIN;
	static volatile uint8_t x400 = 46U;
	static int32_t t75 = 114211403;

	t75 = ((x397*x398)-(x399==x400));

	if (t75 != -2686976) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x401 = 988;
	int32_t x402 = -1;
	int64_t x404 = INT64_MAX;
	volatile int32_t t76 = 45;

	t76 = ((x401*x402)-(x403==x404));

	if (t76 != -988) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x405 = INT16_MIN;
	int16_t x406 = INT16_MIN;
	uint8_t x407 = 5U;
	int8_t x408 = INT8_MAX;
	static volatile int32_t t77 = 659;

	t77 = ((x405*x406)-(x407==x408));

	if (t77 != 1073741824) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x409 = 81U;
	int8_t x410 = 31;
	int8_t x411 = INT8_MIN;
	int64_t x412 = INT64_MIN;
	volatile int32_t t78 = -6710037;

	t78 = ((x409*x410)-(x411==x412));

	if (t78 != 2511) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x413 = 2;
	static volatile int16_t x414 = -418;
	int8_t x415 = 1;
	uint32_t x416 = 13428U;

	t79 = ((x413*x414)-(x415==x416));

	if (t79 != -836) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x417 = -1;
	static uint16_t x418 = 13U;
	int8_t x420 = 47;

	t80 = ((x417*x418)-(x419==x420));

	if (t80 != -13) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x421 = -1500460451LL;
	int32_t x422 = INT32_MAX;
	volatile uint8_t x423 = 27U;
	int64_t x424 = -483646463310LL;
	int64_t t81 = 1665229905LL;

	t81 = ((x421*x422)-(x423==x424));

	if (t81 != -3222214281492744797LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x425 = UINT8_MAX;
	uint16_t x426 = 54U;
	int32_t x427 = -1;
	volatile int8_t x428 = INT8_MIN;
	volatile int32_t t82 = -316359;

	t82 = ((x425*x426)-(x427==x428));

	if (t82 != 13770) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x429 = 126LLU;
	uint64_t x430 = 3LLU;
	int16_t x431 = 1;
	uint64_t t83 = 6981371159LLU;

	t83 = ((x429*x430)-(x431==x432));

	if (t83 != 378LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x433 = INT8_MAX;
	volatile int16_t x434 = 2;
	int32_t x436 = INT32_MIN;
	int32_t t84 = 9581706;

	t84 = ((x433*x434)-(x435==x436));

	if (t84 != 254) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x441 = UINT64_MAX;
	int16_t x442 = INT16_MAX;
	static int64_t x443 = 175784LL;
	uint32_t x444 = 46361U;
	volatile uint64_t t85 = 96172939LLU;

	t85 = ((x441*x442)-(x443==x444));

	if (t85 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x447 = -1;
	int16_t x448 = INT16_MIN;

	t86 = ((x445*x446)-(x447==x448));

	if (t86 != 1117306) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x449 = -1;
	int8_t x450 = INT8_MIN;
	int8_t x451 = -1;
	int32_t x452 = -84532;
	volatile int32_t t87 = -1012621586;

	t87 = ((x449*x450)-(x451==x452));

	if (t87 != 128) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x454 = UINT16_MAX;
	volatile uint8_t x455 = UINT8_MAX;
	int32_t t88 = 85295880;

	t88 = ((x453*x454)-(x455==x456));

	if (t88 != 196605) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x457 = -2;
	static uint32_t x458 = 589285U;
	volatile uint64_t x460 = 7031973208508759899LLU;

	t89 = ((x457*x458)-(x459==x460));

	if (t89 != 4293788726U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x463 = INT16_MIN;
	int64_t t90 = -210326828701666121LL;

	t90 = ((x461*x462)-(x463==x464));

	if (t90 != -2567324146382LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x481 = 1U;
	uint32_t x482 = 3797U;
	volatile int8_t x483 = INT8_MAX;
	uint8_t x484 = 68U;
	volatile uint32_t t91 = 139238889U;

	t91 = ((x481*x482)-(x483==x484));

	if (t91 != 3797U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x498 = -6;
	int32_t x499 = -196513;
	int16_t x500 = INT16_MIN;
	static uint32_t t92 = 614584556U;

	t92 = ((x497*x498)-(x499==x500));

	if (t92 != 6U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x501 = 6U;
	int8_t x502 = 3;
	int32_t t93 = -20968659;

	t93 = ((x501*x502)-(x503==x504));

	if (t93 != 18) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x509 = 3;
	int64_t x510 = -1LL;
	int64_t x511 = INT64_MIN;
	int32_t x512 = 347832077;
	volatile int64_t t94 = 99316868LL;

	t94 = ((x509*x510)-(x511==x512));

	if (t94 != -3LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x513 = 3;
	static int16_t x514 = -1;
	volatile int16_t x515 = INT16_MIN;
	int8_t x516 = -1;

	t95 = ((x513*x514)-(x515==x516));

	if (t95 != -3) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x517 = -1;
	volatile int32_t x518 = 5867;
	volatile int32_t x519 = INT32_MIN;
	volatile int8_t x520 = INT8_MIN;

	t96 = ((x517*x518)-(x519==x520));

	if (t96 != -5867) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x533 = 97234U;
	int32_t x534 = -752956431;
	int64_t x535 = -1LL;
	uint32_t t97 = 1U;

	t97 = ((x533*x534)-(x535==x536));

	if (t97 != 3341883058U) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x541 = INT16_MIN;
	static volatile int64_t x542 = -1LL;
	uint64_t x543 = UINT64_MAX;
	static int16_t x544 = INT16_MIN;
	volatile int64_t t98 = 169764897494283051LL;

	t98 = ((x541*x542)-(x543==x544));

	if (t98 != 32768LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x545 = INT16_MIN;
	int8_t x546 = -1;
	volatile uint16_t x547 = 92U;
	int16_t x548 = 0;
	static volatile int32_t t99 = -1169;

	t99 = ((x545*x546)-(x547==x548));

	if (t99 != 32768) { NG(); } else { ; }
	
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

